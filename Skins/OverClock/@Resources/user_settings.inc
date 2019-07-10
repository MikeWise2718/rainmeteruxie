;---------------------------------------------------------
;-- OverClock - The Rainmeter Skin for OverClockers.
;---------------------------------------------------------
;
[Variables]
;---------------------------------------------------------
;-- This is where you can customise the OverClock Skin
;-- I suggest you take a copy of this file before
;-- making any changes so that you can revert to the 
;-- default settings if you need to.
;---------------------------------------------------------

;---------------------------------------------------------
;-- See the Read Me.txt file in the @Resources folder
;-- for instructions on how to setup the sensor 
;-- address ID's from HWinFO
;---------------------------------------------------------

;---------------------------------------------------------
;-- Customise the Font here 
;-- It must be a ttf font located in the 
;-- @Resources/Fonts folder.
;-- You must enter the 'font name', not the name of
;-- the font file. The details of the font including the
;-- 'font name' can usually be displayed by double clicking
;-- on the font file. If this doesn't work then google
;-- is your friend.
;--------------------------------------------------------

userFontName 			=Agency FB
userFontSize 			=12
userFontSizeAboveBar 	=8
userFontSizeSideLabel 	=14

;---------------------------------------------------------
;-- Customise the colours here - You may use Hex or RGB
;--------------------------------------------------------

userBackgroundColor 	=242,229,225,35  
userColorField 		=255,0,0,255
userColorLabel 		=255,255,255,255
userColorSideLabel 	=255,255,255,255
userColorBarSolid 	=202,80,36,35
userColorBarColor 	=10,128,10,255

;----------------------------------------------------------
;-- Alerts
;----------------------------------------------------------
;-- To enable the onscreen alerts for temperature & voltage
;-- Set the active flag(s) to 1 and then set the threshold
;-- (in Centigrade) above which you wish the warning
;-- will display.
;-- To activate an audible warning sound if the threshold 
;-- is breached set userAudibleWarningActive to 1. 
;-- To set the length of time between each alert sounding 
;-- set userAlertRepeatSeconds to the required 
;-- number of seconds. i.e. 30 = 30 seconds, 60 = 1 minute
;-----------------------------------------------------------
userTempAlertActive =0
userTempAlertCpuThreshold =100
userTempAlertGpuThreshold =100
userTempAlertGpuVrm1Threshold =100
userTempAlertGpuVrm2Threshold =100
userTempAlertMotherboardThreshold =100

userVoltageAlertActive =0
userVoltageAlertVcoreThreshold =9.99
userVoltageAlertVRingThreshold =9.99
userVoltageAlertVccinThreshold =9.99
userVoltageAlertVDramThreshold =9.99

userAudibleWarningActive =0
userAlertRepeatSeconds =15

;----------------------------------------------------------
;-- Voltage/Temperature/Power Panel User Settings
;----------------------------------------------------------
;-- To Customise the Logo on the Voltage/Temperature/Power
;-- Panel Replace the OverClock_logo.png in the 
;-- ../Rainmeter/Skins/Overclock/Voltage_Temps_Power folder
;-- with your logo or to remove logo delete
;-- OverClock_logo.png
;----------------------------------------------------------
;----------------------------------------------------------
;-- Customise the Link to open from the Logo
;----------------------------------------------------------

userLinkForOverClockLogo =http://www.deviantart.com/art/OverClock-1-2-0-Rainmeter-Skin-for-Overclockers-519894955


;----------------------------------------------------------
;-- Voltage Only Panel User Settings
;----------------------------------------------------------
;-- To Customise the Logo on the Voltage
;-- Panel Replace the voltage.png in the 
;-- ../Rainmeter/Skins/Overclock/voltage folder
;--  with your logo or to remove logo delete voltage.png
;----------------------------------------------------------
;----------------------------------------------------------
;-- Customise the Link to open from the Logo
;----------------------------------------------------------

userLinkForVoltageLogo = http://overclock3d.net/


;----------------------------------------------------------
;-- Temperature Only Panel User Settings
;----------------------------------------------------------
;-- To Customise the Logo on the Temperature 
;-- Panel Replace the temperature.png in the
;-- ../Rainmeter/Skins/Overclock/temps folder
;-- with your logo or to remove logo delete temperature.png
;----------------------------------------------------------
;----------------------------------------------------------
;-- Customise the Link to open from the Logo
;----------------------------------------------------------

userLinkForTemperatureLogo = http://www.aerocool.com.tw/index.php/fan/shark-fan/49-fan/shark-fan/555-shark-fan-evilblack-12cm-infromation


;----------------------------------------------------------
;-- Power Only Panel User Settings
;----------------------------------------------------------
;-- To Customise the Logo on the Power
;-- Panel Replace the power.png in the 
;-- ../Rainmeter/Skins/Overclock/power folder 
;-- with your logo or to remove logo delete power.png
;----------------------------------------------------------
;----------------------------------------------------------
;-- Customise the Link to open from the Logo
;----------------------------------------------------------

userLinkForPowerLogo = http://www.performancepsu.com/hands-corsair-cx750m-review/


