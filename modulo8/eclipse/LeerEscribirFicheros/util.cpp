/*
 * util.cpp
 *
 *  Created on: 14 oct. 2019
 *      Author: antonio
 */

#include "util.h"
#include <sstream>

util::util() {
	// TODO Auto-generated constructor stub

}

std::vector<std::string> util::getColumnas(std::string linea, char delim) {
	std::vector <std::string> columnas;
	std::istringstream ss(linea);
	std::string token;

	while (std::getline(ss,token,delim))
		columnas.push_back(token);

	return columnas;
}

std::vector<int> util::getColumnasInt(std::string linea, char delim) {
	std::vector <int> columnas;
	std::istringstream ss(linea);
	std::string token;

	while (std::getline(ss,token,delim))
		columnas.push_back(std::stoi(token));

	return columnas;
}


util::~util() {
	// TODO Auto-generated destructor stub
}
