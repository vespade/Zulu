_pelican = _this;
sleep .2;
	while {!(_pelican getvariable ["OPTRE_Thruster_EngagedStatus",false]) AND !(((getObjectTextures _pelican) select 1) == "")} do
	{
		_pelican setobjecttextureglobal [1,""];
		sleep .4;
	};