/*
 * main.cpp
 *
 *  Created on: 11 oct. 2019
 *      Author: antonio
 */

#include "Cajero.h"


int main(){

	Banco banco("BANCO X");
	Cajero cajero;

	cajero.identificacion(banco,1221, 4584);

}
