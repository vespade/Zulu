@echo off
title Fireteam Zulu / PBOProject Packing System

:select
cls
echo Do you wish to pack Fireteam Zulu or Specialized Ordnance? (1/2)
set /p select=
if /i "%select%" EQU "1" goto :FireteamZulu
if /i "%select%" EQU "2" goto :SpecOrd
goto :select

:FireteamZulu
cls
set curdir=%~dp0
echo Start time: %time%
for %%a in ("V_FZ_Armor" "V_FZ_Core" "V_FZ_Misc" "V_FZ_Units" "V_FZ_Vehicles" "V_FZ_Weapons") do (
    echo Building %%a
    if NOT EXIST P:\@FireteamZulu_Dev md P:\@FireteamZulu_DEV
    "C:\Program Files (x86)\Mikero\DePboTools\bin\pboProject.exe" -P +Warnings +S -w=p:\ +mod=P:\@FireteamZulu_DEV p:\\%%a || ECHO %%a Failed! && findstr /I </end entries>* P:\temp\\%%~a.packing.log
)
echo End time: %time%
pause
goto :select

:SpecOrd
cls
set curdir=%~dp0
echo Start time: %time%
for %%a in ("V_SO_Weapons" "V_SO_Core" "V_SO_Magazines") do (
    echo Building %%a
    if NOT EXIST P:\@SpecOrd_Dev md P:\@SpecOrd_DEV
    "C:\Program Files (x86)\Mikero\DePboTools\bin\pboProject.exe" -P +Warnings +S -w=p:\ +mod=P:\@SpecOrd_DEV p:\\%%a || ECHO %%a Failed! && findstr /I </end entries>* P:\temp\\%%~a.packing.log
)
echo End time: %time%
pause
goto :select