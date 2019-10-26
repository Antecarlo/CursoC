/*
 * Fecha.h
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#ifndef FECHA_H_
#define FECHA_H_

#include<iostream>



class Fecha{

	int d,M,y;
	friend std::ostream & operator<<(std::ostream & os, const Fecha & fecha);

public:
	Fecha(int d=1,int M=1,int y=1970);
	void imprimir() const;
	virtual ~Fecha();
};


#endif /* FECHA_H_ */
