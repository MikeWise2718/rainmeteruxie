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
		CpuzRegXpText1 = "(?siU)"
		--.."Binaries.*CPU-Z version</small>.*0000A0~>(.*)</font>"			
		.."CPU-Z version</small>.*0000A0~>(.*)</font>"			

		..".*Number of processors</small>.*0000A0~>(.*)</font>" 
		..".*Number of Threads</small>.*0000A0~>(.*)</font>"				

		--..".Processors Information.*Processor 1"
		..".*Number of cores</small>.*0000A0~>(.*)</font>"                
		..".*Number of threads</small>.*0000A0~>(.*)</font>"
		..".*Name</small>.*0000A0~>(.*)</font>"
		..".*Codename</small>.*0000A0~>(.*)</font>"
		..".*Package.*0000A0~>(.*)</font>"
		..".*Technology</small>.*0000A0~>(.*)</font>"                  
		..".*TDP Limit</small>.*0000A0~>(.*)</font>"
		..".*Tjmax</small>.*0000A0~>(.*)</font>"
		..".*Stock frequency.*0000A0~>(.*)</font>"
		..".*Turbo Mode</small>.*0000A0~>(.*)</font>"
		..".*Max non-turbo ratio</small>.*0000A0~>(.*)</font>"
		..".*Max turbo ratio</small>.*0000A0~>(.*)</font>"
		..".*Ratio 1 core</small>.*0000A0~>(.*)</font>"
		..".*Ratio 2 cores</small>.*0000A0~>(.*)</font>"
		..".*Ratio 3 cores</small>.*0000A0~>(.*)</font>"
		..".*Ratio 4 cores</small>.*0000A0~>(.*)</font>"
		..".*TSC.*0000A0~>(.*)</font>"
		..".*APERF.*0000A0~>(.*)</font>"
		..".*MPERF.*0000A0~>(.*)</font>"
		..".*IA Voltage Mode.*0000A0~>(.*)</font>"
		..".*IA Voltage Target.*0000A0~>(.*)</font>"
		..".*IA Voltage Offset.*0000A0~>(.*)</font>"
		..".*GT Voltage Mode.*0000A0~>(.*)</font>"
		..".*GT Voltage Offset.*0000A0~>(.*)</font>"
		..".*LLC/Ring Voltage Mode.*0000A0~>(.*)</font>"
		..".*LLC/Ring Voltage Target.*0000A0~>(.*)</font>"
		..".*LLC/Ring Voltage Offset.*0000A0~>(.*)</font>"
		..".*Agent Voltage Mode.*0000A0~>(.*)</font>"
		..".*Agent Voltage Offset.*0000A0~>(.*)</font>"

		..".*Chipset.*Northbridge.*0000A0~>(.*)</font>"
		..".*Southbridge.*0000A0~>(.*)</font>"
		..".*Memory Type.*0000A0~>(.*)</font>"
		..".*Memory Size.*0000A0~>(.*)</font>"
		..".*Channels.*0000A0~>(.*)</font>"
		..".*Memory Frequency.*0000A0~>(.*)</font>"

		--..".*MemorySPD.*DIMM #.*1.*Memory type*0000A0~>(.*)</font>"
		..".*Memory type.*0000A0~>(.*)</font>"
		--..".*Manufacturer (ID).*0000A0~>(.*)</font>"
		..".*Size.*0000A0~>(.*)</font>"
		..".*Max bandwidth.*0000A0~>(.*)</font>"
		..".*Manufacturing date.*0000A0~>(.*)</font>"
		..".*Number of banks.*0000A0~>(.*)</font>"
		..".*Nominal Voltage.*0000A0~>(.*)</font>"
		..".*EPP.*0000A0~>(.*)</font>"
		..".*XMP.*0000A0~>(.*)</font>"
		..".*XMP revision.*0000A0~>(.*)</font>"
		..".*AMP.*0000A0~>(.*)</font>"
		..".*Xmp profile.*0000A0~>(.*)</font>"
		..".*Specification.*0000A0~>(.*)</font>"
		..".*Voltage level.*0000A0~>(.*)</font>"
		..".*Min Cycle time.*0000A0~>(.*)</font>"
		..".*Max CL.*0000A0~>(.*)</font>"
		..".*Min tRP.*0000A0~>(.*)</font>"
		..".*Min tRCD.*0000A0~>(.*)</font>"
		..".*Min tWR.*0000A0~>(.*)</font>"
		..".*Min tRas.*0000A0~>(.*)</font>"
		..".*Min tRC.*0000A0~>(.*)</font>"
		..".*Min tRFC.*0000A0~>(.*)</font>"
		..".*Min tRTP.*0000A0~>(.*)</font>"
		..".*Min tRRD.*0000A0~>(.*)</font>"
		..".*Command Rate.*0000A0~>(.*)</font>"
		
		..".*Memory type.*0000A0~>(.*)</font>"
		--..".*Manufacturer (ID).*0000A0~>(.*)</font>"
		..".*Size.*0000A0~>(.*)</font>"
		..".*Max bandwidth.*0000A0~>(.*)</font>"
		..".*Manufacturing date.*0000A0~>(.*)</font>"
		..".*Number of banks.*0000A0~>(.*)</font>"
		..".*Nominal Voltage.*0000A0~>(.*)</font>"
		..".*EPP.*0000A0~>(.*)</font>"
		..".*XMP.*0000A0~>(.*)</font>"
		..".*XMP revision.*0000A0~>(.*)</font>"
		..".*AMP.*0000A0~>(.*)</font>"
		..".*Xmp profile.*0000A0~>(.*)</font>"
		..".*Specification.*0000A0~>(.*)</font>"
		..".*Voltage level.*0000A0~>(.*)</font>"
		..".*Min Cycle time.*0000A0~>(.*)</font>"
		..".*Max CL.*0000A0~>(.*)</font>"
		..".*Min tRP.*0000A0~>(.*)</font>"
		..".*Min tRCD.*0000A0~>(.*)</font>"
		..".*Min tWR.*0000A0~>(.*)</font>"
		..".*Min tRas.*0000A0~>(.*)</font>"
		..".*Min tRC.*0000A0~>(.*)</font>"
		..".*Min tRFC.*0000A0~>(.*)</font>"
		..".*Min tRTP.*0000A0~>(.*)</font>"
		..".*Min tRRD.*0000A0~>(.*)</font>"
		..".*Command Rate.*0000A0~>(.*)</font>"
	
		--..".*Monitoring.*Mainboard Model.*0000A0~>(.*)</font>"
		..".*Mainboard Model.*0000A0~>(.*)</font>"

		--..".*LPCIO.*LPCIO Vendor.*0000A0~>(.*)</font>"
		..".*LPCIO Vendor.*0000A0~>(.*)</font>"
		..".*LPCIO Model.*0000A0~>(.*)</font>"

		--..".*<b>DMI</b>.*<small>DMI BIOS</small>.*vendor.*0000A0~>(.*)</font>"
		..".*<small>DMI BIOS</small>.*vendor.*0000A0~>(.*)</font>"
		..".*version.*0000A0~>(.*)</font>"
		..".*date.*0000A0~>(.*)</font>"
		..".*ROM size.*0000A0~>(.*)</font>"
		-- ..".*Memory Frequency.*0000A0~>(.*)</font>"
		
		
		--..".*<b>DMI System Information</b>.*Manufacturer.*0000A0~>(.*)</font>"
		--..".*<small>DMI System Information</small>.*Manufacturer.*0000A0~>(.*)</font>"
		--..".*product.*0000A0~>(.*)</font>"
		--..".*version.*0000A0~>(.*)</font>"
	
		--..".*<b>DMI Baseboard</b>.*vendor.*0000A0~>(.*)</font>"
		..".*<small>DMI Baseboard</small>.*vendor.*0000A0~>(.*)</font>"
		..".*model.*0000A0~>(.*)</font>"
		--..".*revision</small>.*0000A0~>(.*)</font>"

		--..".*<small>DMI Processor</small>.*manufacturer.*0000A0~>(.*)</font>"
		--..".*model.*0000A0~>(.*)</font>"
		..".*FSB speed.*0000A0~>(.*)</font>"
		..".*multiplier.*0000A0~>(.*)</font>"
		
		--..".*<b>DMI System Enclosure</b>.*manufacturer.*0000A0~>(.*)</font>"
		--..".*manufacturer.*0000A0~>(.*)</font>"
		--..".*chassis type.*0000A0~>(.*)</font>"
		
		--..".*<b>DMI Physical Memory Array</b>.*location.*0000A0~>(.*)</font>"
		--..".*location.*0000A0~>(.*)</font>"
		--..".*usage.*0000A0~>(.*)</font>"
		--..".*correction.*0000A0~>(.*)</font>"
		--..".*max capacity.*0000A0~>(.*)</font>"
		--..".*max# of devices.*0000A0~>(.*)</font>"
		
	
	SKIN:Bang('!SetVariable "CpuzRegXpText" "'..CpuzRegXpText1..'"')
end