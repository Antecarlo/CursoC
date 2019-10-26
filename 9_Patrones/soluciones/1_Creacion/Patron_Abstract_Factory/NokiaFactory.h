#include "Lumia.h"
#include "Asha.h"

class NokiaFactory : public APhoneFactory {
public: 
    ISmart* GetSmart()
    {
        return new Lumia();
    }

    ITablet* GetTablet()
    {
        return new Asha();
    }
};
