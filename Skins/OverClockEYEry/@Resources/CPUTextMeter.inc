[MainLabel]
Meter=String
MeterStyle=TitleLabel|Title
Text=#LabelText#
DynamicVariables=1

[CoreGHz]
Meter=STRING
MeterStyle=TextBarValue|CPUTextBar1Left 
MeasureName=CoreFreqGHzAdjust
Text="%1GHz"
NumOfDecimals=2

[TextMeterDivider1]
Meter=String
MeterStyle=TextBarLabel|CPUTextBar1Center
Text="/"
DynamicVariables=1

[CoreGHzHigh]
Meter=STRING
MeterStyle=TextBarValue|CPUTextBar1Right
MeasureName=CoreFreqGHzHigh
Text="(%1GHz)"
NumOfDecimals=2

[TextMeter1L]
Meter=String
MeterStyle=TextBarValue|TextBar2Left|CPULeft
MeasureName=BaseV
NumOfDecimals=2
Text="%1V"
DynamicVariables=1

[TextMeterDivider2]
Meter=String
MeterStyle=TextBarLabel|TextBar2Center
Text="/"
DynamicVariables=1

[TextMeter1R]
Meter=String
MeterStyle=TextBarValueHigh|TextBar2Right|CPURight
MeasureName=VHigh
NumOfDecimals=2
Text="(%1V)"
DynamicVariables=1

