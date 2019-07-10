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
		.."IA Voltage Mode.*0000A0~>(.*)</font>"
		..".*IA Voltage Target.*0000A0~>(.*)</font>"
		..".*IA Voltage Offset.*0000A0~>(.*)</font>"
		..".*GT Voltage Mode.*0000A0~>(.*)</font>"
		..".*GT Voltage Offset.*0000A0~>(.*)</font>"
		..".*LLC/Ring Voltage Mode.*0000A0~>(.*)</font>"
		..".*LLC/Ring Voltage Target.*0000A0~>(.*)</font>"
		..".*LLC/Ring Voltage Offset.*0000A0~>(.*)</font>"
		..".*Agent Voltage Mode.*0000A0~>(.*)</font>"
		..".*Agent Voltage Offset.*0000A0~>(.*)</font>"

	SKIN:Bang('!SetVariable "CpuzRegExpMbVoltages" "'..CpuzRegExpText..'"')
end