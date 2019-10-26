/*
 * main.cpp
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#include "SmartPhone.h"
#include "Tablet.h"
#include "FactoryApple.h"
#include "FactorySamsung.h"
#include "Factory.h"

#include <iostream>
#include <string>
#include <memory>



int main(int argc, char * argv[]){
	std::unique_ptr<Factory> factory;
	std::string tipo = "SAMSUNG";
	if(argc >1)
		tipo=std::string(argv[1]);

	if(tipo=="SAMSUNG")
		factory = std::make_unique<FactorySamsung>();
	else //Apple
		factory = std::make_unique<FactoryApple>();

	SmartPhone * ptrSM = factory->createSmartPhone(600990585);
	std::unique_ptr<SmartPhone> tno = std::unique_ptr<SmartPhone>(ptrSM);
	tno->llamar();

	Tablet * ptrTB = factory->createTablet(64);
	std::unique_ptr<Tablet> tableta = std::unique_ptr<Tablet>(ptrTB);
	tableta->internet();
}
