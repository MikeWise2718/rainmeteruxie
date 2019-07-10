;---------------------------------------------------------
;-- OverClock - The Rainmeter Skin for OverClockers.
;---------------------------------------------------------
;
[Variables]
ToggleShutdown=[!ToggleMeter "MeterShutdownBackground"][!ToggleFadeMeter "MeterLock"][!ToggleMeter MeterSleep][!ToggleMeter MeterLogOff][!ToggleMeter MeterRestart][!ToggleMeter MeterShutdown][!ToggleMeter MeterHibernate]

Row1Y = (#ShutdownOriginY# + 10)

ShutdownImageHeight = 30
ShutdownImageWidth=30
imageHorizontalSpacing = 5R

Lock = rundll32.exe user32.dll LockWorkStation
Sleep = rundll32.exe PowrProf.dll,SetSuspendState 0,1,0
Hibernate = rundll32.exe PowrProf.dll,SetSuspendState
Logoff = logoff.exe
Restart = Shutdown.exe -r -t 00
Shutdown = Shutdown.exe -s -t 00

;-------------------------------------------------------------------------------
;- Meters
;-------------------------------------------------------------------------------
[MeterShutdownBackground]
Meter=Image
MeterStyle=StyleBackground
X=#ShutdownOriginX#
Y=(#ShutdownOriginY#)
W=(10+(6*35))
H=(50)
Hidden=1


[MeterShutdown]
Meter=IMAGE
X=#ShutdownOriginX#
Y=#Row1Y#
StringAlign=CENTER
StringStyle=NORMAL
ImageName="#@#Shutdown.png"
AntiAlias=1
ToolTipType=1
ToolTipIcon=INFO
ToolTipText=Shutdown
H=#ShutdownImageHeight#
W=#ShutdownImageWidth#
Hidden=1
LeftMouseDownAction=#Shutdown#

[MeterRestart]
Meter=IMAGE
X=#imageHorizontalSpacing#
Y=#Row1Y#
StringAlign=CENTER
StringStyle=NORMAL
ImageName="#@#\restart.png"
AntiAlias=1
ToolTipType=1
ToolTipIcon=INFO
ToolTipText=Restart
H=#ShutdownImageHeight#
W=#ShutdownImageWidth#
Hidden=1
LeftMouseDownAction=#Restart#

[MeterLogOff]
Meter=IMAGE
X=#imageHorizontalSpacing#
Y=#Row1Y#
StringAlign=CENTER
StringStyle=NORMAL
ImageName="#@#\LogOff.png"
AntiAlias=1
ToolTipType=1
ToolTipIcon=INFO
ToolTipText=LogOff
H=#ShutdownImageHeight#
W=#ShutdownImageWidth#
Hidden=1
LeftMouseDownAction=#Logoff#

[MeterSleep]
Meter=IMAGE
X=#imageHorizontalSpacing#
Y=#Row1Y#
StringAlign=CENTER
StringStyle=NORMAL
ImageName="#@#\sleep.png"
AntiAlias=1
ToolTipType=1
ToolTipIcon=INFO
ToolTipText=Sleep
H=#ShutdownImageHeight#
W=#ShutdownImageWidth#
Hidden=1
LeftMouseDownAction=#Sleep#

[MeterHibernate]
Meter=IMAGE
X=#imageHorizontalSpacing#
Y=#Row1Y#
StringAlign=CENTER
StringStyle=NORMAL
ToolTipType=1
ToolTipIcon=INFO
ToolTipText=Hibernate
ImageName="#@#\hibernate.png"
AntiAlias=1
H=#ShutdownImageHeight#
W=#ShutdownImageWidth#
Hidden=1
LeftMouseDownAction=#Hibernate#

[MeterLock]
Meter=IMAGE
X=#imageHorizontalSpacing#
Y=#Row1Y#
StringAlign=CENTER
StringStyle=NORMAL
ImageName="#@#\lock.png"
AntiAlias=1
ToolTipType=1
ToolTipIcon=INFO
ToolTipText=Lock
H=#ShutdownImageHeight#
W=#ShutdownImageWidth#
Hidden=1
LeftMouseDownAction=#Lock#

