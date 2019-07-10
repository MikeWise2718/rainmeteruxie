;---------------------------------------------------------
;-- OverClock - The Rainmeter Skin for OverClockers.
;---------------------------------------------------------
;
;----------------------------------------
;--		Variables
;----------------------------------------
[Variables]
voltageThresholdBreached = 0
suspendVoltageCheck = 0
executePlayVoltageThresholdBreachedWarningSound = Play "#@#Sounds\voltageAlert.wav"

;----------------------------------------
;--		Voltage Measures
;----------------------------------------
 
[MeasureVcoreCurrent]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#OVERCLOCK-SensorID#
HWiNFOSensorInstance=#OVERCLOCK-SensorInstance#
HWiNFOEntryId=#OVERCLOCK-Vcore#
HWiNFOType=CurrentValue
IfCondition = (#userVoltageAlertActive# = 1) && (MeasureVcoreCurrent > #userVoltageAlertVcoreThreshold#)
IfTrueAction = [!ToggleMeter MeterVcoreCurrent] 
IfFalseAction = [!ShowMeter MeterVcoreCurrent] 
IfConditionMode =1

[MeasureVcoreMin]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#OVERCLOCK-SensorID#
HWiNFOSensorInstance=#OVERCLOCK-SensorInstance#
HWiNFOEntryId=#OVERCLOCK-Vcore#
HWiNFOType=MinimumValue

[MeasureVcoreMax]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#OVERCLOCK-SensorID#
HWiNFOSensorInstance=#OVERCLOCK-SensorInstance#
HWiNFOEntryId=#OVERCLOCK-Vcore#
HWiNFOType=MaximumValue

[MeasureVccinCurrent]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#OVERCLOCK-SensorID#
HWiNFOSensorInstance=#OVERCLOCK-SensorInstance#
HWiNFOEntryId=#OVERCLOCK-Vccin#
HWiNFOType=CurrentValue
IfCondition = (#userVoltageAlertActive# = 1) && (MeasureVccinCurrent > #userVoltageAlertVccinThreshold#) 
IfTrueAction = [!ToggleMeter MeterVccinCurrent] 
IfFalseAction = [!ShowMeter MeterVccinCurrent] 
IfFalseAction=[#!setVariable #voltageThresholdBreached# "0"#]
IfConditionMode =1


[MeasureVccinMin]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#OVERCLOCK-SensorID#
HWiNFOSensorInstance=#OVERCLOCK-SensorInstance#
HWiNFOEntryId=#OVERCLOCK-Vccin#
HWiNFOType=MinimumValue

[MeasureVccinMax]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#OVERCLOCK-SensorID#
HWiNFOSensorInstance=#OVERCLOCK-SensorInstance#
HWiNFOEntryId=#OVERCLOCK-Vccin#
HWiNFOType=MaximumValue

[MeasureVringCurrent]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#OVERCLOCK-SensorID#
HWiNFOSensorInstance=#OVERCLOCK-SensorInstance#
HWiNFOEntryId=#OVERCLOCK-Vin6#
HWiNFOType=CurrentValue
IfCondition = (#userVoltageAlertActive# = 1) && (MeasureVringCurrent > #userVoltageAlertVRingThreshold#) 
IfTrueAction = [!ToggleMeter MeterVringCurrent] 
IfFalseAction = [!ShowMeter MeterVringCurrent] 
IfConditionMode =1


[MeasureVringMin]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#OVERCLOCK-SensorID#
HWiNFOSensorInstance=#OVERCLOCK-SensorInstance#
HWiNFOEntryId=#OVERCLOCK-Vin6#
HWiNFOType=MinimumValue

[MeasureVringMax]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#OVERCLOCK-SensorID#
HWiNFOSensorInstance=#OVERCLOCK-SensorInstance#
HWiNFOEntryId=#OVERCLOCK-Vin6#
HWiNFOType=MaximumValue

[MeasureVdramCurrent]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#OVERCLOCK-SensorID#
HWiNFOSensorInstance=#OVERCLOCK-SensorInstance#
HWiNFOEntryId=#OVERCLOCK-VDRAM#
HWiNFOType=CurrentValue
IfCondition = (#userVoltageAlertActive# = 1) && (MeasureVdramCurrent > #userVoltageAlertVDramThreshold#)
IfTrueAction = [!ToggleMeter MeterVdramCurrent] 
IfFalseAction = [!ShowMeter MeterVdramCurrent] 
IfConditionMode = 1

[MeasureVdramMin]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#OVERCLOCK-SensorID#
HWiNFOSensorInstance=#OVERCLOCK-SensorInstance#
HWiNFOEntryId=#OVERCLOCK-VDRAM#
HWiNFOType=MinimumValue

[MeasureVdramMax]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#OVERCLOCK-SensorID#
HWiNFOSensorInstance=#OVERCLOCK-SensorInstance#
HWiNFOEntryId=#OVERCLOCK-VDRAM#
HWiNFOType=MaximumValue

[MeasureBreachedVoltageThreshold]
Measure=Calc
Formula = (#userVoltageAlertActive# = 1) && ((MeasureVcoreCurrent > #userVoltageAlertVcoreThreshold#) ||(MeasureVringCurrent > #userVoltageAlertVRingThreshold#) ||(MeasureVccinCurrent > #userVoltageAlertVccinThreshold#) ||(MeasureVdramCurrent > #userVoltageAlertVDramThreshold#)) ? 1 : 0
IfCondition=(MeasureBreachedVoltageThreshold = 1) && (#suspendVoltageCheck# = 0)
IfTrueAction=!UpdateMeasure MeasurePlaySound

[MeasureFlashVoltageLogo]
Measure=Calc
Formula = MeasureBreachedVoltageThreshold
IfCondition=(MeasureBreachedVoltageThreshold = 1) 
IfTrueAction=[!SetVariable voltageThresholdBreached "1"] [!ToggleMeter Voltage_Logo]
IfFalseAction=[!SetVariable voltageThresholdBreached "0"] [!ShowMeter Voltage_Logo]
IfConditionMode=1
DynamicVariables=1

[MeasurePlaySound]
Measure=Calc
Formula=(MeasureBreachedVoltageThreshold) 
IfCondition=(#suspendVoltageCheck# = 0) && (MeasureBreachedVoltageThreshold = 1) && (#userAudibleWarningActive# = 1)
IfTrueAction=[!SetVariable suspendVoltageCheck "1"] [#executePlayVoltageThresholdBreachedWarningSound#] 
IfCondition2=(#suspendVoltageCheck# = 1) 
IfTrueAction2=[!SetVariable suspendVoltageCheck "0"]
DynamicVariables=1
UpdateDivider=#userAlertRepeatSeconds#
IfConditionMode=1