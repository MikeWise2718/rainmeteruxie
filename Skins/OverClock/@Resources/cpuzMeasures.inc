;---------------------------------------------------------
;-- OverClock - The Rainmeter Skin for OverClockers.
;---------------------------------------------------------
;
[Variables]

@IncludeUserSettings=#@#\user_settings.inc

;------------------------------------------------
; CPUZ Measures
;-------------------------------------------------
[MeasureHideRefreshIcon]
Measure=String
String = #userCpuzCopied#
IfEqualValue=0
IfEqualAction = [!HideMeter "CpuzReportRefresh"]
UpdateDivider = -1

[MeasureHideCpuZRunIcon]
Measure=String
String = #userCpuzCopied#
IfEqualValue=0
IfEqualAction = [!HideMeter "CpuzButton"]
UpdateDivider = -1

;------------------------------------------------
; CPUZ Lua Script Measures
;------------------------------------------------
;------------------------------------------------
; CPUZ Lua Script CPU-Z
;------------------------------------------------
[MeasureLuaCpuzScriptCpuz]
Measure=Script
ScriptFile="#@#\RegExpCpuzCpuz.lua"
UpdateDivider=-1

[MeasureCpuzScriptSubstitutedCpuz]
Measure = String
DynamicVariables = 1
String = #CpuzRegExpCpuz#
RegExpSubstitute=1
Substitute="~":'"'

[MeasureCpuzReportCpuz]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=1
URL=file://#@#cpuz_report.htm
RegExp=[MeasureCpuzScriptSubstitutedCpuz]
DynamicVariables=1
UpdateDivider=-1

[MeasureCpuzVersion]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportCpuz]
StringIndex=1
updateDivider=-1

;------------------------------------------------
; CPUZ Lua Script Processors
;-------------------------------------------------
[MeasureLuaCpuzScriptProcessors]
Measure=Script
ScriptFile="#@#\RegExpCpuzProcessors.lua"
UpdateDivider=-1

[MeasureCpuzScriptSubstitutedProcessors]
Measure = String
DynamicVariables = 1
String = #CpuzRegExpProcessors#
RegExpSubstitute=1
Substitute="~":'"'

[MeasureCPUZReportProcessors]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=1
URL=file://#@#cpuz_report.htm
RegExp=[MeasureCpuzScriptSubstitutedProcessors]
DynamicVariables=1
UpdateDivider=-1

[MeasureNumberOfProcessors]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCPUZReportProcessors]
StringIndex=1
updateDivider=-1

[MeasureNumberOfThreads]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCPUZReportProcessors]
StringIndex=2
updateDivider=-1


;------------------------------------------------
; CPUZ Lua Script Processor 1
;-------------------------------------------------#
[MeasureLuaCpuzScriptProcessor1]
Measure=Script
ScriptFile="#@#\RegExpCpuzProcessor1.lua"
UpdateDivider=-1

[MeasureCpuzScriptSubstitutedProcessor1]
Measure = String
DynamicVariables = 1
String = #CpuzRegExpProcessor1#
RegExpSubstitute=1
Substitute="~":'"'

[MeasureCpuzReportProcessor1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=1
URL=file://#@#cpuz_report.htm
RegExp=[MeasureCpuzScriptSubstitutedProcessor1]
DynamicVariables=1
UpdateDivider=-1

[MeasureNumberOfCoresP1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportProcessor1]
StringIndex=1

[MeasureNumberOfThreadsP1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportProcessor1]
StringIndex=2

[MeasureProcessorName]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportProcessor1]
StringIndex=3

[MeasureCodeName]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportProcessor1]
StringIndex=4

[MeasurePackage]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportProcessor1]
StringIndex=6

[MeasureTechnology]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportProcessor1]
StringIndex=7

[MeasureTdpLimit]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportProcessor1]
StringIndex=8

[MeasureTjmax]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportProcessor1]
StringIndex=9

[MeasureMultiplierFrequency]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportProcessor1]
StringIndex=10
RegExpSubstitute=1
Substitute="(?siU)(.*).x (.*).MHz" : "\2"

[MeasureOverClockBaseClock]
Measure=String
String = [MeasureMultiplierFrequency]
Text="%1"
DynamicVariables=1

