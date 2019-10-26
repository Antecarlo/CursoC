/*
 * ListDir.h
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#ifndef LISTDIR_H_
#define LISTDIR_H_

#include <string>
#include <vector>

class ListDir {
public:
	ListDir();
	static std::vector<std::string> getCSV(std::string origen);
	virtual ~ListDir();
};

#endif /* LISTDIR_H_ */