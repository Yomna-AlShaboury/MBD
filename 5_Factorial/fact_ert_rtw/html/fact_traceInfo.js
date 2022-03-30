function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "fact"};
	this.sidHashMap["fact"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "fact:10"};
	this.sidHashMap["fact:10"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "fact:20"};
	this.sidHashMap["fact:20"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/For Iterator Subsystem1"] = {sid: "fact:10"};
	this.sidHashMap["fact:10"] = {rtwname: "<Root>/For Iterator Subsystem1"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "fact:21"};
	this.sidHashMap["fact:21"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>/Input"] = {sid: "fact:11"};
	this.sidHashMap["fact:11"] = {rtwname: "<S1>/Input"};
	this.rtwnameHashMap["<S1>/For Iterator"] = {sid: "fact:13"};
	this.sidHashMap["fact:13"] = {rtwname: "<S1>/For Iterator"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "fact:14"};
	this.sidHashMap["fact:14"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Unit Delay"] = {sid: "fact:19"};
	this.sidHashMap["fact:19"] = {rtwname: "<S1>/Unit Delay"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "fact:15"};
	this.sidHashMap["fact:15"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
