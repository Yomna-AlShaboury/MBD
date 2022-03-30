#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "TrafficLight_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "TrafficLight.h"
#include "TrafficLight_capi.h"
#include "TrafficLight_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING (
"TrafficLight/Chart" ) , TARGET_STRING ( "RED" ) , 0 , 0 , 0 , 0 , 0 } , { 1
, 1 , TARGET_STRING ( "TrafficLight/Chart" ) , TARGET_STRING ( "YELLOW" ) , 1
, 0 , 0 , 0 , 0 } , { 2 , 1 , TARGET_STRING ( "TrafficLight/Chart" ) ,
TARGET_STRING ( "GREEN" ) , 2 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"TrafficLight/Chart/is_active_c3_TrafficLight" ) , TARGET_STRING (
"is_active_c3_TrafficLight" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING
( "TrafficLight/Chart/is_c3_TrafficLight" ) , TARGET_STRING (
"is_c3_TrafficLight" ) , 0 , 1 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL )
, 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static
const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 ,
0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . jxf3kbsmk2 , & rtB . ifyvkdohet ,
& rtB . jwa35sbjio , & rtDW . p1i00fuy3a , & rtDW . db45bt1shp , } ; static
int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { {
"unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , SS_UINT8 , 0 , 0 ,
0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof ( uint32_T ) , SS_UINT32
, 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.2 , 0.0 } ; static
const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 0 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 5 , ( NULL )
, 0 , ( NULL ) , 0 } , { rtBlockParameters , 0 , rtModelParameters , 0 } , {
( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap
, rtSampleTimeMap , rtDimensionArray } , "float" , { 1015873654U ,
4031081566U , 3269449506U , 3164137651U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * TrafficLight_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void TrafficLight_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void TrafficLight_host_InitializeDataMapInfo (
TrafficLight_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
