_pelican = _this;
_pelican setvariable ["OPTRE_Thruster_EngagedStatus",true,true];
_pelican setvariable ["OPTRE_Afterburners_EngagedStatus",false,true];
hint "DISENGAGING AFTERBURNERS\n CONTINUING FORWARD THRUST";
sleep 0.5;
if (speed _pelican > 500) then {
		_vel = velocity _pelican;
		_dir = direction _pelican;
		_speed = -10;
		_pelican setVelocity [
		(_vel select 0) + (sin _dir * _speed), 
		(_vel select 1) + (cos _dir * _speed), 
		(_vel select 2)
		];
	};
while {((_pelican getvariable ["OPTRE_Thruster_EngagedStatus",false]) AND (alive _pelican))} do
{
	if (speed _pelican <= 400) then {
		_vel = velocity _pelican;
		_dir = direction _pelican;
		_speed = 8;
		_pelican setVelocity [
		(_vel select 0) + (sin _dir * _speed), 
		(_vel select 1) + (cos _dir * _speed), 
		(_vel select 2)
		];
	};
	sleep 0.5;
};