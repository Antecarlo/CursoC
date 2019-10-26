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

std::pair<std::string,std::string> util::getColumnas(std::string linea, char delim) {
	std::vector <std::string> claveValor;
	std::istringstream ss(linea);
	std::string token;

	while (std::getline(ss,token,delim))
		claveValor.push_back(token);

	std::pair <std::string,std::string> claveValorPair(claveValor.at(0),claveValor.at(1));
	return claveValorPair;
}

/*
std::vector<int> util::getColumnasInt(std::string linea, char delim) {
	std::vector <int> columnas;
	std::istringstream ss(linea);
	std::string token;

	while (std::getline(ss,token,delim))
		columnas.push_back(std::stoi(token));

	return columnas;
}
*/


util::~util() {
	// TODO Auto-generated destructor stub
}