		weapons[]={"TruckHorn3", "VES_CPD_Horn", "VES_CPD_Yelp"};
		class EventHandlers: EventHandlers
		{
			init = "0 = _this spawn V_FZ_fnc_WarthogLightsAdd";
		};
		class UserActions: UserActions
		{
			class LightbarOn
			{
				condition="(alive this) AND !(this getvariable [""VES_Warthog_LightbarStatus"", false]) AND (player in [driver this])";
				displayName="<t color='#FFBF00'>Turn on Lightbar";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca' size='2.5' />";
				onlyForPlayer=1;
				position="";
				radius=6;
				statement="0 = this spawn V_FZ_fnc_WarthogLightsOn";
			};
			class LightbarOff: LightbarOn
			{
				condition="(alive this) AND (this getvariable ""VES_Warthog_LightbarStatus"") AND (player in [driver this])";
				displayName="<t color='#FF8400'>Turn off Lightbar";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca' size='2.5' />";
				statement="0 = this spawn V_FZ_fnc_WarthogLightsOff";
			};
			class SirenOn: LightbarOn
			{
				condition="(alive this) AND (player in [driver this]) AND !(this getvariable [""VES_Warthog_SirenStatus"", false])";
				displayName="<t color='#FFBF00'>Siren On";
				statement="[this] spawn {while {(alive (_this select 0)) AND !(_this select 0 getvariable [""VES_Warthog_SirenStatus"", true])} do {_this select 0 say [""VES_Siren"",1,1]; sleep 3.9;};};";
			};
			class SirenOff: LightbarOff
			{
				condition="(alive this) AND (player in [driver this]) AND (this getvariable [""VES_Warthog_SirenStatus"", false])";
				displayName="<t color='#FF8400'>Siren Off";
				statement="this setvariable [""VES_Warthog_SirenStatus"", false];";
			};
		};