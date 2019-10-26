/*
 * GalaxyA.h
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#ifndef GALAXYA_H_
#define GALAXYA_H_

#include "Tablet.h"

class GalaxyA: public Tablet {
public:
	GalaxyA(int capacidad=0);

	void internet();

	virtual ~GalaxyA();
};

#endif /* GALAXYA_H_ */
