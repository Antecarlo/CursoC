/*
 * Proxy.cpp
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#include "Proxy.h"

#include <fstream>
#include <stdexcept>

Proxy::Proxy(std::unique_ptr<Operaciones> servidor) {
	this->servidor = std::move(servidor);
}

bool Proxy::checkURL(std::string url) {
	std::ifstream fich("./urls_restringidas",std::ios::in);  //Fichero abierto
	std::string linea;
	char cad[1024];
	bool existe=false;

	if(!fich){
		throw std::invalid_argument("El fichero no se encuentra...");
		return existe;
	}

	while(fich.getline(cad,1024)){
		linea=std::string(cad);
		if(url.compare(linea)==0)
			existe= true;
	}
	return existe;

}

void Proxy::descargarURL(std::string url) {
	try{
	if(!this->checkURL(url))
		throw std::invalid_argument(url+" se encuentra restringida ...");
	else{
		//Se puede descargar, se le solicita al servidor
		this->servidor->descargarURL(url);
	}
	}catch(std::invalid_argument &e){
		throw e; //Relanzar hacia fuera la excepcion
	}
}

Proxy::~Proxy() {
	// TODO Auto-generated destructor stub
}

