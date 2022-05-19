#include "TTLEventGenerator2.h"

using namespace TTLEventGenerator2Space;

//Change all names for the relevant ones, including "Processor Name"
TTLEventGenerator2::TTLEventGenerator2() : GenericProcessor("Processor Name")
{

}

TTLEventGenerator2::~TTLEventGenerator2()
{

}

void TTLEventGenerator2::process(AudioSampleBuffer& buffer)
{
	/** 
	If the processor needs to handle events, this method must be called onyl once per process call
	If spike processing is also needing, set the argument to true
	*/
	//checkForEvents(false);
	int numChannels = getNumOutputs();

	for (int chan = 0; chan < numChannels; chan++)
	{
		int numSamples = getNumSamples(chan);
		int64 timestamp = getTimestamp(chan);

		//Do whatever processing needed
	}
	 
}

