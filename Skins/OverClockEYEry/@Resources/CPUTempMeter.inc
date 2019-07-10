[TempLabel]
Meter=String
MeterStyle=BarLabel|Bar1Left
Text=#LabelText2#
DynamicVariables=1

[TempHighValueBarNeedle]
Meter=Bar
MeterStyle=BarHighNeedle|Bar1High
MeasureName=TempHighNeedleAdjust
DynamicVariables=1

[TempHighValueBar]
Meter=Bar
MeterStyle=BarHigh|Bar1High
MeasureName=TempHigh
DynamicVariables=1

[TempBar]
Meter=Bar
MeterStyle=BarRegTemp|Bar1
MeasureName=TempAdjust
DynamicVariables=1

[TempValue]
Meter=String
MeterStyle=BarValue|Bar1Value
MeasureName=BaseTemp
Text="%1°C"
DynamicVariables=1

[TempValueHigh]
Meter=String
MeterStyle=BarValueHigh|Bar1ValueHigh
MeasureName=TempHigh
MinValue=0
MaxValue=100
Text="(%1°C)"
DynamicVariables=1
