;---------------------------------------------------------
;-- OverClock - The Rainmeter Skin for OverClockers.
;---------------------------------------------------------

[Variables]
;-------------------------------------------------------------------
;-- Here is where you change the sensor address ID (eg 
;-- 0x0000301) to the address displayed in the HWinFO shared memory
;-- viewer. You should NOT change the Name of the sensor
;-- (eg System-Virt-Committed) as this is how the skin accesses the 
;-- sensor data. 
;-- Each sensor has an Id and Instance which identifies the sensor 
;-- itself then the actual sensor values. You must make sure the 
;-- Sensor Id & Instance are entered correctly as well as the 
;-- Id for the value.
;-- 
;-- It is likely that the only addresses you need to change are for the
;-- GPU Specific sensors and the motherboard specific sensor
;-- (in my case a Radeon R9 290 & Nuvoton NCT672D respecitvely). 
;-- These are in the GPU and OVERCLOCK sensors section at the bottom of
;-- this list.
;--
;-- N.B. IF YOU MAKE CHANGES TO THIS FILE TAKE A COPY BECAUSE IF YOU 
;-- RE-INSTALL OR UPDATE THE SKIN THIS FILE WILL BE OVERWRITTEN.
;--
;-- YOU HAVE BEEN WARNED!
;---------------------------------------------------------------------

;---------------------------------
; System Sensor
;----- Sensor Id & Instance ------
System-SensorID=0xf0000301
System-SensorInstance=0x0
;----- Sensor Values -------------
;----- Virtual Memory ------------
System-Virt-Committed=0x8000000
System-Virt-Available=0x8000001
System-Virt-Load=0x8000002
;----- Ram -----------------------
System-Ram-Used=0x8000003
System-Ram-Available=0x8000004
System-Ram-Load=0x8000005
;---------------------------------

