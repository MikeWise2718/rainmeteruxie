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
		.."Processors Information.*Processor 1"
		..".*Number of cores</small>.*0000A0~>(.*)</font>"                
		..".*Number of threads</small>.*0000A0~>(.*)</font>"
		..".*Name</small>.*0000A0~>(.*)</font>"
		..".*Codename</small>.*0000A0~>(.*)</font>"
		..".*Specification</small>.*0000A0~>(.*)</font>"
		..".*Package.*0000A0~>(.*)</font>"
		..".*Technology</small>.*0000A0~>(.*)</font>"                  
		..".*TDP Limit</small>.*0000A0~>(.*)</font>"
		..".*Tjmax</small>.*0000A0~>(.*)</font>"
		..".*Multiplier x Bus Speed</small>.*0000A0~>(.*)</font>"
		..".*Stock frequency.*0000A0~>(.*)</font>"
			
	SKIN:Bang('!SetVariable "CpuzRegExpProcessor1" "'..CpuzRegExpText..'"')
end