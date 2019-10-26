/*
 * main.cpp
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#include "Operaciones.h"
#include "Proxy.h"
#include "Servidor.h"
#include "ServidorDedicado.h"



#include <iostream>

int main(){

	std::string url = "http://www.instagram.com";
	//Proxy proxy(std::make_unique<Servidor>());
	Proxy proxy(std::make_unique<ServidorDedicado>());

	try{

	proxy.descargarURL(url);
	}catch(std::invalid_argument & e){
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	try{
		proxy.descargarURL("http://www.universo.com");
	}catch(std::invalid_argument & e){
		std::cout << "ERROR: "<< e.what() << std::endl;
	}
}


