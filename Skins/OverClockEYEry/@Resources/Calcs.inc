[TimeMeasure]
Measure=Time

[TimeHoursBar]
Measure=Time
Format=%I
MinValue=0
MaxValue=12

[TimeMinutesBar]
Measure=Time
Format=%M
MinValue=0
MaxValue=59

[TimeSecondsBar]
Measure=Time
Format=%S
MinValue=0
MaxValue=59

[TimeSeconds]
Measure=Time
Format=:%S
MinValue=0
MaxValue=59

[Time12Hour]
Measure=Time
Format=%I:%M

[DateSmall]
Measure=Time
Format=%m/%d/%y

[CoreFreqGHzAdjust]
Measure=Calc
Formula=CoreFreq/1000

[TempAdjust]
Measure=Calc
Formula=(BaseTemp-1)/100

[GPUTempAdjust]
Measure=Calc
Formula=(GPUTempHighCore-1)/100

[UsageAdjust]
Measure=Calc
Formula=(BaseUsage-1)/100

[UsageAdjust2]
Measure=Calc
Formula=(BaseUsage2-1)/100

[D3DUsageAdjust]
Measure=Calc
Formula=D3DBaseUsage/100

[D3DUsageAdjust2]
Measure=Calc
Formula=D3DBaseUsage2/100

[RPMAdjust]
Measure=Calc
Formula=(BaseRPM-10)/10
MinValue=0
MaxValue=1350

[CaseFanRPMAdjust]
Measure=Calc
Formula=CaseFan
MinValue=0
MaxValue=6000

[GPUFPSAdjust]
Measure=Calc
Formula=GPUFPS/200

[TempColorAdjust]
Measure=Calc
Formula=TempAdjust > 70 ? 999900 : (TempAdjust > 75 ? 996600 : (TempAdjust > 80 ? 990000 : 110099))

[TempColorAdjustCG]
Measure=Calc
Formula=TempAdjust > 70 ? 999900 : (TempAdjust > 75 ? 996600 : (TempAdjust > 80 ? 990000 : 333333))

[GPUTempColorAdjust]
Measure=Calc
Formula=(GPUTempHighCore > 80 ? 109999 : (GPUTempHighCore > 85 ? 996600 : (GPUTempHighCore > 90 ? 990000 : 110099)))

[GPUTempColorAdjustCG]
Measure=Calc
Formula=(GPUTempHighCore > 80 ? 109999 : (GPUTempHighCore > 85 ? 996600 : (GPUTempHighCore > 90 ? 990000 : 333333)))

[UsageColorAdjust]
Measure=Calc
Formula=UsageAdjust > 85 ? 999900 : (UsageAdjust > 90 ? 996600 : (UsageAdjust > 95 ? 990000 : 110099))

[RPMColorAdjust]
Measure=Calc
Formula=RPMAdjust > 1200 ? 109999 : (RPMAdjust > 1250 ? 996600 : (RPMAdjust > 1300 ? 990000 : 110099))

[GPUFPSHighFlash]
Measure=Calc
Formula=GPUFPS = GPUFPSHighS ? 11111100 : 990000

[HighFlash]
Measure=Calc
Formula=BaseUsage = UsageHigh ? 11111100 : 990000

[FPSBorderHighFlash]
Measure=Calc
Formula=GPUFPS = GPUFPSHighS ? 109999 : 333333

[CoreFreqGHzHigh]
Measure=Calc
Formula=(CoreFreqGHzAdjust > CoreFreqGHzHigh) ? CoreFreqGHzAdjust : CoreFreqGHzHigh

[TempHigh]
Measure=Calc
Formula=(BaseTemp > TempHigh) ? BaseTemp : TempHigh
MinValue=0
MaxValue=100

[TempHighNeedleAdjust]
Measure=Calc
Formula=TempHigh+1
MinValue=0
MaxValue=100

[GPUTempHigh]
Measure=Calc
Formula=(GPUTempHighCore > GPUTempHigh) ? GPUTempHighCore : GPUTempHigh
MinValue=0
MaxValue=100

[GPUTempHighNeedleAdjust]
Measure=Calc
Formula=GPUTempHigh+1
MinValue=0
MaxValue=100

[UsageHigh]
Measure=Calc
Formula=(BaseUsage > UsageHigh) ? BaseUsage : UsageHigh
MinValue=0
MaxValue=100

[UsageHigh2]
Measure=Calc
Formula=(BaseUsage2 > UsageHigh2) ? BaseUsage2 : UsageHigh2
MinValue=0
MaxValue=100

[UsageHighNeedleAdjust]
Measure=Calc
Formula=UsageHigh+1
MinValue=0
MaxValue=99

[UsageHighNeedleAdjust2]
Measure=Calc
Formula=UsageHigh2+1
MinValue=0
MaxValue=99

[RPMHigh]
Measure=Calc
Formula=(RPMAdjust > RPMHigh) ? RPMAdjust : RPMHigh
MinValue=0
MaxValue=1350

[RPMHighNeedleAdjust]
Measure=Calc
Formula=RPMHigh+10
MinValue=0
MaxValue=1350

[CaseFanRPMHigh]
Measure=Calc
Formula=(CaseFanRPMAdjust > CaseFanRPMHigh) ? CaseFanRPMAdjust : CaseFanRPMHigh
MinValue=0
MaxValue=6000

[VHigh]
Measure=Calc
Formula=(BaseV > VHigh) ? BaseV : VHigh

[ClockHigh]
Measure=Calc
Formula=(BaseClock > ClockHigh) ? BaseClock : ClockHigh

[MemClockHigh]
Measure=Calc
Formula=(BaseMemClock > MemClockHigh) ? BaseMemClock : MemClockHigh

[GPUTempHighCore]
Measure=Calc
Formula=GPUTemp > GPU1Temp ? GPUTemp : (GPUTemp > GPU2Temp ? GPUTemp : (GPUTemp > GPU0Temp ? GPUTemp : GPU1TempHighCore))

[GPU1TempHighCore]
Measure=Calc
Formula=GPU1Temp > GPUTemp ? GPU1Temp : (GPU1Temp > GPU2Temp ? GPU1Temp : (GPU1Temp > GPU0Temp ? GPU1Temp : GPU2TempHighCore))

[GPU2TempHighCore]
Measure=Calc
Formula=GPU2Temp > GPU1Temp ? GPU2Temp : (GPU2Temp > GPUTemp ? GPU2Temp : (GPU2Temp > GPU0Temp ? GPU2Temp : GPU0TempHighCore))

[GPU0TempHighCore]
Measure=Calc
Formula=GPU0Temp > GPU1Temp ? GPU0Temp : (GPU0Temp > GPU2Temp ? GPU0Temp : (GPU0Temp > GPUTemp ? GPU0Temp : GPUTempHighCore))

[GPUFPSHigh]
Measure=Calc
Formula=(GPUFPSAdjust > GPUFPSHigh) ? GPUFPSAdjust : GPUFPSHigh

[GPUFPSHighS]
Measure=Calc
Formula=(GPUFPS > GPUFPSHighS) ? GPUFPS : GPUFPSHighS
MinValue=0
MaxValue=200
