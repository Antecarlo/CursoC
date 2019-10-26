/*

Modulo 2

Algoritmos de encriptado

*/

#ifndef FUNCIONES_H
	
	#define FUNCIONES_H

	char * generarAlf();
	int codificarLetra(char ,char *);
	char decodificarLetra(int, char *);
	int * codificarCadena(char*, char *);
	char * decodificarCadena(int *,int,char *);
	char * encriptadoCesar(char *,char *,int);	
	char * desencriptadoCesar(char *,char *,int);

	char * generarCadena(char *,int);
	void imprimirCodigo(int *,int);

#endif
