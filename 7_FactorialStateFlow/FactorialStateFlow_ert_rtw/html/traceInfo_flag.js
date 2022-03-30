function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["FactorialStateFlow.c:84c54"]=1;
    this.traceFlag["FactorialStateFlow.c:84c66"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["FactorialStateFlow.c:83"]=1;
    this.lineTraceFlag["FactorialStateFlow.c:84"]=1;
    this.lineTraceFlag["FactorialStateFlow.c:86"]=1;
    this.lineTraceFlag["FactorialStateFlow.h:36"]=1;
    this.lineTraceFlag["FactorialStateFlow.h:41"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
