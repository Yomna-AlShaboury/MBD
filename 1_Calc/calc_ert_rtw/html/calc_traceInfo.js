function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "calc"};
	this.sidHashMap["calc"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "calc:1"};
	this.sidHashMap["calc:1"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Input1"] = {sid: "calc:2"};
	this.sidHashMap["calc:2"] = {rtwname: "<Root>/Input1"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "calc:3"};
	this.sidHashMap["calc:3"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Divide"] = {sid: "calc:6"};
	this.sidHashMap["calc:6"] = {rtwname: "<Root>/Divide"};
	this.rtwnameHashMap["<Root>/Product1"] = {sid: "calc:9"};
	this.sidHashMap["calc:9"] = {rtwname: "<Root>/Product1"};
	this.rtwnameHashMap["<Root>/Subtract"] = {sid: "calc:5"};
	this.sidHashMap["calc:5"] = {rtwname: "<Root>/Subtract"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "calc:10"};
	this.sidHashMap["calc:10"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "calc:11"};
	this.sidHashMap["calc:11"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "calc:12"};
	this.sidHashMap["calc:12"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "calc:13"};
	this.sidHashMap["calc:13"] = {rtwname: "<Root>/Out4"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
