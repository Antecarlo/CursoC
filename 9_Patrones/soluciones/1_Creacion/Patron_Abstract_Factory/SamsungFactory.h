#include "GalaxyS2.h"
#include "Primo.h"

class SamsungFactory : public APhoneFactory {
public:
    ISmart* GetSmart()
    {
        return new GalaxyS2();
    }

    ITablet* GetTablet()
    {
        return new Primo();
    }
};