[MeasureStockFrequency]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportProcessor1]
StringIndex=11

;------------------------------------------------
; CPUZ Lua Script Turbo 
;-------------------------------------------------#
[MeasureLuaCpuzScriptTurbo]
Measure=Script
ScriptFile="#@#\RegExpCpuzTurbo.lua"
UpdateDivider=-1

[MeasureCpuzScriptSubstitutedTurbo]
Measure = String
DynamicVariables = 1
String = #CpuzRegExpTurbo#
RegExpSubstitute=1
Substitute="~":'"'

[MeasureCpuzReportTurbo]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=1
URL=file://#@#cpuz_report.htm
RegExp=[MeasureCpuzScriptSubstitutedTurbo]
DynamicVariables=1
UpdateDivider=-1

[MeasureTurboMode]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportTurbo]
StringIndex=1

[MeasureMaxNonTurboRatio]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportTurbo]
StringIndex=2

[MeasureMaxTurboRatio]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportTurbo]
StringIndex=3

;------------------------------------------------
; CPUZ Lua Script Turbo 
;-------------------------------------------------#
[MeasureLuaCpuzScriptTurbo]
Measure=Script
ScriptFile="#@#\RegExpCpuzTurbo.lua"
UpdateDivider=-1

[MeasureCpuzScriptSubstitutedTurbo]
Measure = String
DynamicVariables = 1
String = #CpuzRegExpTurbo#
RegExpSubstitute=1
Substitute="~":'"'

[MeasureCpuzReportTurbo]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=1
URL=file://#@#cpuz_report.htm
RegExp=[MeasureCpuzScriptSubstitutedTurbo]
DynamicVariables=1
UpdateDivider=-1

[MeasureTurboMode]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportTurbo]
StringIndex=1

[MeasureRatioCore1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCPUZReport]
StringIndex=16

[MeasureRatioCore2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCPUZReport]
StringIndex=17

[MeasureRatioCore3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCPUZReport]
StringIndex=18

[MeasureRatioCore4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCPUZReport]
StringIndex=19

[MeasureTsc]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCPUZReport]
StringIndex=20

[MeasureAperf]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCPUZReport]
StringIndex=21

[MeasureMperf]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCPUZReport]
StringIndex=22

;------------------------------------------------
; CPUZ Lua Script Motherboard Voltages
;-------------------------------------------------#
[MeasureLuaCpuzScriptMbVoltages]
Measure=Script
ScriptFile="#@#\RegExpCpuzMbvoltages.lua"
UpdateDivider=-1

[MeasureCpuzScriptSubstitutedMbVoltages]
Measure = String
DynamicVariables = 1
String = #CpuzRegExpMbVoltages#
RegExpSubstitute=1
Substitute="~":'"'

[MeasureCpuzReportMbVoltages]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=1
URL=file://#@#cpuz_report.htm
RegExp=[MeasureCpuzScriptSubstitutedMbVoltages]
DynamicVariables=1
UpdateDivider=-1

[MeasureIaVoltageMode]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMbVoltages]
StringIndex=1

[MeasureIaVoltageTarget]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMbVoltages]
StringIndex=2

[MeasureIaVoltageOffset]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMbVoltages]
StringIndex=3

[MeasureGtVoltageMode]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMbVoltages]
StringIndex=4

[MeasureGtVoltageOffset]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMbVoltages]
StringIndex=5

[MeasureRingVoltageMode]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMbVoltages]
StringIndex=6

[MeasureRingVoltageTarget]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMbVoltages]
StringIndex=7

[MeasureRingVoltageOffset]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMbVoltages]
StringIndex=8

[MeasureAgentVoltageMode]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMbVoltages]
StringIndex=9

[MeasureAgentVoltageOffset]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMbVoltages]
StringIndex=10

;------------------------------------------------
; CPUZ Lua Script Motherboard Chipset
;-------------------------------------------------#
[MeasureLuaCpuzScriptMbChipset]
Measure=Script
ScriptFile="#@#\RegExpCpuzMbChipset.lua"
UpdateDivider=-1

[MeasureCpuzScriptSubstitutedMbChipset]
Measure = String
DynamicVariables = 1
String = #CpuzRegExpMbChipset#
RegExpSubstitute=1
Substitute="~":'"'

