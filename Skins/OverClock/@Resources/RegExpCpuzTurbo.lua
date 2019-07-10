--------------------------------------------------------
-- OverClock - The Rainmeter Skin for OverClockers.
--------------------------------------------------------

--[[
This script is to enable a long RegExp statement to be set up 
over multiple lines to assist with readability and debugging.
--]]
function Initialise()


end

function Update ()
	CpuzRegExpText = "(?siU)"
		.."Turbo Mode</small>.*0000A0~>(.*)</font>"
		..".*Max non-turbo ratio</small>.*0000A0~>(.*)</font>"
		..".*Max turbo ratio</small>.*0000A0~>(.*)</font>"
		..".*Ratio 1 core</small>.*0000A0~>(.*)</font>"
		..".*Ratio 2 cores</small>.*0000A0~>(.*)</font>"
		..".*Ratio 3 cores</small>.*0000A0~>(.*)</font>"
		..".*Ratio 4 cores</small>.*0000A0~>(.*)</font>"
		..".*TSC.*0000A0~>(.*)</font>"
		..".*APERF.*0000A0~>(.*)</font>"
		..".*MPERF.*0000A0~>(.*)</font>"
		
	SKIN:Bang('!SetVariable "CpuzRegExpTurbo" "'..CpuzRegExpText..'"')
end