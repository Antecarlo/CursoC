/*
 * util.h
 *
 *  Created on: 14 oct. 2019
 *      Author: antonio
 */

#ifndef UTIL_H_
#define UTIL_H_

#include <vector>
#include <string>

class util {
public:
	util();

	static std::pair <std::string,std::string> getColumnas (std::string linea, char delim = '=');

	virtual ~util();
};

#endif /* UTIL_H_ */