[MeasureCpuzReportMbChipset]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=1
URL=file://#@#cpuz_report.htm
RegExp=[MeasureCpuzScriptSubstitutedMbChipset]
DynamicVariables=1
UpdateDivider=-1

[MeasureNorthbridge]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMbChipset]
StringIndex=1
DynamicVariables=1

[MeasureSouthbridge]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMbChipset]
StringIndex=2

;------------------------------------------------
; CPUZ Lua Script Memory
;-------------------------------------------------#
[MeasureLuaCpuzScriptMemory]
Measure=Script
ScriptFile="#@#\RegExpCpuzMemory.lua"
UpdateDivider=-1

[MeasureCpuzScriptSubstitutedMemory]
Measure = String
DynamicVariables = 1
String = #CpuzRegExpMemory#
RegExpSubstitute=1
Substitute="~":'"'

[MeasureCpuzReportMemory]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=1
URL=file://#@#cpuz_report.htm
RegExp=[MeasureCpuzScriptSubstitutedMemory]
DynamicVariables=1
UpdateDivider=-1

[MeasureMemoryType]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMemory]
StringIndex=1

[MeasureMemorySize]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMemory]
StringIndex=2

[MeasureMemoryChannels]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMemory]
StringIndex=3

[MeasureMemoryFrequency]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMemory]
StringIndex=4

[MeasureMemoryCl]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMemory]
StringIndex=5

[MeasureMemoryTrcd]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMemory]
StringIndex=6

[MeasureMemoryTrp]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMemory]
StringIndex=7

[MeasureMemoryTras]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMemory]
StringIndex=8

[MeasureMemoryTrfc]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportMemory]
StringIndex=9

;-------------------------
; For Later
;--------------------------
[MeasureMemory1Size]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm1]
StringIndex=41

[MeasureMemory1MaxBandwidth]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm1]
StringIndex=42

[MeasureMemory1ManufacturingDate]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm1]
StringIndex=43

[MeasureMemory1NoOfBanks]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm1]
StringIndex=44

[MeasureMemory1NominalVoltage]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm1]
StringIndex=45

[MeasureMemory1Epp]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm1]
StringIndex=46

[MeasureMemory1Xmp]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm1]
StringIndex=47

[MeasureMemory1XmpRevision]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm1]
StringIndex=48

[MeasureMemory1Amp]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm1]
StringIndex=49

[MeasureMemory1XmpProfile]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm1]
StringIndex=50

[MeasureMemory1VoltageLevel]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm1]
StringIndex=52

[MeasureMemory2Size]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm2]
StringIndex=64

[MeasureMemory2MaxBandwidth]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm2]
StringIndex=65

[MeasureMemory2ManufacturingDate]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm2]
StringIndex=66

[MeasureMemory2NoOfBanks]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm2]
StringIndex=67

[MeasureMemory2NominalVoltage]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm2]
StringIndex=68

[MeasureMemory2Epp]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm2]
StringIndex=69

[MeasureMemory2Xmp]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm2]
StringIndex=70

[MeasureMemory2XmpRevision]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm2]
StringIndex=71

[MeasureMemory2Amp]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm2]
StringIndex=72

[MeasureMemory2XmpProfile]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm2]
StringIndex=73

[MeasureMemory2VoltageLevel]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDimm2]
StringIndex=75



;------------------------------------------------
; CPUZ Lua Script LPCIO
;-------------------------------------------------#
[MeasureLuaCpuzScriptLpcio]
Measure=Script
ScriptFile="#@#\RegExpCpuzLpcio.lua"
UpdateDivider=-1

[MeasureCpuzScriptSubstitutedLpcio]
Measure = String
DynamicVariables = 1
String = #CpuzRegExpLpcio#
RegExpSubstitute=1
Substitute="~":'"'

[MeasureCpuzReportLpcio]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=1
URL=file://#@#cpuz_report.htm
RegExp=[MeasureCpuzScriptSubstitutedLpcio]
DynamicVariables=1
UpdateDivider=-1

[MeasureLpcioVendor]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportLpcio]
StringIndex=1

[MeasureLpcioModel]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportLpcio]
StringIndex=2


