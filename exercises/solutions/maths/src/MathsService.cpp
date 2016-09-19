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
    return getFieldCreate()->
       createFieldBuilder()->add("sum", pvDouble)->createStructure();
}


// Definition of the Maths RPC service.

epics::pvData::PVStructurePtr MathsService::request(
    epics::pvData::PVStructurePtr const & pvArgument
    ) throw (pvAccess::RPCRequestException)
{   
    // Extract the two arguments.
    // Report an error by throwing a RPCRequestException
    epics::pvData::PVDoublePtr aField = pvArgument->getSubField<PVDouble>("a");
    if (!aField)
    {
        throw pvAccess::RPCRequestException(Status::STATUSTYPE_ERROR,
            "PVDouble field with name 'a' expected.");
    }

    epics::pvData::PVDoublePtr bField = pvArgument->getSubField<PVDouble>("b");
    if (!bField)
    {
        throw pvAccess::RPCRequestException(Status::STATUSTYPE_ERROR,
            "PVDouble field with name 'b' expected.");
    }


    // Create the result structure of the data interface.
    PVStructurePtr result(
        getPVDataCreate()->createPVStructure(makeResponseStructure()));

    // Fill in the value of the structure's sum field
    PVDoublePtr sumField = result->getSubField<PVDouble>("sum");
	sumField->put(aField->get() + bField->get());
    
    // return the structure.
    return result;
}

}

}
