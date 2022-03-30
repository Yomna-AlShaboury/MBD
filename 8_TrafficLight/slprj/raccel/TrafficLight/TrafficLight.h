#ifndef RTW_HEADER_TrafficLight_h_
#define RTW_HEADER_TrafficLight_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef TrafficLight_COMMON_INCLUDES_
#define TrafficLight_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "TrafficLight_types.h"
#include "multiword_types.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME TrafficLight
#define NSAMPLE_TIMES (1) 
#define NINPUTS (0)       
#define NOUTPUTS (3)     
#define NBLOCKIO (3) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { uint8_T jxf3kbsmk2 ; uint8_T ifyvkdohet ; uint8_T jwa35sbjio
; } B ; typedef struct { struct { void * AQHandles ; void * SlioLTF ; }
exjwy2gw3n ; struct { void * AQHandles ; void * SlioLTF ; } bo5oavi55h ;
struct { void * AQHandles ; void * SlioLTF ; } pqgb2xr51x ; int32_T
h22l5yjhaf ; uint32_T db45bt1shp ; uint8_T p1i00fuy3a ; uint8_T c12v2qeygw ;
} DW ; typedef struct { uint8_T fn4vdrd4yw ; uint8_T lz4alawfdl ; uint8_T
phvnlbx5p5 ; } ExtY ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ;
extern DW rtDW ; extern ExtY rtY ; extern const
rtwCAPI_ModelMappingStaticInfo * TrafficLight_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
