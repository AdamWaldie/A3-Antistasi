class A3A
{
	class Init
	{
		//Main initialisation functions.
		class initServer {};
		class initClient {};

		//Other initialisation functions (generally called by the above)
		class cityinfo {};
		class credits {};
        class initAmbientAnimations {};
		class initACEUnconsciousHandler {};
		class initFuncs {};
		class initGarrisons {};
		class initGetMissionPath {};
		class initSpawnPlaces {};
        class initSpawnPlacesBuildings {};
        class initSpawnPlacesHangars {};
        class initSpawnPlacesHelipads {};
        class initSpawnPlacesStatics {};
        class initSpawnPlacesVehicles {};

		class initVar {};
		class initVarClient {};
		class initVarCommon {};
		class initVarServer {};

		class initZones {};
		class modBlacklist {};
		class playerMarkers {};
		class prepareMarkerArrays {};
		class reinitY {};
		class resourcecheck {};
		class tags {};
	};

	class Base
	{
		class addActionBreachVehicle {};
		class addHC {};
		class addTimeForIdle {};
        class addTimeoutForUnit {};
		class AILoadInfo {};
		class rebelAttack {};
		class blackout {};
		class buildHQ {};
		class citiesToCivPatrol {};
		class citySupportChange {};
		class commsMP {};
        class createBreachChargeText {};
		class createControls {};
		class createOutpostsFIA {};
		class createPetros {};
		class deleteControls {};
		class destroyCity {};
		class distanceUnits {};
		class economicsAI {};
		class ejectPvPPlayerIfInvalidVehicle {};
		class FIAradio {};
		class findBasesForConvoy {};
		class findNearestGoodRoad {};
		class flagaction {};
		class fogCheck {};
		class garbageCleaner {};
		class garrisonInfo {};
		class healAndRepair {};
		class initPetros {};
		class isFrontline {};
		class isTheSameIsland {};
		class joinMultipleGroups {};
		class keys {};
		class localizar {};
		class location {};
		class logPerformance {};
		class markerChange {};
		class moveHQ {};
		class mrkUpdate {};
		class mrkWIN {};
		class NATOFT {};
		class numericRank {};
		class onHeadlessClientDisconnect {};
		class onPlayerDisconnect {};
		class outpostDialog {};
		class patrolDestinations {};
		class placementSelection {};
		class playableUnits {};
		class powerCheck {};
		class powerReorg {};
		class prestige {};
		class radioCheck {};
		class rebuildAssets {};
		class rebuildRadioTower {};
		class relocateHQObjects {};
		class repairRuinedBuilding {};
		class resourceCheckSkipTime {};
		class resourcesFIA {};
		class returnMuzzle {};
		class revealToPlayer {};
		class scheduler {};
		class sellVehicle {};
		class setMarkerAlphaForSide {};
		class sizeMarker {};
		class splitVehicleCrewIntoOwnGroups {};
		class startBreachVehicle {};
		class statistics {};
		class stripGearFromLoadout {};
		class teleportVehicleToBase {};
		class timingCA {};
		class translateVariable {};
		class unlockVehicle {};
		class zoneCheck {};
	};

	class AI
	{
		class occupantInvaderUnitKilledEH {};
		class airbomb {};
		class airdrop {};
		class AIreactOnKill {};
		class airstrike {};
		class artillery {};
		class artySupport {};
		class askHelp {};
		class assaultBuilding {};
		class attackDrillAI {};
		class autoHealFnc {};
		class autoLoot {};
		class autoRearm {};
		class canConquer {};
		class canFight {};
		class captureX {};
		class chargeWithSmoke {};
		class coverage {};
		class destroyBuilding {};
		class doFlank {};
		class enemyList {};
		class entriesLand {};
		class fastrope {};
		class findSafeRoadToUnload {};
		class guardDog {};
		class hasRadio {};
		class help {};
		class hideInBuilding {};
		class inmuneConvoy {};
		class interrogate {};
		class isBuildingPosition {};
		class landThreatEval {};
		class liberaterefugee {};
		class liberatePOW {};
		class mineSweep {};
		class mortarDrill {};
		class mortarSupport {};
		class mortyAI {};
		class napalm {};
		class napalmDamage {};
		class nearEnemy {};
		class rearmCall {};
		class recallGroup {};
		class smokeCoverAuto {};
        class startAmbientAnims {};
		class staticAutoT {};
		class staticMGDrill {};
		class suppressingFire {};
		class surrenderAction {};
		class typeOfSoldier {};
		class undercoverAI {};
		class unitGetToCover {};
		class useFlares {};
		class VANTinfo {};
		class vehicleMarkers {};
	};

	class Convoy
	{
        class cleanConvoyMarker {};
		class convoyDebug {};
		class convoyMovement {};
		class createAIAction {};
		class createConvoy {};
		class despawnConvoy {};
		class findAirportForAirstrike {};
		class followVehicle {};
		class onConvoyArrival {};
		class onSpawnedArrival {};
		class roadblockFight {};
		class selectAndCreateVehicle {};
		class spawnConvoy {};
		class spawnConvoyLine {};
	};

	class Create
	{
		class AAFroadPatrol {};
		class airportCanAttack {};
		class AIVEHinit {};
		class ambientCivs {};
		class cargoSeats {};
		class CIVinit {};
		class civVEHinit {};
		class cleanserVeh {};
		class createAIcontrols {};
		class createCIV {};
		class createSDKgarrisonsTemp {};
		class FIAinitBases {};
		class invaderPunish {};
		class minefieldAAF {};
		class mortarPos {};
		class NATOinit {};
		class patrolCA {};
		class reinforcementsAI {};
		class remoteBattle {};
		class removeVehFromPool {};
		class safeVehicleSpawn {};
		class spawnGroup {};
		class vehAvailable {};
		class VEHdespawner {};
		class wavedCA {};
		class WPCreate {};
	};

	class Debugging
	{
		class deleteEmptyGroupsOnSide {};
		class installSchrodingersBuildingFix {};
		class spawnDebuggingLoop {};
	};

	class Dialogs
	{

		class buyVehicle {};
		class buyVehicleCiv {};
		class clearForest {};
		class createDialog_setParams {};
		class createDialog_shouldLoadPersonalSave {};
		class dialogHQ {};
		class fastTravelRadio {};
		class mineDialog {};
		class moveHQObject {};
		class skiptime {};
		class squadOptions {};
		class squadRecruit {};
		class unit_recruit {};
	};

	class Garage
	{
		class addToPersonalGarage {};
		class addToPersonalGarageLocal {};
		class attemptPlaceVehicle {};
		class displayVehiclePlacementMessage {};
		class garage {};
		class garageVehicle {};
		class getPersonalGarage {};
		class getPersonalGarageLocal {};
		class handleVehPlacementCancelled {};
		class placeEmptyVehicle {};
		class setPersonalGarage {};
		class setPersonalGarageLocal {};
		class vehPlacementBegin {};
		class vehPlacementCallbacks {};
		class vehPlacementCancel {};
		class vehPlacementChangeVehicle {};
		class vehPlacementCleanup {};
	};

	class Garrison
	{
        class addGarrisonLine {};
        class addStaticToGarrison {};
		class addToGarrison {};
        class addToOver {};
		class addToRequested {};
        class canPlaceVehicleAtMarker {};
		class checkGroupType {};
		class checkVehicleType {};
        class clearGarrison {};
		class countGarrison {};
		class createGarrison {};
		class createGarrisonLine {};
        class createPatrolArray {};
		class getGarrison {};
		class getGarrisonRatio {};
		class getGarrisonStatus {};
        class getOver {};
        class getPatrols {};
		class getRequested {};
        class getVehicleCost {};
		class getVehicleCrew {};
		class initPreference {};
        class isStaticWeaponOnMarker {};
		class logArray {};
        class markerAlert {};
        class removeFromOver {};
		class replenishGarrison {};
        class searchGarrisonForGroup {};
        class searchGarrisonForVehicle {};
		class selectGroupType {};
		class selectReinfUnits {};
		class selectVehicleType {};
		class shouldReinforce {};
        class unitAvailable {};
		class updateGarrison {};
        class updatePatrols {};
		class updatePreference {};
		class updateReinfState {};
        class updateStatics {};
		class updateVehicles {};
	};

    class Intel
    {
        class getVehicleIntel {};
        class placeIntel {};
        class searchIntelOnDocument {};
        class searchIntelOnLaptop {};
        class searchIntelOnLeader {};
        class selectIntel {};
        class showIntel {};
    };

	class Missions
	{
		class AS_Official {};
		class AS_specOP {};
		class AS_Traitor {};
		class attackHQ {};
		class CON_Outpost {};
		class convoy {};
		class deleteTask {};
		class DES_Antenna {};
		class DES_Heli {};
		class DES_Vehicle {};
		class LOG_Ammo {};
		class LOG_Bank {};
		class LOG_Supplies {};
		class missionRequest {};
		class missionRequestAUTO {};
		class REP_Antenna {};
		class RES_Prisoners {};
		class RES_Refugees {};
		class taskUpdate {};
		class underAttack {};
	};

	class ModsAndDLC
    {
		class getModOfConfigClass {};
		class initDisabledMods {};
		class isModNameVanilla {};
	};

	class Ammunition
	{
		class ACEpvpReDress {};
		class ammunitionTransfer {};
		class arsenalManage {};
		class categoryOverrides {};
		class checkRadiosUnlocked {};
		class configSort {};
		class crateLootParams {};
		class CSATCrate {};
		class dress {};
		class empty {};
		class equipmentClassToCategories {};
		class equipmentIsValidForCurrentModset {};
		class equipmentSort {};
		class getRadio {};
		class itemSort {};
		class itemType {};
		class launcherInfo {};
		class loot {};
		class NATOCrate {};
		class randomRifle {};
		class transfer {};
		class unlockEquipment {};
		class vehicleSort {};
	};

	class OrgPlayers
	{
		class donateMoney {};
		class isMember {};
		class makePlayerBossIfEligible {};
		class memberAdd {};
		class membersList {};
		class playerScoreAdd {};
		class promotePlayer {};
		class ranksMP {};
		class resourcesPlayer {};
		class theBossInit {};
		class theBossToggleEligibility {};
		class theBossSteal {};
		class assignBossIfNone {};
		class tierCheck {};
	};

	class Pathfinding
	{
		//Public API - Call these from anywhere
		class findPath {};
		class loadNavGrid {};


		//Private API - Do NOT call these elsewhere
		class calculateH {};
		class findNearestNavPoint {};
		class getClosestMainMarker {};
		class getMainMarkers {};
		class getNavConnections {};
		class getNavPos {};
		class setNavOnMarker {};
	};

	class Punishment
	{
		class punishment {};
		class punishment_addActionForgive {};
		class punishment_notifyAdmin {};
		class punishment_notifyAllAdmins {};
		class punishment_release {};
		class punishment_sentence {};
		class punishment_warden {};
	};

	class PvP
	{
		class pvpCheck {};
		class playerHasBeenPvPCheck {};
	};

	class Reinf
	{
		class addBombRun {};
		class addFIAsquadHC {};
		class addFIAveh {};
		class addSquadVeh {};
		class autoGarrison {};
		class build {};
		class buildCreateVehicleCallback {};
		class buildMinefield {};
		class enemyNearCheck {};
		class equipRebel {};
		class FIAinit {};
		class FIAskillAdd {};
		class garrisonAdd {};
		class garrisonDialog {};
		class NATObomb {};
		class NATOQuadbike {};
		class postmortem {};
		class reDress {};
		class reinfPlayer {};
		class stealStatic {};
		class vehiclePrice {};
		class vehStats {};
	};

    class Reinforcements
    {
        class sendGroupToGarrison {};
    };

	class Revive
	{

		class actionRevive {};
		class carry {};
		class fatalWound {};
		class handleDamage {};
		class handleDamageAAF {};
		class initRevive {};
		class isMedic {};
		class respawn {};
		class unconscious {};
		class unconsciousAAF {};
	};

	class Runways
	{
		class getRunwayTakeoffForAirportMarker {};
		class runwayInfo {};
	};

	class Save
	{
		class loadPlayer {};
		class loadPreviousSession {};
		class loadServer {};
		class playerHasSave {};
		class savePlayer {};
		class getStatVariable {};
		class loadStat {};
		class retrievePlayerStat {};
		class returnSavedStat {};
		class savePlayerStat {};
		class setStatVariable {};
		class varNameToSaveName {};
		class saveLoop {};
	};

    class Spawn
    {
        class adaptMarkerSizeToUnitCount {};
        class addToSpawnedArrays {};
        class calculateMarkerArea {};
        class createAIControlPoint {};
        class createAISite {};
        class createCity {};
        class createSpawnPlacementForGroup {};
        class cycleSpawn {};
        class cycleSpawnPatrol {};
        class cycleSpawnPatrolUnit {};
        class cycleSpawnSoldierGroup {};
        class cycleSpawnStatic {};
        class cycleSpawnUnit {};
        class cycleSpawnVehicle {};
        class cycleSpawnVehicleCrew {};
        class findSpawnPosition {};
        class freeSpawnPosition {};
        class freeSpawnPositions {};
        class getSpawnedArray {};
        class groupDespawner {};
        class markerActiveUpdateLoop {};
        class markerDespawner {};
        class needsSpawn {};
        class removeFromSpawnedArrays {};
        class updateSpawnerUnits {};
        class vehicleDespawner {};
    };

	class Templates
	{
		class aceModCompat {};
		class getLoadout {};
		class ifaModCompat {};
		class rhsModCompat {};
	};

	class Undercover
	{
		class initUndercover {};
		class goUndercover {};
	};

	class Utility
	{
		class basicBackpack {};
		class createDataObject {};
		class createNamespace {};
		class dateToTimeString {};
		class generateRoadsDB {};
        class getRealBuildingPos {};
        class isBuildingPosValid {};
        class isCombatVehicle {};
		class log {};
		class vehicleWillCollideAtPosition {};
		class getRoadDirection {};
	};
};