;------------------------------------------------
; CPUZ Lua Script DMI Bios
;-------------------------------------------------#
[MeasureLuaCpuzScriptDmiBios]
Measure=Script
ScriptFile="#@#\RegExpCpuzDmiBios.lua"
UpdateDivider=-1

[MeasureCpuzScriptSubstitutedDmiBios]
Measure = String
DynamicVariables = 1
String = #CpuzRegExpDmiBios#
RegExpSubstitute=1
Substitute="~":'"'

[MeasureCpuzReportDmiBios]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=1
URL=file://#@#cpuz_report.htm
RegExp=[MeasureCpuzScriptSubstitutedDmiBios]
DynamicVariables=1
UpdateDivider=-1

[MeasureDmiBiosVendor]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDmiBios]
StringIndex=1

[MeasureDmiBiosVersion]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDmiBios]
StringIndex=2

[MeasureDmiBiosDate]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDmiBios]
StringIndex=3

[MeasureDmiBiosRomSize]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDmiBios]
StringIndex=4

;------------------------------------------------
; CPUZ Lua Script DMI Baseboard
;-------------------------------------------------
[MeasureLuaCpuzScriptDmiBaseboard]
Measure=Script
ScriptFile="#@#\RegExpCpuzDmiBaseboard.lua"
UpdateDivider=-1

[MeasureCpuzScriptSubstitutedDmiBaseboard]
Measure = String
DynamicVariables = 1
String = #CpuzRegExpDmiBaseboard#
RegExpSubstitute=1
Substitute="~":'"'

[MeasureCpuzReportDmiBaseboard]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=1
URL=file://#@#cpuz_report.htm
RegExp=[MeasureCpuzScriptSubstitutedDmiBaseboard]
DynamicVariables=1
UpdateDivider=-1

[MeasureDmibaseboardVendor]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDmiBaseboard]
StringIndex=1

[MeasureDmibaseboardModel]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDmiBaseboard]
StringIndex=2

[MeasureDmibaseboardRevision]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDmiBaseboard]
StringIndex=3

;------------------------------------------------
; CPUZ Lua Script DMI Processor
;-------------------------------------------------
[MeasureLuaCpuzScriptDmiProcessor]
Measure=Script
ScriptFile="#@#\RegExpCpuzDmiProcessor.lua"
UpdateDivider=-1

[MeasureCpuzScriptSubstitutedDmiProcessor]
Measure = String
DynamicVariables = 1
String = #CpuzRegExpDmiProcessor#
RegExpSubstitute=1
Substitute="~":'"'

[MeasureCpuzReportDmiProcessor]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=1
URL=file://#@#cpuz_report.htm
RegExp=[MeasureCpuzScriptSubstitutedDmiProcessor]
DynamicVariables=1
UpdateDivider=-1

[MeasureDmiProcessorFsbSpeed]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=[MeasureCpuzReportDmiProcessor]
StringIndex=1

;---------------------------------------------
;-- Calculated Measures
;---------------------------------------------

[MeasureOverClockClock]
Measure=Calc
Formula=MeasureMaxTurboRatio * MeasureOverClockBaseClock

[MeasureOverClockClockPercent]
Measure=Calc
Formula=(MeasureOverClockClock / (MeasureStockFrequency = 0 ? 1 : MeasureStockFrequency) * 100) - 100

[MeasureOverClockRatioPercent]
Measure=Calc
Formula=((MeasureMaxTurboRatio / (MeasureMaxNonTurboRatio = 0 ? 1 : MeasureMaxNonTurboRatio)) * 100) - 100

[MeasureOverClockBusSpeedPercent]
Measure=Calc
Formula=(MeasureOverClockBaseClock / (MeasureDmiProcessorFsbSpeed = 0 ? 100 : MeasureDmiProcessorFsbSpeed) * 100) - 100

[MeasureTotalOverClockPercent]
Measure=Calc
Formula=((MeasureMaxTurboRatio * MeasureOverClockBaseClock) / ((MeasureMaxNonTurboRatio = 0 ? 1 : MeasureMaxNonTurboRatio) * (MeasureDmiProcessorFsbSpeed = 0 ? 1 : MeasureDmiProcessorFsbSpeed))  * 100) - 100