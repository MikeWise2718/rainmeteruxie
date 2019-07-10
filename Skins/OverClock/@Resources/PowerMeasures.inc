;---------------------------------------------------------
;-- OverClock - The Rainmeter Skin for OverClockers.
;---------------------------------------------------------
;
;-------------------------------------------------------
;--             Power Measures
;-------------------------------------------------------
[MeasurePowerIaCurrent]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#CPU0-Sensor2ID#
HWiNFOSensorInstance=#CPU0-Sensor2Instance#
HWiNFOEntryId=#CPU0-IA-Power#
HWiNFOType=CurrentValue

[MeasurePowerIaMin]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#CPU0-Sensor2ID#
HWiNFOSensorInstance=#CPU0-Sensor2Instance#
HWiNFOEntryId=#CPU0-IA-Power#
HWiNFOType=MinimumValue

[MeasurePowerIaMax]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#CPU0-Sensor2ID#
HWiNFOSensorInstance=#CPU0-Sensor2Instance#
HWiNFOEntryId=#CPU0-IA-Power#
HWiNFOType=MaximumValue

[MeasurePowerDramCurrent]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#CPU0-Sensor2ID#
HWiNFOSensorInstance=#CPU0-Sensor2Instance#
HWiNFOEntryId=#CPU0-DRAM-Power#
HWiNFOType=CurrentValue

[MeasurePowerDramMin]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#CPU0-Sensor2ID#
HWiNFOSensorInstance=#CPU0-Sensor2Instance#
HWiNFOEntryId=#CPU0-DRAM-Power#
HWiNFOType=MinimumValue

[MeasurePowerDramMax]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#CPU0-Sensor2ID#
HWiNFOSensorInstance=#CPU0-Sensor2Instance#
HWiNFOEntryId=#CPU0-DRAM-Power#
HWiNFOType=MaximumValue

[MeasurePowerGpu0CoreCurrent]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Core-SensorID#
HWiNFOSensorInstance=#GPU0-Core-SensorInstance#
HWiNFOEntryId=#GPU0-Core-Power-Out#
HWiNFOType=CurrentValue

[MeasurePowerGpu0CoreMin]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Core-SensorID#
HWiNFOSensorInstance=#GPU0-Core-SensorInstance#
HWiNFOEntryId=#GPU0-Core-Power-Out#
HWiNFOType=MinimumValue

[MeasurePowerGpu0CoreMax]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Core-SensorID#
HWiNFOSensorInstance=#GPU0-Core-SensorInstance#
HWiNFOEntryId=#GPU0-Core-Power-Out#
HWiNFOType=MaximumValue

[MeasurePowerGpu0MemoryCurrent]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Ram-SensorID#
HWiNFOSensorInstance=#GPU0-Ram-SensorInstance#
HWiNFOEntryId=#GPU0-Ram-Power-Out#
HWiNFOType=CurrentValue

[MeasurePowerGpu0MemoryMin]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Ram-SensorID#
HWiNFOSensorInstance=#GPU0-Ram-SensorInstance#
HWiNFOEntryId=#GPU0-Ram-Power-Out#
HWiNFOType=MinimumValue

[MeasurePowerGpu0MemoryMax]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#GPU0-Ram-SensorID#
HWiNFOSensorInstance=#GPU0-Ram-SensorInstance#
HWiNFOEntryId=#GPU0-Ram-Power-Out#
HWiNFOType=MaximumValue
