
//Todas las estructuras

#ifndef TIPOS_H
	
	#define TIPOS_H

	typedef struct{
		int d,m,y;
	} TFecha;

	typedef struct{
		char nombre[50];
		char dni[12];
		int edad;
		TFecha fecha;
	} TPersona;

#endif
