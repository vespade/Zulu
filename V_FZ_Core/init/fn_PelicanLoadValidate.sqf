_pelican = _this select 0;
_veh = _this select 1;
_loaded = false;
	
switch true do {
		
	case (_veh isKindOf "OPTRE_M808B_base" or _veh isKindOf "OPTRE_M808B2") : {
		_veh attachTo [_pelican,[0,-7.2, -0.37105]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M808S" or _veh isKindOf "OPTRE_M808L") :
	{
		_veh attachTo [_pelican,[0,-7.2, -2.7805]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_Wombat" or _veh isKindOf "OPTRE_Wombat_S" or _veh isKindOf "OPTRE_Wombat_B") :
	{
		_veh attachTo [_pelican,[0,-7.50,-0.60]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M12A1_LRV" or _veh isKindOf "OPTRE_M12_LRV" or _veh isKindOf "OPTRE_M12G1_LRV" or _veh isKindOf "OPTRE_M12R_AA" or _veh isKindOf "OPTRE_M813_TT" or _veh isKindOf "OPTRE_M12_FAV_APC") : {
		_veh attachTo [_pelican,[0,-3.25,0.25]];
		//0 = [vehicle player, 15, 0] call BIS_fnc_setPitchBank;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M12_FAV" or _veh isKindOf "OPTRE_M914_RV") : {
		_veh attachTo [_pelican,[0,-4.25,0.70]];
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M413_base") : {
		_veh attachTo [_pelican,[0,-3.6,0.30]];
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M494") : {
		_veh attachTo [_pelican,[0,-6,-2.57]];
		_loaded = true;
	};
	case (_veh isKindOf "optre_catfish_unarmed_f" or _veh isKindOf "optre_catfish_mg_f") : {
		_veh attachTo [_pelican,[0,-4.8,-0.1]];
		_loaded = true;
	};
};
	
if (_loaded) then 
{
	_pelican setVariable ["OPTRE_Pelican_AttachedToVehiclesEffect", [vehicle player], true];
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLOCK SUCCESSFUL!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F";
	_pelican addEventHandler ["Killed",
	{
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		{
			if !(_x isKindof "OPTRE_Static_M247H_Shielded_Tripod") then {detach _x;};
		} forEach attachedObjects _unit;
	}];
} else {
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>CARGO UNSUPPORTED!</t><br/>-------------------------------------------<br/>Your vehicle has not been design to be mag lifted by the pelican.", "PLAIN DOWN", -1, true, true];
	//hint "Your vehicle has not been designed to be lifted via maglock. Operation aborted.";
	playSound "FD_CP_Not_Clear_F";
};