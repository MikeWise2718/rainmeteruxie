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
		.."Processors.*Number of processors</small>.*0000A0~>(.*)</font>" 
		..".*Number of Threads</small>.*0000A0~>(.*)</font>"				

	SKIN:Bang('!SetVariable "CpuzRegExpProcessors" "'..CpuzRegExpText..'"')
end