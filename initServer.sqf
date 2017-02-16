/*
 * Author: Pfc.Christiansen
 * InitServer.
 * All stuff that should only run on server side goes here!
 * Arguments:
 * NONE
 *
 * Return Value:
 * NONE
 *
 */
//---------- Disable Saving
enableSaving [false,false];//Disable SP save

//---------- Params Logging
for [ {_i = 0}, {_i < count(paramsArray)}, {_i = _i + 1} ] do {
	call compile format
	[
		"PARAMS_%1 = %2",
		(configName ((missionConfigFile >> "Params") select _i)),
		(paramsArray select _i)
	];
};

//---------- Time Of Day
definedTime = (paramsArray select 0);
skipTime definedTime;
// -------------- Server scripts
