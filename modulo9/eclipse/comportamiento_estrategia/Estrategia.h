/*
 * Estrategia.h
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#ifndef ESTRATEGIA_H_
#define ESTRATEGIA_H_

class Estrategia {
public:
	Estrategia();

	virtual void ordenar (int *, int)=0;

	virtual ~Estrategia();
};

#endif /* ESTRATEGIA_H_ */
