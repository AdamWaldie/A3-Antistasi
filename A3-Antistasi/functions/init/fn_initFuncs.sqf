scriptName "initFuncs.sqf";
private _fileName = "initFuncs.sqf";
[2,"initFuncs started",_fileName] call A3A_fnc_log;

[] call compile preprocessFileLineNumbers "scripts\Init_UPSMON.sqf";
[] call jn_fnc_logistics_init;
boxX call jn_fnc_arsenal_init;

[2,"initFuncs completed",_fileName] call A3A_fnc_log;

//Autoflip Init
VEH_fnc_xehInit = compileFinal preProcessFileLineNumbers "Scripts\VEH_fnc_xehInit.sqf";