;----------------------------------------------------------
;-- Cores Panel User Settings
;----------------------------------------------------------
;----------------------------------------------------------
;-- To Customise the Logo on the Cores Panel
;-- Replace the cpu_logo.png in the
;-- ../Rainmeter/Skins/Overclock/cores folder
;-- with your logo or to remove logo delete cpu_logo.png
;--
;-- Enter your Max CPU & Uncore Clocks so the clock speed
;-- bars will display correctly
;----------------------------------------------------------

userMaxClockSpeed=4700
userMaxUncoreClockSpeed=4200

;----------------------------------------------------------
;-- Customise the Link to open from the Logo
;----------------------------------------------------------

userLinkForCoresLogo =http://ark.intel.com/products/80811/Intel-Core-i5-4690K-Processor-6M-Cache-up-to-3_90-GHz

;----------------------------------------------------------
;-- GPU Panel User Settings
;----------------------------------------------------------
;-- Fans Panel User Settings
;----------------------------------------------------------
;-- The Percentage of fans at idle should be set 
;-- to a few percent less than they actually are in
;-- order for the fan image to spin at an approriate speed.
;----------------------------------------------------------

userGpuFan1IdlePercent =10

;----------------------------------------------------------
;-- Enter the text to appear at the side of the GPU panel
;-- eg. The name of your Graphics Card 
;----------------------------------------------------------

userGpuName =Sapphire R9 290 Tri-x OC

;----------------------------------------------------------
;-- To Customise the Logo on the GPU Panel
;-- Replace the gpu_logo.png in the 
;-- ../Rainmeter/Skins/Overclock folder
;-- with your logo or to remove logo delete gpu_logo.png
;----------------------------------------------------------
;-- Customise the Link to open from the Logo
;----------------------------------------------------------

userLinkForGpuLogo =http://www.sapphiretech.com/presentation/product/product_index.aspx?pid=2090&lid=1


;----------------------------------------------------------
;-- Fans Panel User Settings
;----------------------------------------------------------
;-- To Customise the Logo on the Voltage/Temperature/Power
;-- Panel replace the fans_logo.png in the 
;-- ../Rainmeter/Skins/Overclock/fans folder
;-- with your logo or to remove logo delete fans_logo.png
;--
;-- Customise the names of your fans here
;-- Enter the maximum RPM of your fans 
;-- to enable the bar meter to display correctly.
;--
;-- The Percentage of fans at idle should be set 
;-- to a few percent less than they actually are in
;-- order for the fan image to spin at an approriate speed.
;-- 
;-- NB: The fan meters will only function if the fans
;-- are connected to fan headers on the motherboard. Fans
;-- directly connected to a PSU or a Fan controller will
;-- not be recognised
;----------------------------------------------------------

userFan1Name =Back
userFan1MaxRpm =1500
userFan1IdlePercent =25

userFan2Name =Front
userFan2MaxRpm = 1500
userFan2IdlePercent =25

userFan3Name =Top
userFan3MaxRpm = 1500
userFan3IdlePercent =25

;----------------------------------------------------------
;-- Customise the Link to open from the Fans Logo
;----------------------------------------------------------

userLinkForFansLogo =http://www.phobya.com/eng/phobya.html


;----------------------------------------------------------
;-- CPU-Z Settings
;----------------------------------------------------------
;-- To get the Processor & Motherboard panels to 
;-- show info from CPU-Z you will need to create the CPU-Z
;-- html report.
;-- This can be created from the tools button in CPU-Z.
;-- Rename the created report to cpuzReport.html and copy it 
;-- into the @Resources folder then refresh or reload the 
;-- skin. The data should then be displayed.
;--
;-- If you change hardware or change settings in the 
;-- bios you will need to update the report.
;-- 
;-- If you wish you can get this skin to update the report
;-- either manually or automatically.
;-- 
;-- To enable the manual refresh of the cpu-z report
;-- Copy cpuz.exe to the @Resources folder and set
;-- userCpuzCopied to 1.This will display an icon that
;-- can be clicked to refresh the report.
;--
;-- To enable auto refresh of the cpu-z report on loading
;-- or refreshing the skin set ONE of the userCpuzAuto????
;-- settings to 1. Ensure it's one of the panels you are 
;-- displaying. If you set more than one of them to 1 
;-- the CPU-Z report creation process may run multiple
;-- times.
;----------------------------------------------------------

userCpuzCopied =0

userCpuzAutoOverClock =0
userCpuzAutoMotherboard =0
userCpuzAutoProcessor =0
userCpuzAutoDram =0

;----------------------------------------------------------
;-- Customise the Link to open from the Cpu-Z info Panels
;----------------------------------------------------------

userLinkForCpuzMotherboardLogo=http://eu.msi.com/product/mb/Z97_MPOWER.html#hero-overview
userLinkForCpuzProcessorLogo=http://www.bit-tech.net/hardware/2014/07/03/intel-core-i5-4690k-review/1
userLinkForCpuzOverClockLogo=http://www.deviantart.com/art/OverClock-0-0-10-Beta-Rainmeter-Skin-519894955
userLinkForCpuzDramLogo = http://www.kingston.com/en/hyperx/memory/savage

;--------------------------------------------------------------
; Panel Refresh Times
;--------------------------------------------------------------
userOverclockDotNetRefreshMinutes =60
userOverclockersDotComRefreshMinutes =60






;---------------- END -------------------------------------
