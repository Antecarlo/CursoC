#include "APhoneFactory.h"

#include "SamsungFactory.h"
#include "HTCFactory.h"
#include "NokiaFactory.h"

APhoneFactory* APhoneFactory::CreateFactory(PHONE_FACTORIES factory)
{
    if(factory == SAMSUNG)
    {
        return new SamsungFactory();
    }
    else if(factory == HTC)
    {
        return new HTCFactory();
    }
    else if(factory == NOKIA)
    {
        return new NokiaFactory();
    }
}
