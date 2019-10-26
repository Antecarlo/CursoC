/*
 * pruebaIdioma.cpp
 *
 *  Created on: 15 oct. 2019
 *      Author: antonio
 */

#include "util.h"

#include <fstream>
#include <iostream>
#include <stdexcept>

#include "string.h"
#include "PruebaIdioma.h"

PruebaIdioma::PruebaIdioma(std::string path): path(path) {
	this->load();
}

bool PruebaIdioma::load() {
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
		this->questions.insert(util::getColumnas(linea,'='));
	}
	return true;
}

void PruebaIdioma::save(std::string path) {
	std::string pathOut;

	pathOut=(path=="")? this->path : path;

	std::ofstream fich(pathOut,std::ios::out); //Flujo

	if(fich.is_open()){

		for(auto p: this->questions)
			fich <<p.first << '=' << p.second << "\n";

		fich.close();
	}else{
		throw std::invalid_argument("The file "+this->path+" is already in use");
	}
}

std::string PruebaIdioma::getKey(std::string key) {
	return this->questions.at(key);
}

void PruebaIdioma::setKey(std::string key, std::string value) {
	this->questions[key]=value;
}

void PruebaIdioma::imprimirMapa() {
	for (auto p: this->questions)
		std::cout << p.first<< " = "<<p.second << "\n";
}

PruebaIdioma::~PruebaIdioma() {
	// TODO Auto-generated destructor stub
}
