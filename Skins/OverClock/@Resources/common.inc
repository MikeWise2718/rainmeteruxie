;---------------------------------------------------------
;-- OverClock - The Rainmeter Skin for OverClockers.
;---------------------------------------------------------

[Variables]
@IncludeSensors = #@#\HWinFO.inc
@IncludeLook_Feel = #@#\look_feel.inc

executeDeactivateCurrentSkin = !DeactivateConfig #CURRENTCONFIG#
executeHwinfo = "#@#HWiNFOSharedMemoryViewer.exe"

executeLock = rundll32.exe user32.dll LockWorkStation
executeSleep = rundll32.exe PowrProf.dll,SetSuspendState 0,1,0
executeHibernate = rundll32.exe PowrProf.dll,SetSuspendState
executeLogoff = logoff.exe
executeRestart = Shutdown.exe -r -t 00
executeShutdown = Shutdown.exe -s -t 10

executeTemperatureAlertAction = "[!ToggleMeter TemperatureAlertButtonOn] [!ToggleMeter TemperatureAlertButtonOff] [!RefreshGroup "GroupSettingsAlerts"]
executeVoltageAlertAction = "[!ToggleMeter VoltageAlertButtonOn] [!ToggleMeter VoltageAlertButtonOff] [!RefreshGroup "GroupSettingsAlerts"]"
executeAudibleWarningAction = "[!ToggleMeter AudibleAlertButtonOn] [!ToggleMeter AudibleAlertButtonOff] [!RefreshGroup "GroupSettingsAlerts"]"
executeCpuzCopiedAction = "[!ToggleMeter CpuzCopiedButtonOn] [!ToggleMeter CpuzCopiedButtonOff] [!RefreshGroup "GroupSettingsVoltagesTempsPower"]"
executeCpuzAutoOverClockAction = "[!ToggleMeter CpuzAutoOverClockButtonOn] [!ToggleMeter CpuzAutoOverClockButtonOff] [!Refresh]"
executeCpuzAutoProcessorAction = "[!ToggleMeter CpuzAutoProcessorButtonOn] [!ToggleMeter CpuzAutoProcessorButtonOff] [!Refresh]
executeCpuzAutoMotherboardAction = "[!ToggleMeter CpuzAutoMotherboardButtonOn] [!ToggleMeter CpuzAutoMotherboardButtonOff] [!Refresh]"
executeCpuzAutoDramAction = "[!ToggleMeter CpuzAutoDramButtonOn] [!ToggleMeter CpuzAutoDramButtonOff] [!Refresh]"

GENERALSETTINGSCONFIG="#ROOTCONFIG#\Settings_General"
ALERTSSETTINGSCONFIG="#ROOTCONFIG#\Settings_Alerts" 
FANSSETTINGSCONFIG="#ROOTCONFIG#\Settings_Fans" 
CPUZSETTINGSCONFIG="#ROOTCONFIG#\Settings_Cpuz" 

[MeasureUptime]
Measure=Uptime
Format=" %3!i! hours %2!i! mins %1!i! secs"

