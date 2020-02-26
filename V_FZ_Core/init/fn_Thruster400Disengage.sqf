_pelican = _this;
_pelican setvariable ["OPTRE_Thruster_EngagedStatus",false,true];
_pelican setvariable ["OPTRE_Afterburners_EngagedStatus",false,true];
hint format["DISENGAGING FORWARD THRUSTERS"];
sleep 0.5;
if (speed _pelican > 350) then {
		_vel = velocity _pelican;
		_dir = direction _pelican;
		_speed = -10;
		_pelican setVelocity [
		(_vel select 0) + (sin _dir * _speed), 
		(_vel select 1) + (cos _dir * _speed), 
		(_vel select 2)
		];
	};