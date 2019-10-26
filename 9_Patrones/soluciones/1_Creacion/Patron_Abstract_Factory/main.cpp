#include <iostream>
#include <string>

#include "APhoneFactory.h"

using namespace std;

int main(int argc, char** argv) {
	APhoneFactory *factory = APhoneFactory::CreateFactory(APhoneFactory::SAMSUNG);

    cout << "Tablet phone from Samsung: " << factory->GetTablet()->Name() << "\n";
    delete factory->GetTablet(); //USe of smart pointer will get rid of these delete
    cout << "Smart phone from Samsung: " << factory->GetSmart()->Name() << "\n";
    delete factory->GetSmart(); //USe of smart pointer will get rid of these delete
    delete factory;
    
    factory = APhoneFactory::CreateFactory(APhoneFactory::HTC);
    cout << "Tablet phone from HTC: " << factory->GetTablet()->Name() << "\n";
    delete factory->GetTablet(); //USe of smart pointer will get rid of these delete
    cout << "Smart phone from HTC: " << factory->GetSmart()->Name() << "\n";
    delete factory->GetSmart(); //USe of smart pointer will get rid of these delete
    delete factory;
    
	    
    factory = APhoneFactory::CreateFactory(APhoneFactory::NOKIA);
    cout << "Tablet phone from Nokia: " << factory->GetTablet()->Name() << "\n";
    delete factory->GetTablet(); //USe of smart pointer will get rid of these delete
    cout << "Smart phone from Nokia: " << factory->GetSmart()->Name() << "\n";    
    delete factory->GetSmart(); //USe of smart pointer will get rid of these delete
   
    return 0;
}
