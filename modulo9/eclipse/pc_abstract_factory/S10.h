/*
 * S10.h
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#ifndef S10_H_
#define S10_H_

#include "SmartPhone.h"

class S10 : public SmartPhone{
public:
	S10(int numero=0);

	void llamar();

	virtual ~S10();
};

#endif /* S10_H_ */
