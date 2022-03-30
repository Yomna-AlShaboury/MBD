function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "CalcSubSys"};
	this.sidHashMap["CalcSubSys"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "CalcSubSys:7"};
	this.sidHashMap["CalcSubSys:7"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "CalcSubSys:22"};
	this.sidHashMap["CalcSubSys:22"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Input1"] = {sid: "CalcSubSys:23"};
	this.sidHashMap["CalcSubSys:23"] = {rtwname: "<Root>/Input1"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "CalcSubSys:7"};
	this.sidHashMap["CalcSubSys:7"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "CalcSubSys:18"};
	this.sidHashMap["CalcSubSys:18"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "CalcSubSys:19"};
	this.sidHashMap["CalcSubSys:19"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "CalcSubSys:20"};
	this.sidHashMap["CalcSubSys:20"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "CalcSubSys:21"};
	this.sidHashMap["CalcSubSys:21"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<S1>/Input"] = {sid: "CalcSubSys:8"};
	this.sidHashMap["CalcSubSys:8"] = {rtwname: "<S1>/Input"};
	this.rtwnameHashMap["<S1>/Input1"] = {sid: "CalcSubSys:9"};
	this.sidHashMap["CalcSubSys:9"] = {rtwname: "<S1>/Input1"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "CalcSubSys:10"};
	this.sidHashMap["CalcSubSys:10"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Divide"] = {sid: "CalcSubSys:11"};
	this.sidHashMap["CalcSubSys:11"] = {rtwname: "<S1>/Divide"};
	this.rtwnameHashMap["<S1>/Product1"] = {sid: "CalcSubSys:12"};
	this.sidHashMap["CalcSubSys:12"] = {rtwname: "<S1>/Product1"};
	this.rtwnameHashMap["<S1>/Subtract"] = {sid: "CalcSubSys:13"};
	this.sidHashMap["CalcSubSys:13"] = {rtwname: "<S1>/Subtract"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "CalcSubSys:14"};
	this.sidHashMap["CalcSubSys:14"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S1>/Out2"] = {sid: "CalcSubSys:15"};
	this.sidHashMap["CalcSubSys:15"] = {rtwname: "<S1>/Out2"};
	this.rtwnameHashMap["<S1>/Out3"] = {sid: "CalcSubSys:16"};
	this.sidHashMap["CalcSubSys:16"] = {rtwname: "<S1>/Out3"};
	this.rtwnameHashMap["<S1>/Out4"] = {sid: "CalcSubSys:17"};
	this.sidHashMap["CalcSubSys:17"] = {rtwname: "<S1>/Out4"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();