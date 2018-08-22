set C_TypeInfoList {{ 
"midpoint::line" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"this": [[],{ "pointer": "0"}] }],[],""], 
"0": [ "midpoint", {"struct": [[],[],[{ "X0": [[],  {"scalar": "int"}]},{ "Y0": [[],  {"scalar": "int"}]},{ "X1": [[],  {"scalar": "int"}]},{ "Y1": [[],  {"scalar": "int"}]},{ "PX": [[],  {"scalar": "int"}]},{ "PY": [[],  {"scalar": "int"}]}],""]}]
}}
set moduleName midpoint_line
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {midpoint::line}
set C_modelType { void 0 }
set C_modelArgList {
	{ midpoint_X0 int 32 regular {pointer 0}  }
	{ midpoint_Y0 int 32 regular {pointer 0}  }
	{ midpoint_X1 int 32 regular {pointer 0}  }
	{ midpoint_Y1 int 32 regular {pointer 0}  }
	{ midpoint_PX int 32 regular {pointer 1}  }
	{ midpoint_PY int 32 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "midpoint_X0", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "midpoint.X0","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "midpoint_Y0", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "midpoint.Y0","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "midpoint_X1", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "midpoint.X1","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "midpoint_Y1", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "midpoint.Y1","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "midpoint_PX", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "midpoint.PX","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "midpoint_PY", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "midpoint.PY","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 14
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ midpoint_X0 sc_in sc_lv 32 signal 0 } 
	{ midpoint_Y0 sc_in sc_lv 32 signal 1 } 
	{ midpoint_X1 sc_in sc_lv 32 signal 2 } 
	{ midpoint_Y1 sc_in sc_lv 32 signal 3 } 
	{ midpoint_PX sc_out sc_lv 32 signal 4 } 
	{ midpoint_PX_ap_vld sc_out sc_logic 1 outvld 4 } 
	{ midpoint_PY sc_out sc_lv 32 signal 5 } 
	{ midpoint_PY_ap_vld sc_out sc_logic 1 outvld 5 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "midpoint_X0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "midpoint_X0", "role": "default" }} , 
 	{ "name": "midpoint_Y0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "midpoint_Y0", "role": "default" }} , 
 	{ "name": "midpoint_X1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "midpoint_X1", "role": "default" }} , 
 	{ "name": "midpoint_Y1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "midpoint_Y1", "role": "default" }} , 
 	{ "name": "midpoint_PX", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "midpoint_PX", "role": "default" }} , 
 	{ "name": "midpoint_PX_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "midpoint_PX", "role": "ap_vld" }} , 
 	{ "name": "midpoint_PY", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "midpoint_PY", "role": "default" }} , 
 	{ "name": "midpoint_PY_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "midpoint_PY", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "midpoint_line",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "midpoint_X0", "Type" : "None", "Direction" : "I"},
			{"Name" : "midpoint_Y0", "Type" : "None", "Direction" : "I"},
			{"Name" : "midpoint_X1", "Type" : "None", "Direction" : "I"},
			{"Name" : "midpoint_Y1", "Type" : "None", "Direction" : "I"},
			{"Name" : "midpoint_PX", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "midpoint_PY", "Type" : "Vld", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	midpoint_line {
		midpoint_X0 {Type I LastRead 0 FirstWrite -1}
		midpoint_Y0 {Type I LastRead 1 FirstWrite -1}
		midpoint_X1 {Type I LastRead 0 FirstWrite -1}
		midpoint_Y1 {Type I LastRead 1 FirstWrite -1}
		midpoint_PX {Type O LastRead -1 FirstWrite 2}
		midpoint_PY {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	midpoint_X0 { ap_none {  { midpoint_X0 in_data 0 32 } } }
	midpoint_Y0 { ap_none {  { midpoint_Y0 in_data 0 32 } } }
	midpoint_X1 { ap_none {  { midpoint_X1 in_data 0 32 } } }
	midpoint_Y1 { ap_none {  { midpoint_Y1 in_data 0 32 } } }
	midpoint_PX { ap_vld {  { midpoint_PX out_data 1 32 }  { midpoint_PX_ap_vld out_vld 1 1 } } }
	midpoint_PY { ap_vld {  { midpoint_PY out_data 1 32 }  { midpoint_PY_ap_vld out_vld 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
