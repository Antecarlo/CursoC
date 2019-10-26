/*
 * Fichero.cpp
 *
 *  Created on: 14 oct. 2019
 *      Author: antonio
 */

#include "Fichero.h"
#include "util.h"

#include <fstream>
#include <iostream>
#include <stdexcept>

#include "string.h"

Fichero::Fichero(std::string path): path(path) {
	this->load();
}

bool Fichero::load() {
	std::ifstream fich(this->path.c_str(),std::ios::in); //abrimos el fichero

	if(!fich)
		throw std::invalid_argument("The file "+this->path+" does not exist");

	std::string linea;
	char cad[1024];

	if(!fich){
		std::cout << "Error, no se encuentra el fichero" << std::endl;
		std::exit(1);
	}

	while (fich.getline(cad,1024)){ //leemos lineas del fichero
		linea=std::string(cad);
		this->configuracion.insert(util::getColumnas(linea,'='));
	}
	return true;
}

void Fichero::save(std::string path) {
	std::string pathOut;

	pathOut=(path=="")? this->path : path;

	std::ofstream fich(pathOut,std::ios::out); //Flujo

	if(fich.is_open()){

		for(auto p: this->configuracion)
			fich <<p.first << '=' << p.second << "\n";

		fich.close();
	}else{
		throw std::invalid_argument("The file "+this->path+" is already in use");
	}
}

std::string Fichero::getKey(std::string key) {
	return this->configuracion.at(key);
}

void Fichero::setKey(std::string key, std::string value) {
	this->configuracion[key]=value;
}

void Fichero::imprimirMapa() {
	for (auto p: this->configuracion)
		std::cout << p.first<< " = "<<p.second << "\n";
}

Fichero::~Fichero() {
	// TODO Auto-generated destructor stub
}
