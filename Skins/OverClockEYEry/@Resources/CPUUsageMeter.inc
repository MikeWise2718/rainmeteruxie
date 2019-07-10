[UsageLabel1]
Meter=String
MeterStyle=BarLabel|Bar2Left
Text=#LabelText3#
DynamicVariables=1

[UsageHighValueBarNeedle1]
Meter=Bar
MeterStyle=BarHighNeedle|Bar2High
MeasureName=UsageHighNeedleAdjust
DynamicVariables=1

[UsageHighValueBar1]
Meter=Bar
MeterStyle=BarHigh|Bar2High
MeasureName=UsageHigh
DynamicVariables=1

[Usage1]
Meter=Bar
MeterStyle=BarRegUsage|Bar2
MeasureName=UsageAdjust
DynamicVariables=1

[UsageValue1]
Meter=String
MeterStyle=BarValue|Bar2Value
MeasureName=BaseUsage
MinValue=0
MaxValue=100
Text="%1%"
DynamicVariables=1

[UsageValueHigh1]
Meter=String
MeterStyle=BarValueHigh|Bar2ValueHigh
MeasureName=UsageHigh
MinValue=0
MaxValue=100
Text="(%1%)"
DynamicVariables=1
