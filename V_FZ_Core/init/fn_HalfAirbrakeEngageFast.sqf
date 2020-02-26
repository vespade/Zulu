_pelican = _this;
_pelican setvariable ["OPTRE_Thruster_EngagedStatus",false,true];
_pelican setvariable ["OPTRE_Afterburners_EngagedStatus",false,true];
hint format["DISENGAGING ANY FORWARD THRUSTERS\n& ENGAGING AIRBRAKES (HALF)"];
sleep 0.5;
if (speed _pelican > 450) then {
    _vel = velocity _pelican;
	_dir = direction _pelican;
	_speed = -22;
	_pelican setVelocity [
	(_vel select 0) + (sin _dir * _speed), 
	(_vel select 1) + (cos _dir * _speed), 
	(_vel select 2)
	];
    };
while {((!(_pelican getvariable ["OPTRE_Thruster_EngagedStatus",false])) AND (speed _pelican > 400))} do
{
	_vel = velocity _pelican;
	_dir = direction _pelican;
	_speed = -14;
	_pelican setVelocity [
	(_vel select 0) + (sin _dir * _speed), 
	(_vel select 1) + (cos _dir * _speed), 
	(_vel select 2)
	];
	sleep 0.5;
};