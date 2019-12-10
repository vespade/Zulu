if(isNil "ace_common_fnc_getDeathAnim")then
{
	ace_common_fnc_getDeathAnim = 
	{
		/*
		 * Author: Glowbal, PabstMirror
		 * Get the death animation for the unit at current time
		 *
		 * Arguments:
		 * 0: unit <OBJECT>
		 *
		 * Return Value:
		 * animation <STRING>
		 *
		 * Example:
		 * [bob] call ace_common_fnc_getDeathAnim
		 *
		 * Public: No
		 */

		params ["_unit"];

		private _returnAnimation = "";

		private _animationState = animationState _unit;
		private _unitAnimationCfg = configFile >> "CfgMovesMaleSdr" >> "States" >> _animationState;

		if (getNumber (_unitAnimationCfg >> "terminal") == 1) exitWith {_animationState};

		private _unitActionsCfg = configFile >> "CfgMovesBasic" >> "Actions" >> getText (_unitAnimationCfg >> "actions");

		if (vehicle _unit != _unit) then {
			private _interpolateArray = getArray (_unitAnimationCfg >> "interpolateTo");

			for "_index" from 0 to (count _interpolateArray - 1) step 2 do {
				private _indexAnimation = _interpolateArray select _index;


				if (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> _indexAnimation >> "terminal") == 1) exitWith {
					_returnAnimation = _indexAnimation;
				};
			};
		} else {
			_returnAnimation = getText (_unitActionsCfg >> "die");
		};

		if (_returnAnimation == "") then {_returnAnimation = "Unconscious"};

		_returnAnimation
	};
};
if(isNil "ace_common_fnc_isZombie")then
{
	ace_common_fnc_isZombie = 
	{
		(_this isKindOf "RyanZombieCivilian_F") || {_this isKindOf "RyanZombieB_Soldier_base_F"}
	};
};
if(isNil "ace_common_fnc_disableAI")then
{
	ace_common_fnc_disableAI = 
	{
		/*
		 * Author: Glowbal, KoffeinFlummi
		 * Disables/Enables AI
		 *
		 * Arguments:
		 * 0: Unit <OBJECT>
		 * 1: Disable AI <BOOL>
		 *
		 * Return Value:
		 * None
		 *
		 * Example:
		 * [bob, true] call ace_common_fnc_disableAI
		 *
		 * Public: No
		 */
		params [["_unit", objNull, [objNull]], ["_disable", true, [false]]];

		if (!local _unit) exitWith {};

		if !(isPlayer _unit) then
		{
			if (_disable) then
			{
				_unit disableAI "MOVE";
				_unit disableAI "TARGET";
				_unit disableAI "AUTOTARGET";
				_unit disableAI "FSM";
				_unit disableConversation true;
			} else
			{
				//Sanity check to make sure we don't enable unconsious AI
				if (_unit getVariable ["ace_isunconscious", false] && alive _unit) exitWith {};

				_unit enableAI "MOVE";
				_unit enableAI "TARGET";
				_unit enableAI "AUTOTARGET";
				_unit enableAI "FSM";
				_unit disableConversation false;
			};
		};
	};
};
CSW_fnc_TaserOnHit = compileFinal preProcessFileLineNumbers "\V_SO_Weapons\scripts\fnc_TaserOnHit.sqf";
CSW_fnc_TaserOnRespawn = compileFinal preProcessFileLineNumbers "\V_SO_Weapons\scripts\fnc_TaserOnRespawn.sqf";
