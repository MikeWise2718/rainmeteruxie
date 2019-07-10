[MainLabel]
Meter=String
MeterStyle=TitleLabel|Title|NoBanner0
Text=#LabelText#
DynamicVariables=1

[CoreGHz]
Meter=STRING
MeterStyle=TextBarValue|CPUTextBar1Left|NoBanner1a
MeasureName=CoreFreqGHzAdjust
Text="%1GHz"
NumOfDecimals=2

[TextMeterDivider1]
Meter=String
MeterStyle=TextBarLabel|CPUTextBar1Center|NoBanner1a
Text="/"
DynamicVariables=1

[CoreGHzHigh]
Meter=STRING
MeterStyle=TextBarValue|CPUTextBar1Right|NoBanner1a
MeasureName=CoreFreqGHzHigh
Text="(%1GHz)"
NumOfDecimals=2

[TextMeter1L]
Meter=String
MeterStyle=TextBarValue|TextBar2Left|NoBanner2|CPULeft
MeasureName=BaseV
NumOfDecimals=2
Text="%1V"
DynamicVariables=1

[TextMeterDivider1]
Meter=String
MeterStyle=TextBarLabel|TextBar2Center|NoBanner2
Text="/"
DynamicVariables=1

[TextMeter1R]
Meter=String
MeterStyle=TextBarValueHigh|TextBar2Right|NoBanner2|CPURight
MeasureName=VHigh
NumOfDecimals=2
Text="(%1V)"
DynamicVariables=1

