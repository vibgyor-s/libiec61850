/*
 *  GAS8.c
 *
 *  - Source to create an IEC61850 data model for 8 pressure sensors---TRAFAG H72515q
 *  - Sensor interfaced on SPI bus - spidev1.2
 *  - Using Pi Zero 2W with ethernet port on SPI0
 */

#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "static_model.h"

// SPI includes
#include <unistd.h>

#include <string.h>
#include <stdint.h>

#include <assert.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/types.h>
#include <linux/spi/spidev.h>

#include "spidev.h"

# define RX_LEN 3




static int running = 0;
static IedServer iedServer = NULL;

void
sigint_handler(int signalId)
{
    running = 0;
}

static void
connectionHandler (IedServer self, ClientConnection connection, bool connected, void* parameter)
{
    if (connected)
        printf("Connection opened\n");
    else
        printf("Connection closed\n");
}


int
main(int argc, char** argv)
{
    int tcpPort = 102;

    if (argc > 1) {
        tcpPort = atoi(argv[1]);
    }

    printf("Using libIEC61850 version %s\n", LibIEC61850_getVersionString());

    /* Create new server configuration object */
    IedServerConfig config = IedServerConfig_create();

    /* Set buffer size for buffered report control blocks to 200000 bytes */
    IedServerConfig_setReportBufferSize(config, 200000);

    /* Set stack compliance to a specific edition of the standard (WARNING: data model has also to be checked for compliance) */
    IedServerConfig_setEdition(config, IEC_61850_EDITION_2);
    // NOTE:CHANGE TO 2.1


    /* Set the base path for the MMS file services */
    IedServerConfig_setFileServiceBasePath(config, "./vmd-filestore/");

    /* disable MMS file service */
    IedServerConfig_enableFileService(config, false);

    /* enable dynamic data set service */
    IedServerConfig_enableDynamicDataSetService(config, true);

    /* disable log service */
    IedServerConfig_enableLogService(config, false);

    /* set maximum number of clients */
    IedServerConfig_setMaxMmsConnections(config, 2);

    /* Create a new IEC 61850 server instance */
    iedServer = IedServer_createWithConfig(&iedModel, NULL, config);

    /* configuration object is no longer required */
    IedServerConfig_destroy(config);

    /* set the identity values for MMS identify service */
    IedServer_setServerIdentity(iedServer, "Siemens India", "moonstar", "1.0.0");


    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);


    /* MMS server will be instructed to start listening for client connections. */
    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer)) {
        printf("Starting server failed (maybe need root permissions or another server is already using the port)! Exit.\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    running = 1;

    signal(SIGINT, sigint_handler);
    
    //
    spi s;
	spi_open(&s, "/dev/spidev1.2");

    while (running) {
        uint64_t timestamp = Hal_getTimeInMs();
        
        float pres[8] = {0};
        float rnd=0;
        int ret = 0, ch = 0;
	    
        while(ch < 8)
        {
		    ret = spi_getadc(&s, ch);
            //SF 6 pressure @ 20°C [bar abs.] ≈ 0.6303 * I [mA] – 4.1419 - 1 (for absolute)
            rnd = ((0.6303*(((((float)ret/1024)*3.3)/110)*1000)) - 5.1419);
            if (rnd<0)
                rnd = 0;
        
            
            pres[ch] = roundf(rnd * 100) / 100; 
		    //printf("channel: %d got: %f/1023\n %d\n", ch, pres[ch],ret);
		    ++ch;
		}



        Timestamp iecTimestamp;

        Timestamp_clearFlags(&iecTimestamp);
        Timestamp_setTimeInMilliseconds(&iecTimestamp, timestamp);
        Timestamp_setLeapSecondKnown(&iecTimestamp, true);

        
        
        IedServer_lockDataModel(iedServer);

        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_CTRL_SIMG1_Pres_t, &iecTimestamp);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_CTRL_SIMG1_Pres_mag_f, pres[0]);

        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_CTRL_SIMG2_Pres_t, &iecTimestamp);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_CTRL_SIMG2_Pres_mag_f, pres[1]);

        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_CTRL_SIMG3_Pres_t, &iecTimestamp);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_CTRL_SIMG3_Pres_mag_f, pres[2]);

        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_CTRL_SIMG4_Pres_t, &iecTimestamp);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_CTRL_SIMG4_Pres_mag_f, pres[3]);

        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_CTRL_SIMG5_Pres_t, &iecTimestamp);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_CTRL_SIMG5_Pres_mag_f, pres[4]);

        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_CTRL_SIMG6_Pres_t, &iecTimestamp);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_CTRL_SIMG6_Pres_mag_f, pres[5]);

        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_CTRL_SIMG7_Pres_t, &iecTimestamp);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_CTRL_SIMG7_Pres_mag_f, pres[6]);

        IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_CTRL_SIMG8_Pres_t, &iecTimestamp);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_CTRL_SIMG8_Pres_mag_f, pres[7]);

        IedServer_unlockDataModel(iedServer);

        Thread_sleep(100);
    }

    /* stop MMS server - close TCP server socket and all client sockets */
    IedServer_stop(iedServer);

    /* Cleanup - free all resources */
    IedServer_destroy(iedServer);
    spi_close(&s);

    return 0;
} /* main() */
