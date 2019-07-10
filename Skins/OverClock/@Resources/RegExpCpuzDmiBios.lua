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
		.."DMI.*DMI BIOS</small>.*vendor.*0000A0~>(.*)</font>"
		..".*version.*0000A0~>(.*)</font>"
		..".*date.*0000A0~>(.*)</font>"
		..".*ROM size.*0000A0~>(.*)</font>"
		
	SKIN:Bang('!SetVariable "CpuzRegExpDmiBios" "'..CpuzRegExpText..'"')
end