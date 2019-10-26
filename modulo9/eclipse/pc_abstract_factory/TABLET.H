/*
 * Tablet.h
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#ifndef TABLET_H_
#define TABLET_H_

class Tablet {

protected:
	int capacidadTarjeta;

public:
	Tablet(int capacidadTarjeta=0);

	virtual void internet()=0;

	virtual ~Tablet();
};

#endif /* TABLET_H_ */
