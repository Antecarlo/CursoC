#include "Titan.h"
#include "Genie.h"

class HTCFactory : public APhoneFactory {
public:
    ISmart* GetSmart()
    {
        return new Titan();
    }

    ITablet* GetTablet()
    {
        return new Genie();
    }
};
