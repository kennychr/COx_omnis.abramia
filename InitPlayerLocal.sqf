/*
 * Author: Pfc.Christiansen
 * InitPlayerLocal.
 * All stuff that should only run on client side goes here!
 *
 * Arguments:
 * NONE
 *
 * Return Value:
 * NONE
 */

enableSaving [false,false];//Disable SP save

// ---------------- Player Scripts

_actionPlayerRoster = ["playerRoster", "Show Player Roster", "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\whiteboard_ca.paa", {call AW_fnc_roster_open_roster}, {true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "ACE_TeamManagement"], _actionPlayerRoster] call ace_interact_menu_fnc_addActionToObject;//Add roster to acemenu for player



//Briefing
#include "Briefing\AW_Briefing.sqf"
