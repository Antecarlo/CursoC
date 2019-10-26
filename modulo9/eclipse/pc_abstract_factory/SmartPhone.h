/*
 * SmartPhone.h
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#ifndef SMARTPHONE_H_
#define SMARTPHONE_H_

//Clase abstracta que representa a los telefonos

class SmartPhone {

protected:
	int numero;

public:
	SmartPhone(int numero=0);

	virtual void llamar()=0;

	virtual ~SmartPhone();
};

#endif /* SMARTPHONE_H_ */
