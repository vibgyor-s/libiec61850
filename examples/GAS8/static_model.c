/*
 * static_model.c
 *
 * automatically generated from ./GAS1.icd
 */
#include "static_model.h"

static void initializeValues();



LogicalDevice iedModel_CTRL = {
    LogicalDeviceModelType,
    "CTRL",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_CTRL_SIMG1
};

LogicalNode iedModel_CTRL_SIMG1 = {
    LogicalNodeModelType,
    "SIMG1",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_SIMG2,
    (ModelNode*) &iedModel_CTRL_SIMG1_Beh,
};

DataObject iedModel_CTRL_SIMG1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_SIMG1,
    (ModelNode*) &iedModel_CTRL_SIMG1_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG1_Beh_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG1_Beh,
    (ModelNode*) &iedModel_CTRL_SIMG1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG1_Beh,
    (ModelNode*) &iedModel_CTRL_SIMG1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG1_InsAlm = {
    DataObjectModelType,
    "InsAlm",
    (ModelNode*) &iedModel_CTRL_SIMG1,
    (ModelNode*) &iedModel_CTRL_SIMG1_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG1_InsAlm_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG1_InsAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG1_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG1_InsAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG1_InsAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG1_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG1_InsAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG1_InsAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG1_InsAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG1_Pres = {
    DataObjectModelType,
    "Pres",
    (ModelNode*) &iedModel_CTRL_SIMG1,
    (ModelNode*) &iedModel_CTRL_SIMG1_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG1_Pres_mag,
    0
};

DataAttribute iedModel_CTRL_SIMG1_Pres_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_CTRL_SIMG1_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG1_Pres_q,
    (ModelNode*) &iedModel_CTRL_SIMG1_Pres_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG1_Pres_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_CTRL_SIMG1_Pres_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG1_Pres_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG1_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG1_Pres_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG1_Pres_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG1_Pres,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG1_PresAlm = {
    DataObjectModelType,
    "PresAlm",
    (ModelNode*) &iedModel_CTRL_SIMG1,
    NULL,
    (ModelNode*) &iedModel_CTRL_SIMG1_PresAlm_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG1_PresAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG1_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG1_PresAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG1_PresAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG1_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG1_PresAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG1_PresAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG1_PresAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_CTRL_SIMG2 = {
    LogicalNodeModelType,
    "SIMG2",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_SIMG3,
    (ModelNode*) &iedModel_CTRL_SIMG2_Beh,
};

DataObject iedModel_CTRL_SIMG2_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_SIMG2,
    (ModelNode*) &iedModel_CTRL_SIMG2_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG2_Beh_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG2_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG2_Beh,
    (ModelNode*) &iedModel_CTRL_SIMG2_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG2_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG2_Beh,
    (ModelNode*) &iedModel_CTRL_SIMG2_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG2_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG2_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG2_InsAlm = {
    DataObjectModelType,
    "InsAlm",
    (ModelNode*) &iedModel_CTRL_SIMG2,
    (ModelNode*) &iedModel_CTRL_SIMG2_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG2_InsAlm_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG2_InsAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG2_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG2_InsAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG2_InsAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG2_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG2_InsAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG2_InsAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG2_InsAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG2_Pres = {
    DataObjectModelType,
    "Pres",
    (ModelNode*) &iedModel_CTRL_SIMG2,
    (ModelNode*) &iedModel_CTRL_SIMG2_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG2_Pres_mag,
    0
};

DataAttribute iedModel_CTRL_SIMG2_Pres_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_CTRL_SIMG2_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG2_Pres_q,
    (ModelNode*) &iedModel_CTRL_SIMG2_Pres_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG2_Pres_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_CTRL_SIMG2_Pres_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG2_Pres_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG2_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG2_Pres_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG2_Pres_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG2_Pres,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG2_PresAlm = {
    DataObjectModelType,
    "PresAlm",
    (ModelNode*) &iedModel_CTRL_SIMG2,
    NULL,
    (ModelNode*) &iedModel_CTRL_SIMG2_PresAlm_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG2_PresAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG2_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG2_PresAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG2_PresAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG2_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG2_PresAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG2_PresAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG2_PresAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_CTRL_SIMG3 = {
    LogicalNodeModelType,
    "SIMG3",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_SIMG4,
    (ModelNode*) &iedModel_CTRL_SIMG3_Beh,
};

DataObject iedModel_CTRL_SIMG3_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_SIMG3,
    (ModelNode*) &iedModel_CTRL_SIMG3_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG3_Beh_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG3_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG3_Beh,
    (ModelNode*) &iedModel_CTRL_SIMG3_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG3_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG3_Beh,
    (ModelNode*) &iedModel_CTRL_SIMG3_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG3_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG3_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG3_InsAlm = {
    DataObjectModelType,
    "InsAlm",
    (ModelNode*) &iedModel_CTRL_SIMG3,
    (ModelNode*) &iedModel_CTRL_SIMG3_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG3_InsAlm_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG3_InsAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG3_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG3_InsAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG3_InsAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG3_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG3_InsAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG3_InsAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG3_InsAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG3_Pres = {
    DataObjectModelType,
    "Pres",
    (ModelNode*) &iedModel_CTRL_SIMG3,
    (ModelNode*) &iedModel_CTRL_SIMG3_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG3_Pres_mag,
    0
};

DataAttribute iedModel_CTRL_SIMG3_Pres_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_CTRL_SIMG3_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG3_Pres_q,
    (ModelNode*) &iedModel_CTRL_SIMG3_Pres_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG3_Pres_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_CTRL_SIMG3_Pres_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG3_Pres_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG3_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG3_Pres_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG3_Pres_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG3_Pres,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG3_PresAlm = {
    DataObjectModelType,
    "PresAlm",
    (ModelNode*) &iedModel_CTRL_SIMG3,
    NULL,
    (ModelNode*) &iedModel_CTRL_SIMG3_PresAlm_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG3_PresAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG3_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG3_PresAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG3_PresAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG3_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG3_PresAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG3_PresAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG3_PresAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_CTRL_SIMG4 = {
    LogicalNodeModelType,
    "SIMG4",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_SIMG5,
    (ModelNode*) &iedModel_CTRL_SIMG4_Beh,
};

DataObject iedModel_CTRL_SIMG4_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_SIMG4,
    (ModelNode*) &iedModel_CTRL_SIMG4_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG4_Beh_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG4_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG4_Beh,
    (ModelNode*) &iedModel_CTRL_SIMG4_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG4_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG4_Beh,
    (ModelNode*) &iedModel_CTRL_SIMG4_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG4_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG4_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG4_InsAlm = {
    DataObjectModelType,
    "InsAlm",
    (ModelNode*) &iedModel_CTRL_SIMG4,
    (ModelNode*) &iedModel_CTRL_SIMG4_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG4_InsAlm_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG4_InsAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG4_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG4_InsAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG4_InsAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG4_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG4_InsAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG4_InsAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG4_InsAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG4_Pres = {
    DataObjectModelType,
    "Pres",
    (ModelNode*) &iedModel_CTRL_SIMG4,
    (ModelNode*) &iedModel_CTRL_SIMG4_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG4_Pres_mag,
    0
};

DataAttribute iedModel_CTRL_SIMG4_Pres_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_CTRL_SIMG4_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG4_Pres_q,
    (ModelNode*) &iedModel_CTRL_SIMG4_Pres_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG4_Pres_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_CTRL_SIMG4_Pres_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG4_Pres_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG4_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG4_Pres_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG4_Pres_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG4_Pres,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG4_PresAlm = {
    DataObjectModelType,
    "PresAlm",
    (ModelNode*) &iedModel_CTRL_SIMG4,
    NULL,
    (ModelNode*) &iedModel_CTRL_SIMG4_PresAlm_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG4_PresAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG4_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG4_PresAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG4_PresAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG4_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG4_PresAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG4_PresAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG4_PresAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_CTRL_SIMG5 = {
    LogicalNodeModelType,
    "SIMG5",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_SIMG6,
    (ModelNode*) &iedModel_CTRL_SIMG5_Beh,
};

DataObject iedModel_CTRL_SIMG5_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_SIMG5,
    (ModelNode*) &iedModel_CTRL_SIMG5_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG5_Beh_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG5_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG5_Beh,
    (ModelNode*) &iedModel_CTRL_SIMG5_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG5_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG5_Beh,
    (ModelNode*) &iedModel_CTRL_SIMG5_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG5_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG5_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG5_InsAlm = {
    DataObjectModelType,
    "InsAlm",
    (ModelNode*) &iedModel_CTRL_SIMG5,
    (ModelNode*) &iedModel_CTRL_SIMG5_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG5_InsAlm_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG5_InsAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG5_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG5_InsAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG5_InsAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG5_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG5_InsAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG5_InsAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG5_InsAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG5_Pres = {
    DataObjectModelType,
    "Pres",
    (ModelNode*) &iedModel_CTRL_SIMG5,
    (ModelNode*) &iedModel_CTRL_SIMG5_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG5_Pres_mag,
    0
};

DataAttribute iedModel_CTRL_SIMG5_Pres_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_CTRL_SIMG5_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG5_Pres_q,
    (ModelNode*) &iedModel_CTRL_SIMG5_Pres_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG5_Pres_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_CTRL_SIMG5_Pres_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG5_Pres_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG5_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG5_Pres_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG5_Pres_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG5_Pres,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG5_PresAlm = {
    DataObjectModelType,
    "PresAlm",
    (ModelNode*) &iedModel_CTRL_SIMG5,
    NULL,
    (ModelNode*) &iedModel_CTRL_SIMG5_PresAlm_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG5_PresAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG5_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG5_PresAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG5_PresAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG5_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG5_PresAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG5_PresAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG5_PresAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_CTRL_SIMG6 = {
    LogicalNodeModelType,
    "SIMG6",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_SIMG7,
    (ModelNode*) &iedModel_CTRL_SIMG6_Beh,
};

DataObject iedModel_CTRL_SIMG6_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_SIMG6,
    (ModelNode*) &iedModel_CTRL_SIMG6_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG6_Beh_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG6_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG6_Beh,
    (ModelNode*) &iedModel_CTRL_SIMG6_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG6_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG6_Beh,
    (ModelNode*) &iedModel_CTRL_SIMG6_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG6_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG6_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG6_InsAlm = {
    DataObjectModelType,
    "InsAlm",
    (ModelNode*) &iedModel_CTRL_SIMG6,
    (ModelNode*) &iedModel_CTRL_SIMG6_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG6_InsAlm_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG6_InsAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG6_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG6_InsAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG6_InsAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG6_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG6_InsAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG6_InsAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG6_InsAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG6_Pres = {
    DataObjectModelType,
    "Pres",
    (ModelNode*) &iedModel_CTRL_SIMG6,
    (ModelNode*) &iedModel_CTRL_SIMG6_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG6_Pres_mag,
    0
};

DataAttribute iedModel_CTRL_SIMG6_Pres_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_CTRL_SIMG6_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG6_Pres_q,
    (ModelNode*) &iedModel_CTRL_SIMG6_Pres_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG6_Pres_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_CTRL_SIMG6_Pres_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG6_Pres_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG6_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG6_Pres_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG6_Pres_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG6_Pres,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG6_PresAlm = {
    DataObjectModelType,
    "PresAlm",
    (ModelNode*) &iedModel_CTRL_SIMG6,
    NULL,
    (ModelNode*) &iedModel_CTRL_SIMG6_PresAlm_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG6_PresAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG6_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG6_PresAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG6_PresAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG6_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG6_PresAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG6_PresAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG6_PresAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_CTRL_SIMG7 = {
    LogicalNodeModelType,
    "SIMG7",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_SIMG8,
    (ModelNode*) &iedModel_CTRL_SIMG7_Beh,
};

DataObject iedModel_CTRL_SIMG7_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_SIMG7,
    (ModelNode*) &iedModel_CTRL_SIMG7_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG7_Beh_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG7_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG7_Beh,
    (ModelNode*) &iedModel_CTRL_SIMG7_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG7_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG7_Beh,
    (ModelNode*) &iedModel_CTRL_SIMG7_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG7_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG7_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG7_InsAlm = {
    DataObjectModelType,
    "InsAlm",
    (ModelNode*) &iedModel_CTRL_SIMG7,
    (ModelNode*) &iedModel_CTRL_SIMG7_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG7_InsAlm_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG7_InsAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG7_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG7_InsAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG7_InsAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG7_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG7_InsAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG7_InsAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG7_InsAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG7_Pres = {
    DataObjectModelType,
    "Pres",
    (ModelNode*) &iedModel_CTRL_SIMG7,
    (ModelNode*) &iedModel_CTRL_SIMG7_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG7_Pres_mag,
    0
};

DataAttribute iedModel_CTRL_SIMG7_Pres_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_CTRL_SIMG7_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG7_Pres_q,
    (ModelNode*) &iedModel_CTRL_SIMG7_Pres_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG7_Pres_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_CTRL_SIMG7_Pres_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG7_Pres_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG7_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG7_Pres_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG7_Pres_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG7_Pres,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG7_PresAlm = {
    DataObjectModelType,
    "PresAlm",
    (ModelNode*) &iedModel_CTRL_SIMG7,
    NULL,
    (ModelNode*) &iedModel_CTRL_SIMG7_PresAlm_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG7_PresAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG7_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG7_PresAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG7_PresAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG7_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG7_PresAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG7_PresAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG7_PresAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_CTRL_SIMG8 = {
    LogicalNodeModelType,
    "SIMG8",
    (ModelNode*) &iedModel_CTRL,
    NULL,
    (ModelNode*) &iedModel_CTRL_SIMG8_Beh,
};

DataObject iedModel_CTRL_SIMG8_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_SIMG8,
    (ModelNode*) &iedModel_CTRL_SIMG8_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG8_Beh_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG8_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG8_Beh,
    (ModelNode*) &iedModel_CTRL_SIMG8_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG8_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG8_Beh,
    (ModelNode*) &iedModel_CTRL_SIMG8_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG8_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG8_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG8_InsAlm = {
    DataObjectModelType,
    "InsAlm",
    (ModelNode*) &iedModel_CTRL_SIMG8,
    (ModelNode*) &iedModel_CTRL_SIMG8_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG8_InsAlm_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG8_InsAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG8_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG8_InsAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG8_InsAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG8_InsAlm,
    (ModelNode*) &iedModel_CTRL_SIMG8_InsAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG8_InsAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG8_InsAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG8_Pres = {
    DataObjectModelType,
    "Pres",
    (ModelNode*) &iedModel_CTRL_SIMG8,
    (ModelNode*) &iedModel_CTRL_SIMG8_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG8_Pres_mag,
    0
};

DataAttribute iedModel_CTRL_SIMG8_Pres_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_CTRL_SIMG8_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG8_Pres_q,
    (ModelNode*) &iedModel_CTRL_SIMG8_Pres_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG8_Pres_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_CTRL_SIMG8_Pres_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG8_Pres_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG8_Pres,
    (ModelNode*) &iedModel_CTRL_SIMG8_Pres_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG8_Pres_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG8_Pres,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_SIMG8_PresAlm = {
    DataObjectModelType,
    "PresAlm",
    (ModelNode*) &iedModel_CTRL_SIMG8,
    NULL,
    (ModelNode*) &iedModel_CTRL_SIMG8_PresAlm_stVal,
    0
};

DataAttribute iedModel_CTRL_SIMG8_PresAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_SIMG8_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG8_PresAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG8_PresAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_SIMG8_PresAlm,
    (ModelNode*) &iedModel_CTRL_SIMG8_PresAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_SIMG8_PresAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_SIMG8_PresAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};









IedModel iedModel = {
    "TEMPLATE",
    &iedModel_CTRL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    initializeValues
};

static void
initializeValues()
{
}
