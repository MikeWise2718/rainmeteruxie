;---------------------------------------------------------
;-- OverClock - The Rainmeter Skin for OverClockers.
;---------------------------------------------------------
;
;----------------------------------------
;--		Variables
;----------------------------------------
[Variables]
TemperatureThresholdBreached = 0
suspendTemperatureCheck = 0
executePlayTemperatureThresholdBreachedWarningSound = Play "#@#Sounds\TemperatureAlert.wav"

;--------------------------------------------------------
;-- Temperature Measures
;--------------------------------------------------------
[MeasureTempCpu0Current]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#CPU0-TEMP-SensorID#
HWiNFOSensorInstance=#CPU0-TEMP-SensorInstance#
HWiNFOEntryId=#CPU0-Temp#
HWiNFOType=CurrentValue
IfCondition = (#userTempAlertActive# = 1) && (MeasureTempCpu0Current > #userTempAlertCpuThreshold#)
IfTrueAction = !ToggleMeter MeterTempCpu0Current
IfFalseAction = !ShowMeter MeterTempCpu0Current
IfConditionMode = 1
MinValue=30
MaxValue = 100

[MeasureTempCpu0Min]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#CPU0-Temp-SensorID#
HWiNFOSensorInstance=#CPU0-Temp-SensorInstance#
HWiNFOEntryId=#CPU0-Temp#
HWiNFOType=MinimumValue

[MeasureTempCpu0Max]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#CPU0-Temp-SensorID#
HWiNFOSensorInstance=#CPU0-TEMP-SensorInstance#
HWiNFOEntryId=#CPU0-Temp#
HWiNFOType=MaximumValue

[MeasureTempGpu0Current]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-SensorID#
HWiNFOSensorInstance=#GPU0-SensorInstance#
HWiNFOEntryId=#GPU0-Temp#
HWiNFOType=CurrentValue
IfCondition = (#userTempAlertActive# = 1) && (MeasureTempGpu0Current > #userTempAlertGpuThreshold#)
IfTrueAction = !ToggleMeter MeterTempGpu0Current
IfFalseAction = !ShowMeter MeterTempGpu0Current
IfConditionMode =1
MinValue=30
MaxValue = 100

[MeasureTempGpu0Min]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-SensorID#
HWiNFOSensorInstance=#GPU0-SensorInstance#
HWiNFOEntryId=#GPU0-Temp#
HWiNFOType=MinimumValue

[MeasureTempGpu0Max]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-SensorID#
HWiNFOSensorInstance=#GPU0-SensorInstance#
HWiNFOEntryId=#GPU0-Temp#
HWiNFOType=MaximumValue

[MeasureTempGpu0CoreVrm1Current]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Core-SensorID#
HWiNFOSensorInstance=#GPU0-Core-SensorInstance#
HWiNFOEntryId=#GPU0-Core-Temp1#
HWiNFOType=CurrentValue
IfCondition = (#userTempAlertActive# = 1) && (MeasureTempGpu0CoreVrm1Current > #userTempAlertGpuVrm1Threshold#)
IfTrueAction = !ToggleMeter MeterTempGpu0CoreVrm1Current
IfFalseAction = !ShowMeter MeterTempGpu0CoreVrm1Current
IfConditionMode =1

MinValue=30
MaxValue = 100

[MeasureTempGpu0CoreVrm1Min]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Core-SensorID#
HWiNFOSensorInstance=#GPU0-Core-SensorInstance#
HWiNFOEntryId=#GPU0-Core-Temp1#
HWiNFOType=MinimumValue

[MeasureTempGpu0CoreVrm1Max]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Core-SensorID#
HWiNFOSensorInstance=#GPU0-Core-SensorInstance#
HWiNFOEntryId=#GPU0-Core-Temp1#
HWiNFOType=MaximumValue

[MeasureTempGpu0CoreVrm2Current]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Core-SensorID#
HWiNFOSensorInstance=#GPU0-Core-SensorInstance#
HWiNFOEntryId=#GPU0-Core-Temp2#
HWiNFOType=CurrentValue
IfCondition = (#userTempAlertActive# = 1) &&  (MeasureTempGpu0CoreVrm2Current > #userTempAlertGpuVrm2Threshold#) 
IfTrueAction = !ToggleMeter MeterTempGpu0CoreVrm2Current
IfFalseAction = !ShowMeter MeterTempGpu0CoreVrm2Current
IfConditionMode =1

MinValue=30
MaxValue = 100

[MeasureTempGpu0CoreVrm2Min]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Core-SensorID#
HWiNFOSensorInstance=#GPU0-Core-SensorInstance#
HWiNFOEntryId=#GPU0-Core-Temp2#
HWiNFOType=MinimumValue

[MeasureTempGpu0CoreVrm2Max]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Core-SensorID#
HWiNFOSensorInstance=#GPU0-Core-SensorInstance#
HWiNFOEntryId=#GPU0-Core-Temp2#
HWiNFOType=MaximumValue

[T_GPU_RAM_VRM1_CURRENT]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Ram-SensorID#
HWiNFOSensorInstance=#GPU0-Ram-SensorInstance#
HWiNFOEntryId=#GPU0-Ram-Temp1#
HWiNFOType=CurrentValue
MinValue=30
MaxValue = 100

[T_GPU_RAM_VRM1_MIN]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Ram-SensorID#
HWiNFOSensorInstance=#GPU0-Ram-SensorInstance#
HWiNFOEntryId=#GPU0-Ram-Temp1#
HWiNFOType=MinimumValue

[T_GPU_RAM_VRM1_MAX]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Ram-SensorID#
HWiNFOSensorInstance=#GPU0-Ram-SensorInstance#
HWiNFOEntryId=#GPU0-Ram-Temp1#
HWiNFOType=MaximumValue

[T_GPU_RAM_VRM2_CURRENT]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Ram-SensorID#
HWiNFOSensorInstance=#GPU0-Ram-SensorInstance#
HWiNFOEntryId=#GPU0-Ram-Temp2#
HWiNFOType=CurrentValue
MinValue=30
MaxValue = 100

[T_GPU_RAM_VRM2_MIN]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Ram-SensorID#
HWiNFOSensorInstance=#GPU0-Ram-SensorInstance#
HWiNFOEntryId=#GPU0-Ram-Temp2#
HWiNFOType=MinimumValue

[T_GPU_RAM_VRM2_MAX]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Ram-SensorID#
HWiNFOSensorInstance=#GPU0-Ram-SensorInstance#
HWiNFOEntryId=#GPU0-Ram-Temp2#
HWiNFOType=MaximumValue

[MeasureTempMotherboardCurrent]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#OVERCLOCK-SensorID#
HWiNFOSensorInstance=#OVERCLOCK-SensorInstance#
HWiNFOEntryId=#OVERCLOCK-Tmotherboard#
HWiNFOType=CurrentValue
IfCondition = (#userTempAlertActive# = 1) && (MeasureTempMotherboardCurrent > #userTempAlertMotherboardThreshold#)
IfTrueAction = !ToggleMeter MeterTempMotherboardCurrent
IfFalseAction = !ShowMeter MeterTempMotherboardCurrent
IfConditionMode =1

MinValue=30
MaxValue = 100

[T_MOTHERBOARD_MIN]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#OVERCLOCK-SensorID#
HWiNFOSensorInstance=#OVERCLOCK-SensorInstance#
HWiNFOEntryId=#OVERCLOCK-Tmotherboard#
HWiNFOType=MinimumValue

[MeasureTempMotherboardMax]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#OVERCLOCK-SensorID#
HWiNFOSensorInstance=#OVERCLOCK-SensorInstance#
HWiNFOEntryId=#OVERCLOCK-Tmotherboard#
HWiNFOType=MaximumValue


[MeasureBreachedTemperatureThreshold]
Measure=Calc
Formula = (#userTempAlertActive# = 1) && ((MeasureTempCpu0Current > #userTempAlertCpuThreshold#) || (MeasureTempGpu0Current > #userTempAlertGpuThreshold#) || (MeasureTempGpu0CoreVrm1Current > #userTempAlertGpuVrm1Threshold#) || (MeasureTempGpu0CoreVrm2Current > #userTempAlertGpuVrm2Threshold#) || (MeasureTempMotherboardCurrent> #userTempAlertMotherboardThreshold#)) ? 1 : 0
IfCondition=(MeasureBreachedTemperatureThreshold = 1) && (#suspendTemperatureCheck# = 0)
IfTrueAction=!UpdateMeasure MeasurePlayTemperatureSound

[MeasureFlashTemperatureLogo]
Measure=Calc
Formula = MeasureBreachedTemperatureThreshold
IfCondition=(MeasureBreachedTemperatureThreshold = 1) 
IfTrueAction=[!SetVariable TemperatureThresholdBreached "1"] [!ToggleMeter Temperature_Logo]
IfFalseAction=[!SetVariable TemperatureThresholdBreached "0"] [!ShowMeter Temperature_Logo]
IfConditionMode=1
DynamicVariables=1

[MeasurePlayTemperatureSound]
Measure=Calc
Formula=(MeasureBreachedTemperatureThreshold)
IfCondition=(#suspendTemperatureCheck# = 0) && (MeasureBreachedTemperatureThreshold = 1)  && (#userAudibleWarningActive# = 1)
IfTrueAction=[!SetVariable suspendTemperatureCheck "1"] [#executePlayTemperatureThresholdBreachedWarningSound#] 
IfCondition2=(#suspendTemperatureCheck# = 1) 
IfTrueAction2=[!SetVariable suspendTemperatureCheck "0"]
DynamicVariables=1
UpdateDivider=#userAlertRepeatSeconds#
IfConditionMode=1