;---------------------------------
; CPU [#0] Sensor
;----- Sensor Id & Instance -----
CPU0-SensorID=0xf0000300
CPU0-SensorInstance=0x0
;----- Sensor Values -----
;------- Usage ----------
CPU0-Usage=0x7000005
;----- Voltage ------
CPU0-C0-Volt=0x2000000
CPU0-C1-Volt=0x2000001
CPU0-C2-Volt=0x2000002
CPU0-C3-Volt=0x2000003
;----- Clock ---------
CPU0-C0-Clock=0x6000000
CPU0-C1-Clock=0x6000001
CPU0-C2-Clock=0x6000002
CPU0-C3-Clock=0x6000003
;----- Threads --------
CPU0-T0-CurrentUsage=0x7000000
CPU0-T1-CurrentUsage=0x7000001
CPU0-T2-CurrentUsage=0x7000002
CPU0-T3-CurrentUsage=0x7000003
;----- Uncore -------------
CPU0-Uncore-Clock=0x6000005
CPU0-Uncore-Ratio=0x8000008
;----- Throttling ---------
CPU0-C0-Thermal-Throttling=0x8000000 
CPU0-C1-Thermal-Throttling=0x8000001
CPU0-C2-Thermal-Throttling=0x8000002
CPU0-C3-Thermal-Throttling=0x8000003

;---------------------------------
; CPU #0 Temps
;----- Sensor ID & Instance -----
CPU0-Temp-SensorID=0xf0000400
CPU0-Temp-SensorInstance=0x0
;----- Sensor Values -------------
CPU0-C0-Temp=0x1000000
CPU0-C1-Temp=0x1000001
CPU0-C2-Temp=0x1000002
CPU0-C3-Temp=0x1000003
CPU0-Temp=0x100007f

;--------------------------------
; CPU #0 GPU Sensor
;----- Sensor ID & Instance -----
CPU0-GPU0-SensorID=0xf0002a00
CPU0-GPU0-SensorInstance=0x0
;----- Sensor Values -------------
CPU0-GPU0-Clock=0x6000000
CPU0-GPU0-Usage=0x7000000
CPU0-GPU0-Memory=0x8000002

;--------------------------------
;     CPU0_Sensor2
;----- Sensor ID & Instance -----
CPU0-Sensor2ID=0xf0002a00
CPU0-Sensor2Instance=0x0
;----- Sensor Values -------------
CPU0-Cpu-Power=0x5000000
CPU0-IA-Power=0x5000001
CPU0-DRAM-Power=0x5000003

;--------------------------------
; HDD0 S.M.A.R.T.
;----- Sensor ID & Instance -----
;HDD0-SMART-SensorID=0xf0000100
;HDD0-SMART-SensorInstance=0x5
;----- Sensor Values -------------
;HDD0-Temp=0x1000000
;HDD0-Drive-Fail=0x8000000
;HDD0-Drive-Warning=0x8000001

;--------------------------------
; HDD 0 
;----- Sensor ID & Instance -----
HDD0-SensorID=0xf0000101
HDD0-SensorInstance=0x2
;----- Sensor Values -------------
HDD0-Read-Per=0x7000000
HDD0-Write-Per=0x7000001
HDD0-Total-Per=0x7000002
HDD0-Read-Rate=0x8000000
HDD0-Write-Rate=0x8000001

;--------------------------------
; HDD1 S.M.A.R.T.
;----- Sensor ID & Instance -----
HDD1-SMART-SensorID=0xf0000100
HDD1-SMART-SensorInstance=0x5
;----- Sensor Values -------------
HDD1-Temp=0x1000000
HDD1-Drive-Fail=0x8000000
HDD1-Drive-Warning=0x8000001

;--------------------------------
; HDD1
;----- Sensor ID & Instance -----
HDD1-SensorID=0xf0000101
HDD1-SensorInstance=0x0
;----- Sensor Values -------------
HDD1-Read-Per=0x7000000
HDD1-Write-Per=0x7000001
HDD1-Total-Per=0x7000002
HDD1-Read-Rate=0x8000000
HDD1-Write-Rate=0x8000001

;--------------------------------
; HDD2 S.M.A.R.T.
;----- Sensor ID & Instance -----
HDD2-SMART-SensorID=0xf0000100
HDD2-SMART-SensorInstance=0x6
;----- Sensor Values -------------
HDD2-Temp=0x1000000
HDD2-Drive-Fail=0x8000000
HDD2-Drive-Warning=0x8000001

;--------------------------------
; HDD2
;----- Sensor ID & Instance -----
HDD2-SensorID=0xf0000101
HDD2-SensorInstance=0x0
;----- Sensor Values -------------
HDD2-Read-Per=0x7000000
HDD2-Write-Per=0x7000001
HDD2-Total-Per=0x7000002
HDD2-Read-Rate=0x8000000
HDD2-Write-Rate=0x8000001

;--------------------------------
; GPU Specific Sensors
;--------------------------------
;     Dedicated GPU 0
;----- Sensor ID & Instance -----
GPU0-SensorID=0xe0001800
GPU0-SensorInstance=0x0
;----- Sensor Values -------------
GPU0-Temp=0x1000000
GPU0-Volt=0x2000000
GPU0-Fan=0x8000000
GPU0-Fan-RPM=0x3000000
GPU0-Core-Clock=0x6000000
GPU0-GPU-Usage=0x7000000
GPU0-Mem-Clock=0x6000004
GPU0-Vid-Clock=0x6000005
GPU0-Core-Load=0x7000000
GPU0-Mem-Usage=0x7000002
GPU0-Mem-Allocated=0x800003c
GPU0-PCIe-Speed=0x8000003

;--------------------------------
; Dedicated GPU 0 Core Vrm
;----- Sensor ID & Instance -----
GPU0-Core-SensorID=0xe0001a03
GPU0-Core-SensorInstance=0x1a
;----- Sensor Values -------------
GPU0-Core-Temp1=0x1000000
GPU0-Core-Temp2=0x1000001
GPU0-Core-Volt-Out=0x2000000
GPU0-Core-Current-Out=0x4000001
GPU0-Core-Power-Out=0x5000000

;--------------------------------
; Dedicated GPU 0 Ram Vrm
;----- Sensor ID & Instance -----
GPU0-Ram-SensorID=0xe0001a03
GPU0-Ram-SensorInstance=0x1b
;----- Sensor Values -------------
GPU0-Ram-Temp1=0x1000000
GPU0-Ram-Temp2=0x1000001
GPU0-Ram-Volt-Out=0x2000000
GPU0-Ram-Current-Out=0x4000001
GPU0-Ram-Power-Out=0x5000000

;---------------------------------
; Motherboard specific sensors
;---------------------------------
;OVERCLOCK Sensor
;----- Sensor ID & Instance ------
OVERCLOCK-SensorID=0xf7067920
OVERCLOCK-SensorInstance=0x0
;----- Sensor Values -------------
OVERCLOCK-CPU-Temp=0x1000007
OVERCLOCK-TmotherBoard=0x1000000
OVERCLOCK-Vccin=0x2000000
OVERCLOCK-Vin6=0x2000006
OVERCLOCK-Vcore=0x200000a
OVERCLOCK-VDRAM=0x200000d
OVERCLOCK-Vring=0x200000e
OVERCLOCK-Fan1-Rpm=0x3000003
OVERCLOCK-Fan2-Rpm=0x3000002
OVERCLOCK-Fan3-Rpm=0x3000004