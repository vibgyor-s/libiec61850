#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "spidev.h"

// MCP3008 example

int main(){
	printf("MCP3008 Example\n");
	spi s;
	spi_open(&s, "/dev/spidev1.2");
	
	for(int i=0;i<=15;i+=1){

	int ret = 0, ch = 0;
	while(ch < 8){
		ret = spi_getadc(&s, ch);
		printf("channel: %d got: %d/1023\n", ch, ret);
		++ch;
		}
	sleep(1);
	system("clear");
	
	}
	spi_close(&s);
	return 0;
}

