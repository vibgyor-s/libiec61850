/*
 * static_model.c
 *
 * automatically generated from GAS1.icd
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
    NULL,
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
