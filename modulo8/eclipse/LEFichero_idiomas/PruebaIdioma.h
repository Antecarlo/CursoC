/*
 * pruebaIdioma.h
 *
 *  Created on: 15 oct. 2019
 *      Author: antonio
 */

#ifndef PRUEBAIDIOMA_H_
#define PRUEBAIDIOMA_H_

#include <string>
#include <map>

class PruebaIdioma {

	std::string path;
	std::map<std::string,std::string> questions;

	bool load();

public:
	PruebaIdioma(std::string path="en_config.ini");

	void save(std::string path= "");
	std::string getKey(std::string key);
	void setKey(std::string key, std::string value);
	void imprimirMapa();

	virtual ~PruebaIdioma();
};


#endif /* PRUEBAIDIOMA_H_ */