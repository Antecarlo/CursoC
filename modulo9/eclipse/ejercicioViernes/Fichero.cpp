/*
 * Fichero.cpp
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#include "Fichero.h"
#include "util.h"

#include <fstream>
#include <iostream>
#include <iomanip>

Fichero::Fichero(std::string nombre): nombre(nombre) {
	// TODO Auto-generated constructor stub

}

//std::vector<std::vector<std::string> > Fichero::leerTabla() {
void Fichero::leerTabla() {
	std::vector<std::vector<std::string>> aux;

	std::ifstream fich("./"+this->nombre,std::ios::in);
	std::string linea;
	char cad[1024];

	if(!fich){
			std::cout << "Error, no se encuentra el fichero" << std::endl;
			std::exit(1);
		}

		while(fich.getline(cad,1024)){
			linea= std::string(cad);
			std::cout << linea << std::endl;
		}
	fich.close();
}

void Fichero::cargaTabla() {

	std::vector<std::vector<std::string>> aux;
	std::vector<std::string> fila;

	char delim=';';

	std::ifstream fich("./"+this->nombre,std::ios::in);
	std::string linea;
	char cad[1024];

	if(!fich){
			std::cout << "Error, no se encuentra el fichero" << std::endl;
			std::exit(1);
		}

		while (fich.getline(cad,1024)){ //leemos lineas del fichero
			linea=std::string(cad);
			fila=util::getColumnas(linea,delim);
			aux.push_back(fila);
			//std::cout << linea << std::endl;
		}

		fich.close();
		this->tabla= aux;
}

void Fichero::escribirTabla() {
	std::string p = this->getNombre();
	std::string pathOut = p+".html";

	std::ofstream fich(pathOut,std::ios::out);

	//Header
	fich << "<!DOCTYPE html>\n<html>\n<head>\n<meta charset=\"ISO-8859-1\">\n";
	fich << "<title>"+p+"</title>\n</head>\n";

}

std::string Fichero::getNombre() {
	//string input = "abc,def,ghi";
	std::string input = this->nombre;
	std::istringstream ss(input);
	std::string token;

	getline(ss, token, '.');
    return token;
}

Fichero::~Fichero() {
	// TODO Auto-generated destructor stub
}

