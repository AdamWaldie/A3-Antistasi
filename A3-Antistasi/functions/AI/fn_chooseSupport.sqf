params ["_group", "_enemy"];

/*  Selects a set of supports the groups should call in against the given enemy

    Execution on: All

    Scope: Internal

    Params:
        _group: GROUP : The group that wants to call in support
        _enemy: OBJECT : The enemy of the group

    Returns:
        _supportTypes: ARRAY of STRINGs : The set of supports which should be called in, [] if none needed
*/

private _fileName = "chooseSupport";
private _supportTypes = [];

//If enemy is more than 600 meters away we always force the support
private _forceSupport = false;
if(_enemy distance2D (getPos (leader _group)) > 600) then
{
    _forceSupport = true;
};

private _enemyVehicle = objectParent _enemy;
//Sometimes the actual vehicle is passed as killer, making sure to catch that
if(isNull _enemyVehicle && {!(_enemy isKindOf "Man")}) then
{
    _enemyVehicle = _enemy;
};

//Check groups combat abilities
private _unitsInGroup = {[_x] call A3A_fnc_canFight} count (units _group);
private _ATLauncherInGroup = {(([_x] call A3A_fnc_typeOfSoldier) == "ATMan") && {[_x] call A3A_fnc_canFight}} count (units _group);
private _AALauncherInGroup = {(([_x] call A3A_fnc_typeOfSoldier) == "AAMan") && {[_x] call A3A_fnc_canFight}} count (units _group);

//Determine class of enemy/ his vehicle
private _enemyType = UNDEFINED;
switch (true) do
{
    case (_enemy isKindOf "Man"):
    {
        private _enemiesNearEnemy = allUnits select {(side (group _x)) == (side (group _enemy)) && {_x distance2D _enemy < 100}};
        if(count _enemiesNearEnemy > 2) then
        {
            //They are fighting some larger group of enemies
            if
            (
                _forceSupport ||
                //Not enough guys to effectively fight
                {(_aliveGroupUnits <= 4) ||
                //Outnumbered
                {(random 2) < (_enemiesNearEnemy/_unitsInGroup)}}
            ) then
            {
                //Use spread out attacks first, if not available use more precise attacks
                _supportTypes = ["QRF", "MORTAR", "CANNON", "AIRSTRIKE", "AIRDROP", "GUNSHIP", "ORBSTRIKE"];
            };
        }
        else
        {
            //They are fighting a small group of enemies
            if
            (
                _forceSupport ||
                //Units are being cowards
                {(random 1) < (_enemiesNearEnemy/_unitsInGroup)}
            ) then
            {
                //Use more precise attacks first, if not available use spread out ones
                _supportTypes = ["QRF", "AIRSTRIKE", "MORTAR", "CANNON"];
            };
        };
    };
    case (_enemyVehicle isKindOf "StaticWeapon"):
    {
        //AI against statics? No way, send in support instantly
        _supportTypes = ["AIRSTRIKE", "CANNON", "CARPET", "MORTAR", "GUNSHIP"];
    };
    case (_enemyVehicle isKindOf "Tank"):
    {
        //They are fighting some kind of MBT, check for their AT capabilities
        if
        (
            _forceSupport ||
            //Enough to defend themselves, still a little chance to call support
            {(_ATLauncherInGroup >= 2) && (random 1 < 0.2) ||
            //A chance to defend themselves, but a medium chance to call support
            {(_ATLauncherInGroup == 1) && (random 1 < 0.5) ||
            //No chance to defend themselves, call support
            {_ATLauncherInGroup == 0}}}
        ) then
        {
            //Use something that can attack targets directly, if not available use strong AoE attacks
            _supportTypes = ["CAS", "GUNSHIP", "CANNON", "AIRDROP", "EMP", "ORBSTRIKE"];
        };
    };
    case (_enemyVehicle isKindOf "LandVehicle"):
    {
        //They are fighting MRAPs, APCs or trucks (or maybe civilian vehicles)
        if
        (
            _forceSupport ||
            //Able to defend themselves, still a chance to call in supports
            {((_ATLauncherInGroup >= 1) && (random 1 < 0.25)) ||
            //Nothing to defend themselves with, call support
            {_ATLauncherInGroup == 0}}
        ) then
        {
            //Use something that can target directly, otherwise use something against vehicle groups
            _supportTypes = ["CAS", "CANNON", "EMP", "AIRSTRIKE", "CARPET", "MORTAR", "GUNSHIP", "AIRDROP"];
        };
    };
    case (_enemyVehicle isKindOf "Plane"):
    {
        //They are fighting an enemy plane
        if
        (
            _forceSupport ||
            //Can defend, small chance for support
            {((_AALauncherInGroup >= 2) && (random 1 < 0.2)) ||
            //Can defend a bit, big chance for support
            {((_AALauncherInGroup == 1) && (random 1 < 0.75)) ||
            //No defense, call support
            {_AALauncherInGroup == 0}}}
        ) then
        {
            //Strike back with a dogfighter, if not available fall back to AA or AoE remote weapons
            _supportTypes = ["AAPLANE", "SAM", "EMP", "AIRDROP"];
        };
    };
    case (_enemyVehicle isKindOf "Helicopter"):
    {
        private _vehicleType = typeOf _enemyVehicle;
        if(_vehicleType in vehNATOAttackHelis || _vehicleType in vehCSATAttackHelis) then
        {
            if
            (
                _forceSupport ||
                //Can defend, but it is still an attack helicopter
                {((_AALauncherInGroup >= 1) && (random 1 < 0.65)) ||
                //Nothing to defend, call support
                {_AALauncherInGroup == 0}}
            ) then
            {
                //Use the typical AA supports available
                _supportTypes = ["SAM", "AAPLANE", "QRF", "EMP", "AIRDROP", "GUNSHIP"];
            };
        }
        else
        {
            if
            (
                _forceSupport ||
                //Cannot defend themselves, call for help
                {_AALauncherInGroup == 0}
            ) then
            {
                //Easy enemy, mostly used for transports, send only light support
                _supportTypes = ["SAM", "GUNSHIP", "QRF", "AAPLANE"];
            };
        };
    };
    default
    {
        [
            1,
            format ["Cannot figure out class for unit %1 (vehicle %2)", _enemy, _enemyVehicle],
            _fileName
        ] call A3A_fnc_log;
    };
};

if(_forceSupport) then
{
    //Remove the slow QRF support if too far away, help needs to be there fast
    _supportTypes = _supportTypes - ["QRF"];
};

_supportTypes;