_pelican = _this;
_pelican setvariable ["OPTRE_Thruster_EngagedStatus",true,true];
hint "ENGAGING FORWARD THRUSTERS";
sleep 0.5;
if (speed _pelican <= 250) then {
		_vel = velocity _pelican;
		_dir = direction _pelican;
		_speed = 22;
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