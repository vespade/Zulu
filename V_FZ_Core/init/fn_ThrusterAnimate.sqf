_pelican = _this;
sleep .2;
if (_pelican getvariable ["OPTRE_Thruster_EngagedStatus",false]) then
{
	while {((_pelican getvariable ["OPTRE_Thruster_EngagedStatus",false]) AND (alive _pelican))} do
	{
		_pelican setobjecttextureglobal [1,"V_FZ_Vehicles\data\Pelican\V_D77HTCI_B1_CA.paa"];
		sleep 0.2;
		_pelican setobjecttextureglobal [1,"V_FZ_Vehicles\data\Pelican\V_D77HTCI_B2_CA.paa"];
		sleep 0.2;
		_pelican setobjecttextureglobal [1,"V_FZ_Vehicles\data\Pelican\V_D77HTCI_B3_CA.paa"];
		sleep 0.2;
		_pelican setobjecttextureglobal [1,"V_FZ_Vehicles\data\Pelican\V_D77HTCI_B4_CA.paa"];
		sleep 0.32;
		_pelican setobjecttextureglobal [1,"V_FZ_Vehicles\data\Pelican\V_D77HTCI_B5_CA.paa"];
		sleep 0.4;
		_pelican setobjecttextureglobal [1,"V_FZ_Vehicles\data\Pelican\V_D77HTCI_B4_CA.paa"];
		sleep 0.2;
		_pelican setobjecttextureglobal [1,"V_FZ_Vehicles\data\Pelican\V_D77HTCI_B3_CA.paa"];
		sleep 0.2;
		_pelican setobjecttextureglobal [1,"V_FZ_Vehicles\data\Pelican\V_D77HTCI_B2_CA.paa"];
	};
	
} else {

	while {!(_pelican getvariable ["OPTRE_Thruster_EngagedStatus",false]) AND !(((getObjectTextures _pelican) select 1) == "")} do
	{
		_pelican setobjecttextureglobal [1,""];
		sleep .4;
	};
};