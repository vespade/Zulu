_pod = _this;
_pod setVariable ["VES_Pod_Launched", true];
_pod setPos [(getPos _pod) select 0, (getPos _pod) select 1, 1000];
_pod setVelocityModelSpace [0, 75, 0];
waitUntil {(speed _pod) > 300};
if ((driver _pod isEqualTo player) OR (player in (crew _pod))) then {addCamShake [2,1000,5];};
_fireball = createVehicle ["test_EmptyObjectForFireBig", [(position _pod) select 0, ((position _pod) select 1) + 5, (position _pod) select 2], [], 0, "CAN_COLLIDE"];
_fireball attachTo [_pod, [0,5,0]];
sleep 4;
waitUntil {((speed _pod) < 100) OR ((getPosATL (_pod) select 2) < 25)};
removeAllActions _pod;
deleteVehicle _fireball;
_smoke = createVehicle ["test_EmptyObjectForSmoke", [(position _pod) select 0, ((position _pod) select 1) + 3, (position _pod) select 2], [], 0, "CAN_COLLIDE"];
_smoke attachTo [_pod, [0,3,0]];
waitUntil {((getPosATL (_pod)) select 2) < 10};
if ((driver _pod isEqualTo player) OR (player in (crew _pod))) then {addCamShake [6,1500,5];};
while {((speed _pod) > 5)} do
{
	if ((getPosATL (_pod) select 2) < 15) then
	{
		_vel = velocity _pod;
		_dir = direction _pod;
		_speed = -5;
		_pod setVelocity [(_vel select 0) + (sin _dir * _speed), (_vel select 1) + (cos _dir * _speed), (_vel select 2)];
		sleep 1;
	};
};
waitUntil {(speed _pod) < 5};
resetCamShake;
waitUntil {((count (fullCrew [_pod, "cargo"])) + (count (fullCrew [_pod, "driver"]))) < 1;};
_crashpod = createVehicle ["VES_Lifeboat_Wreck", [(position _pod select 0), (position _pod select 1), (position _pod select 2) + .75], [], 0, "CAN_COLLIDE"];
_crashpod setVectorDirAndUp [vectorDir _pod, vectorUp _pod];
detach _smoke;
_smoke attachTo [_crashpod, [0,3,0]];
_crater = createVehicle ["CraterLong_Small", position _pod, [], 0, "CAN_COLLIDE"];
_crater attachTo [_crashpod, [0,2,-1.25]];
_crater setDir 180;
_crater1 = createVehicle ["CraterLong_Small", position _pod, [], 0, "CAN_COLLIDE"];
_crater1 attachTo [_crashpod, [0,.5,-1.5]];
_crater2 = createVehicle ["CraterLong_Small", position _pod, [], 0, "CAN_COLLIDE"];
_crater2 attachTo [_crashpod, [0,-1,-1.75]];
deleteVehicle _pod;
sleep 25;
deleteVehicle _smoke;