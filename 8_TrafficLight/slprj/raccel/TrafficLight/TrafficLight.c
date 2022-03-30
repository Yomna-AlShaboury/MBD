#include "rt_logging_mmi.h"
#include "TrafficLight_capi.h"
#include <math.h>
#include "TrafficLight.h"
#include "TrafficLight_private.h"
#include "TrafficLight_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 1 , & stopRequested ) ; }
rtExtModeShutdown ( 1 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 1 ; const char_T
* gbl_raccel_Version = "9.3 (R2020a) 18-Nov-2019" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\TrafficLight\\TrafficLight_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern void * gblAperiodicPartitionHitTimes ; const int_T
gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [ ] = { - 1 }
; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ; int_T enableFcnCallFlag [ ] = { 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( const char * inportFileName , int *
matFileFormat ) { return rt_RapidReadInportsMatFile ( inportFileName ,
matFileFormat , 1 ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#define gmfvo2xgrs (2U)
#define jghvsmre4h (3U)
#define jjj0v4xszr (1U)
#define m2soehxe4h (-1)
B rtB ; DW rtDW ; ExtY rtY ; static SimStruct model_S ; SimStruct * const rtS
= & model_S ; void MdlInitialize ( void ) { rtDW . h22l5yjhaf = m2soehxe4h ;
rtDW . c12v2qeygw = 0U ; rtDW . p1i00fuy3a = 0U ; rtDW . db45bt1shp = 0U ;
rtB . jxf3kbsmk2 = 0U ; rtB . ifyvkdohet = 0U ; rtB . jwa35sbjio = 0U ; }
void MdlStart ( void ) { { void * * slioCatalogueAddr = rt_slioCatalogueAddr
( ) ; void * r2 = ( NULL ) ; void * * pOSigstreamManagerAddr = ( NULL ) ;
const int maxErrorBufferSize = 16384 ; char errMsgCreatingOSigstreamManager [
16384 ] ; bool errorCreatingOSigstreamManager = false ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ,
errMsgCreatingOSigstreamManager , maxErrorBufferSize ) ; if (
errorCreatingOSigstreamManager ) { * pOSigstreamManagerAddr = ( NULL ) ;
ssSetErrorStatus ( rtS , errMsgCreatingOSigstreamManager ) ; return ; } } {
bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } { void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
! slioCatalogue || ! rtwIsLoggingToFile ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"RED" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "RED" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "TrafficLight/red" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "RED" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_UINT8 ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . exjwy2gw3n . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "075a2e2d-77db-4b42-ad13-7f7013cf7122" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. exjwy2gw3n . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . exjwy2gw3n
. AQHandles , "0.2" , 0.2 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW
. exjwy2gw3n . AQHandles , ssGetT ( rtS ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . exjwy2gw3n . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . exjwy2gw3n . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . exjwy2gw3n . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . exjwy2gw3n . AQHandles , 1 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
exjwy2gw3n . SlioLTF = ( NULL ) ; } { void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
! slioCatalogue || ! rtwIsLoggingToFile ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"YELLOW" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "YELLOW" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "TrafficLight/yellow" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "YELLOW" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_UINT8 ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . bo5oavi55h . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "2c542ed7-00dd-4159-ac19-c07703cc0ed0" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. bo5oavi55h . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . bo5oavi55h
. AQHandles , "0.2" , 0.2 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW
. bo5oavi55h . AQHandles , ssGetT ( rtS ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . bo5oavi55h . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . bo5oavi55h . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . bo5oavi55h . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . bo5oavi55h . AQHandles , 2 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
bo5oavi55h . SlioLTF = ( NULL ) ; } { void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
! slioCatalogue || ! rtwIsLoggingToFile ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"GREEN" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "GREEN" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "TrafficLight/green" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "GREEN" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_UINT8 ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . pqgb2xr51x . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "f59c1308-5773-40d1-8fb6-4619bb96d358" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. pqgb2xr51x . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . pqgb2xr51x
. AQHandles , "0.2" , 0.2 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW
. pqgb2xr51x . AQHandles , ssGetT ( rtS ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . pqgb2xr51x . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . pqgb2xr51x . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . pqgb2xr51x . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . pqgb2xr51x . AQHandles , 3 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
pqgb2xr51x . SlioLTF = ( NULL ) ; } MdlInitialize ( ) ; } void MdlOutputs (
int_T tid ) { if ( rtDW . c12v2qeygw < 15U ) { rtDW . c12v2qeygw ++ ; } rtDW
. h22l5yjhaf = m2soehxe4h ; if ( rtDW . p1i00fuy3a == 0U ) { rtDW .
p1i00fuy3a = 1U ; rtDW . db45bt1shp = jjj0v4xszr ; rtDW . c12v2qeygw = 0U ;
rtB . jxf3kbsmk2 = 0U ; rtB . ifyvkdohet = 0U ; rtB . jwa35sbjio = 0U ; }
else { switch ( rtDW . db45bt1shp ) { case jjj0v4xszr : if ( rtDW .
c12v2qeygw >= 15U ) { rtDW . db45bt1shp = jghvsmre4h ; rtDW . c12v2qeygw = 0U
; rtB . jxf3kbsmk2 = 1U ; rtB . ifyvkdohet = 0U ; rtB . jwa35sbjio = 0U ; }
else { rtB . jxf3kbsmk2 = 1U ; rtB . ifyvkdohet = 0U ; rtB . jwa35sbjio = 0U
; } break ; case gmfvo2xgrs : if ( rtDW . c12v2qeygw >= 15U ) { rtDW .
db45bt1shp = jjj0v4xszr ; rtDW . c12v2qeygw = 0U ; rtB . jxf3kbsmk2 = 0U ;
rtB . ifyvkdohet = 0U ; rtB . jwa35sbjio = 0U ; } else { rtB . jxf3kbsmk2 =
0U ; rtB . ifyvkdohet = 0U ; rtB . jwa35sbjio = 1U ; } break ; default : if (
rtDW . c12v2qeygw >= 15U ) { rtDW . db45bt1shp = gmfvo2xgrs ; rtDW .
c12v2qeygw = 0U ; rtB . jxf3kbsmk2 = 0U ; rtB . ifyvkdohet = 1U ; rtB .
jwa35sbjio = 0U ; } else { rtB . jxf3kbsmk2 = 0U ; rtB . ifyvkdohet = 1U ;
rtB . jwa35sbjio = 0U ; } break ; } } rtY . fn4vdrd4yw = rtB . jxf3kbsmk2 ;
rtY . lz4alawfdl = rtB . ifyvkdohet ; rtY . phvnlbx5p5 = rtB . jwa35sbjio ; {
if ( ( rtDW . exjwy2gw3n . AQHandles || rtDW . exjwy2gw3n . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . exjwy2gw3n .
AQHandles , rtDW . exjwy2gw3n . SlioLTF , 0 , ssGetT ( rtS ) , ( char * ) &
rtB . jxf3kbsmk2 + 0 ) ; } } { if ( ( rtDW . bo5oavi55h . AQHandles || rtDW .
bo5oavi55h . SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal (
rtDW . bo5oavi55h . AQHandles , rtDW . bo5oavi55h . SlioLTF , 0 , ssGetT (
rtS ) , ( char * ) & rtB . ifyvkdohet + 0 ) ; } } { if ( ( rtDW . pqgb2xr51x
. AQHandles || rtDW . pqgb2xr51x . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . pqgb2xr51x . AQHandles , rtDW . pqgb2xr51x .
SlioLTF , 0 , ssGetT ( rtS ) , ( char * ) & rtB . jwa35sbjio + 0 ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { UNUSED_PARAMETER
( tid ) ; } void MdlTerminate ( void ) { { if ( rtDW . exjwy2gw3n . AQHandles
) { sdiTerminateStreaming ( & rtDW . exjwy2gw3n . AQHandles ) ; } if ( rtDW .
exjwy2gw3n . SlioLTF ) { rtwDestructAccessorPointer ( rtDW . exjwy2gw3n .
SlioLTF ) ; } } { if ( rtDW . bo5oavi55h . AQHandles ) {
sdiTerminateStreaming ( & rtDW . bo5oavi55h . AQHandles ) ; } if ( rtDW .
bo5oavi55h . SlioLTF ) { rtwDestructAccessorPointer ( rtDW . bo5oavi55h .
SlioLTF ) ; } } { if ( rtDW . pqgb2xr51x . AQHandles ) {
sdiTerminateStreaming ( & rtDW . pqgb2xr51x . AQHandles ) ; } if ( rtDW .
pqgb2xr51x . SlioLTF ) { rtwDestructAccessorPointer ( rtDW . pqgb2xr51x .
SlioLTF ) ; } } if ( rt_slioCatalogue ( ) != ( NULL ) ) { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ; ssSetNumY (
rtS , 3 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 1 ) ; ssSetNumBlocks ( rtS , 8 ) ;
ssSetNumBlockIO ( rtS , 3 ) ; } void MdlInitializeSampleTimes ( void ) {
ssSetSampleTime ( rtS , 0 , 0.2 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 1015873654U ) ;
ssSetChecksumVal ( rtS , 1 , 4031081566U ) ; ssSetChecksumVal ( rtS , 2 ,
3269449506U ) ; ssSetChecksumVal ( rtS , 3 , 3164137651U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { ssSetY ( rtS , & rtY ) ; ( void ) memset ( ( void * ) & rtY , 0
, sizeof ( ExtY ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork (
rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 14 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
TrafficLight_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS
, true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "TrafficLight" ) ;
ssSetPath ( rtS , "TrafficLight" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal
( rtS , rtInf ) ; ssSetStepSize ( rtS , 0.2 ) ; ssSetFixedStepSize ( rtS ,
0.2 ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo .
loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } {
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; { static void * rt_LoggedOutputSignalPtrs [ ] = { & rtY .
fn4vdrd4yw , & rtY . lz4alawfdl , & rtY . phvnlbx5p5 } ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( ( LogSignalPtrsType )
rt_LoggedOutputSignalPtrs ) ) ; } { static int_T rt_LoggedOutputWidths [ ] =
{ 1 , 1 , 1 } ; static int_T rt_LoggedOutputNumDimensions [ ] = { 1 , 1 , 1 }
; static int_T rt_LoggedOutputDimensions [ ] = { 1 , 1 , 1 } ; static
boolean_T rt_LoggedOutputIsVarDims [ ] = { 0 , 0 , 0 } ; static void *
rt_LoggedCurrentSignalDimensions [ ] = { ( NULL ) , ( NULL ) , ( NULL ) } ;
static int_T rt_LoggedCurrentSignalDimensionsSize [ ] = { 4 , 4 , 4 } ;
static BuiltInDTypeId rt_LoggedOutputDataTypeIds [ ] = { SS_UINT8 , SS_UINT8
, SS_UINT8 } ; static int_T rt_LoggedOutputComplexSignals [ ] = { 0 , 0 , 0 }
; static RTWPreprocessingFcnPtr rt_LoggingPreprocessingFcnPtrs [ ] = { ( NULL
) , ( NULL ) , ( NULL ) } ; static const char_T * rt_LoggedOutputLabels [ ] =
{ "RED" , "YELLOW" , "GREEN" } ; static const char_T *
rt_LoggedOutputBlockNames [ ] = { "TrafficLight/red" , "TrafficLight/yellow"
, "TrafficLight/green" } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_UINT8 , SS_UINT8 , 0 , 0 , 0 , 1.0
, 0 , 0.0 } , { 0 , SS_UINT8 , SS_UINT8 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_UINT8 , SS_UINT8 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static RTWLogSignalInfo
rt_LoggedOutputSignalInfo [ ] = { { 3 , rt_LoggedOutputWidths ,
rt_LoggedOutputNumDimensions , rt_LoggedOutputDimensions ,
rt_LoggedOutputIsVarDims , rt_LoggedCurrentSignalDimensions ,
rt_LoggedCurrentSignalDimensionsSize , rt_LoggedOutputDataTypeIds ,
rt_LoggedOutputComplexSignals , ( NULL ) , rt_LoggingPreprocessingFcnPtrs , {
rt_LoggedOutputLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedOutputBlockNames } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert } } ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS
) , rt_LoggedOutputSignalInfo ) ; rt_LoggedCurrentSignalDimensions [ 0 ] = &
rt_LoggedOutputWidths [ 0 ] ; rt_LoggedCurrentSignalDimensions [ 1 ] = &
rt_LoggedOutputWidths [ 1 ] ; rt_LoggedCurrentSignalDimensions [ 2 ] = &
rt_LoggedOutputWidths [ 2 ] ; } rtliSetLogY ( ssGetRTWLogInfo ( rtS ) ,
"yout" ) ; } { static ssSolverInfo slvrInfo ; ssSetSolverInfo ( rtS , &
slvrInfo ) ; ssSetSolverName ( rtS , "FixedStepDiscrete" ) ;
ssSetVariableStepSolver ( rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 ,
1015873654U ) ; ssSetChecksumVal ( rtS , 1 , 4031081566U ) ; ssSetChecksumVal
( rtS , 2 , 3269449506U ) ; ssSetChecksumVal ( rtS , 3 , 3164137651U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 2 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = - 1 ; void MdlOutputsParameterSampleTime
( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
