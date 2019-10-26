#include "ISmart.h"
#include "ITablet.h"

class APhoneFactory {    
public:
    enum PHONE_FACTORIES
    {
        SAMSUNG,
        HTC,
        NOKIA
    };

    virtual ISmart* GetSmart() = 0;
    virtual ITablet* GetTablet() = 0;

    static APhoneFactory* CreateFactory(PHONE_FACTORIES factory);    
};
