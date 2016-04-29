// Copyright information and license terms for this software can be
// found in the file LICENSE that is included with the distribution

#include <pv/rpcServer.h>
#include "MathsService.h"

using namespace epics::pvData;

namespace epics
{

namespace mathsService
{

// returns this service's result structure type definition.
StructureConstPtr makeResponseStructure()
{

}


// Definition of the Maths RPC service.

epics::pvData::PVStructurePtr MathsService::request(
    epics::pvData::PVStructurePtr const & pvArgument
    ) throw (pvAccess::RPCRequestException)
{   
    // Extract the arguments. Just one in this case.
    // Report an error by throwing a RPCRequestException 

    // Create the result structure of the data interface.

    // Extract from the constructed data interface the value of
    // "greeting" field. The value we'll return, is "Maths" concatenated
    // to the value of the input parameter called "personsname".

}

}

}
