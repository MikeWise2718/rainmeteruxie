[UsageLabel1]
Meter=String
MeterStyle=BarLabel|Bar2Left|NoBanner3
Text=#LabelText3#
DynamicVariables=1

[UsageHighValueBarNeedle1]
Meter=Bar
MeterStyle=BarHighNeedle|Bar2High|NoBanner3b
MeasureName=UsageHighNeedleAdjust
DynamicVariables=1

[UsageHighValueBar1]
Meter=Bar
MeterStyle=BarHigh|Bar2High|NoBanner3b
MeasureName=UsageHigh
DynamicVariables=1

[Usage1]
Meter=Bar
MeterStyle=BarRegUsage|Bar2|NoBanner3c
MeasureName=UsageAdjust
DynamicVariables=1

[UsageValue1]
Meter=String
MeterStyle=BarValue|Bar2Value|NoBanner3
MeasureName=BaseUsage
MinValue=0
MaxValue=100
Text="%1%"
DynamicVariables=1

[UsageValueHigh1]
Meter=String
MeterStyle=BarValueHigh|Bar2ValueHigh|NoBanner3
MeasureName=UsageHigh
MinValue=0
MaxValue=100
Text="(%1%)"
DynamicVariables=1
