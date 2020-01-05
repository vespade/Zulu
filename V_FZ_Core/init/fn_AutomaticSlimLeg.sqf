if (isServer && isDedicated) exitWith {};/*
if (isMultiplayer) then {player addMPEventHandler ["MPRespawn", {[] spawn V_FZ_fnc_AutomaticSlimLeg}];} else {player addEventHandler ["Respawn", {[] spawn V_FZ_fnc_AutomaticSlimLeg}];};
_isProperUniform = false;
_isShinArmorPresent = false;
_isSlimLegUniform = false;

waitUntil {alive player};
while {alive player} do 
{
	_uniform = (uniform player);
	_vest = (vest player);
	_isProperUniform = (["VES_BDU", _uniform, true] call BIS_fnc_inString) OR (["VES_MPU", _uniform, true] call BIS_fnc_inString);
	if (_isProperUniform) then
	{
		_isSlimLegUniform = (["_Slim", _uniform, true] call BIS_fnc_inString);
		_isShinArmorPresent = ((["_A", _vest, true] call BIS_fnc_inString) OR (["_C", _vest, true] call BIS_fnc_inString) OR (["_M52D", _vest, true] call BIS_fnc_inString)) AND !(["_Vest", _vest, true] call BIS_fnc_inString) AND !(["_Sniper", _vest, true] call BIS_fnc_inString);
		if (_isShinArmorPresent) then
		{
			if !(_isSlimLegUniform) then
			{
				_gearUni = uniformContainer player;
				_gear = itemCargo _gearUni;
				_slimUniform = _uniform + "_Slim";
				player forceAddUniform _slimUniform;
				{_gearUni addItem _x} forEach _gear;
			};
		}
		else
		{
			if (_isSlimLegUniform) then
			{
				_length = count _uniform;
				_baseUniform = _uniform select [0, _length - 5];
				_gearUni = uniformContainer player;
				_gear = itemCargo _gearUni;
				player forceAddUniform _baseUniform;
				{_gearUni addItem _x} forEach _gear;
			};
		};
	};
	sleep 1;
};*/