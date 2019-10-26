
//Prototipos de funciones

#ifndef PROTOTIPOS_H
	
	#define PROTOTIPOS_H
	
	#include "tipos.h"

	void imprimirPersona(TPersona p);
	void intercambiar(TPersona *p1,TPersona *p2);
	void ordenar(TPersona *personas, int n,int(*ptr)(int,int));
	int asc(int a, int b);
	int des(int a, int b);
	void cumpleanyos(TPersona *p);
	void limpiar(char *s);
	TPersona registrar();
	void cumpleanyos(TPersona *p);

#endif
