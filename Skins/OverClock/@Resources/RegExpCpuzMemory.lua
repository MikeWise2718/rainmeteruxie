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
		.."Chipset.*Memory Type.*0000A0~>(.*)</font>"
		..".*Memory Size.*0000A0~>(.*)</font>"
		..".*Channels.*0000A0~>(.*)</font>"
		..".*Memory Frequency.*0000A0~>(.*)</font>"
		..".*CAS# latency.*0000A0~>(.*)</font>"
		..".*RAS# to CAS# delay.*0000A0~>(.*)</font>"
		..".*RAS# Precharge.*0000A0~>(.*)</font>"
		..".*Cycle Time.*0000A0~>(.*)</font>"
		..".*Row Refresh Cycle Time.*0000A0~>(.*)</font>"
		..".*Command Rate .*0000A0~>(.*)</font>"
		 
	SKIN:Bang('!SetVariable "CpuzRegExpMemory" "'..CpuzRegExpText..'"')
end