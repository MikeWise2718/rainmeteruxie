[Variables]

MainFont=Croissant One
MainFont2=Segoe UI
ValueFont1=Segoe UI
ValueFont2=Segoe UI

SSmallFont=7
SmallFont=8
SMFont=9
MediumFont=10
LargeFont=12
TitleFont=14
Headline0=14
Headline1=16
Headline2=18

TitleTextColor=DDDDDD
LabelTextColor=AAAAAA
ValueTextColor=AAAAAA
RegBarColor=110099
RegBarColorLight=11009955
LowBarColor=444444
HighValueTextColor=777777
HighValueBarColor=333333
HighValueRCColor=990000
BarBGColor=333333
BarNeedleColor=990000
SolidDrag=00000001
SolidStandard=222222AA
SolidStandardDark=222222
SolidDark=000000
CircleBarColor=333333
CircleBorderColor=110099
CircleBGColor=000000
CircleBarAccentColor=222222
CircleBarLabelColor=888888
CircleBarValueColor=AAAAAA
CircleBarNeedleColor=990000
CircleBarHighColor=05EDFF
FlashColor=000099

[BarLabel]
FontColor=#LabelTextColor#
FontFace=#MainFont#
FontSize=#SMFont#
SolidColor=#SolidDrag#
AntiAlias=1

[BarEQStyle]
BarColor=#RegBarColorLight#
SolidColor=#SolidDrag#

[BarRegTemp]
Barcolor=[TempColorAdjust]

[BarRegUsage]
Barcolor=[UsageColorAdjust]

[BarRegTempRPM]
Barcolor=[RPMColorAdjust]

[BarHigh]
BarColor=#HighValueBarColor#

[BarHighNeedle]
BarColor=#BarNeedleColor#
SolidColor=#BarBGColor#

[BarValue]
FontColor=#ValueTextColor#
FontFace=#ValueFont1#
FontSize=#SmallFont#
SolidColor=#SolidDrag#
AntiAlias=1

[BarValueHigh]
FontColor=#HighValueRCColor#
FontFace=#ValueFont2#
FontSize=#SmallFont#
SolidColor=#SolidDrag#
AntiAlias=1

[TitleLabel]
FontColor=#TitleTextColor#
FontFace=#MainFont#
FontSize=#LargeFont#
SolidColor=#SolidDrag#
AntiAlias=1

[TextBarLabel]
FontColor=#LabelTextColor#
FontFace=#MainFont2#
FontSize=#SmallFont#
SolidColor=#SolidDrag#
AntiAlias=1

[TextBarValue]
FontColor=#ValueTextColor#
FontFace=#ValueFont1#
FontSize=#SmallFont#
SolidColor=#SolidDrag#
AntiAlias=1

[TextBarValueHigh]
FontColor=#ValueTextColor#
FontFace=#ValueFont2#
FontSize=#SmallFont#
SolidColor=#SolidDrag#
AntiAlias=1

[CircleBorderStyle]
LineColor=#CircleBorderColor#
Solid=1
AntiAlias=1

[CircleBGStyle]
LineColor=#CircleBGColor#
Solid=1
AntiAlias=1

[CircleShadeStyle]
LineColor=#CircleBarColor#
Solid=1
AntiAlias=1

[CircleShadeStyleGPUTA]
LineColor=[GPUTempColorAdjustCG]
Solid=1
AntiAlias=1

[CircleShadeStyleCPUTA]
LineColor=[TempColorAdjustCG]
Solid=1
AntiAlias=1

[CircleShadeStyleFPSHigh]
LineColor=[FPSBorderHighFlash]
Solid=1
AntiAlias=1

[CircleAccentStyle]
LineColor=#CircleBarAccentColor#
Solid=1
AntiAlias=1

[CircleBarStyle]
LineColor=#CircleBarColor#
Solid=1
AntiAlias=1

[CircleBarValueStyle]
FontColor=#CircleBarValueColor#
FontFace=#ValueFont1#
FontSize=#SmallFont#
Solid=0
AntiAlias=1

[CircleBarLabelStyle]
FontColor=#CircleBarLabelColor#
FontFace=#MainFont#
FontSize=#SSmallFont#
Solid=1
AntiAlias=1

[CircleBarNeedleStyle]
LineColor=#CircleBarNeedleColor#
AntiAlias=1

[CircleBarNeedleTipStyle]
LineColor=#CircleBarColor#
AntiAlias=1

[CircleBarNeedleHighStyle]
LineColor=#CircleBarHighColor#
AntiAlias=1

[CircleBarValueHighStyleFlash]
FontFace=#ValueFont2#
FontSize=#SmallFont#
FontColor=[#SkinMeasure5#]
AntiAlias=1

[CircleBarValueHighStyle]
FontColor=#CircleBarNeedleColor#
FontFace=#ValueFont2#
FontSize=#SmallFont#
AntiAlias=1

[CircleGaugeBG]
LineColor=#BarBGColor#
AntiAlias=1
