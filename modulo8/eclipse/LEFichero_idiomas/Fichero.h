/*
 * Fichero.h
 *
 *  Created on: 14 oct. 2019
 *      Author: antonio
 */

#ifndef FICHERO_H_
#define FICHERO_H_

#include <string>
#include <map>

class Fichero {

	std::string path;
	std::map<std::string,std::string> configuracion;

	bool load();

public:
	Fichero(std::string path);

	void save(std::string path= "");
	std::string getKey(std::string key);
	void setKey(std::string key, std::string value);
	void imprimirMapa();

	virtual ~Fichero();
};

#endif /* FICHERO_H_ */
