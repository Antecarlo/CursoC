/*

Modulo 2

Algoritmos de encriptado

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "funciones.h"

int main(){

	int codigo;
	char * alf; 
	char letra;
	int * codigoCadena;
	char * decod;
	int n;

	char * cadenaDin;
	int len;
	char * cesar;
	char * desenCesar;

	alf= generarAlf();
	printf("\n%s\n",alf);

	codigo=codificarLetra('P',alf);
	//printf("%d\n",codigo);

	letra=decodificarLetra(4,alf);
	//printf("\n%c",letra);



/*
	//Guardar en dinamico el mensaje a codificar
	//char cadena[]={"Este mensaje va a ser codificado"};
	char cadena[]={"Este m"};
	cadenaDin = generarCadena(cadena,strlen(cadena));
	len=strlen(cadenaDin);
	printf("%s:%d\n",cadenaDin,len);
	
	//Codificamos la cadena
	codigoCadena=codificarCadena(cadenaDin,alf);

	//Imprimimos el codigo
	imprimirCodigo(codigoCadena,len);

	//Decodificamos el codigo
	decod=decodificarCadena(codigoCadena,len,alf);

	//Imprimimos el resultado
	printf("\n%s\n",decod);
*/



	char cadena[]={"Este mensaje va a ser encriptado y desencriptado"};
	len=strlen(cadena);
	printf("%s:%d\n",cadena,len);
	
	//Codificamos la cadena
	codigoCadena=codificarCadena(cadena,alf);

	//Imprimimos el codigo
	imprimirCodigo(codigoCadena,len);

	//Decodificamos el codigo
	decod=decodificarCadena(codigoCadena,len,alf);

	//Imprimimos el resultado
	printf("\n%s\n",decod);


	//Encriptado cesar
	cesar=encriptadoCesar(cadena,alf,5);
	//Imprimimos cesar
	printf("Cesar:%s\n",cesar);

	//Desencriptado cesar
	desenCesar=desencriptadoCesar(cesar,alf,5);
	printf("Desencriptado cesar:%s\n",desenCesar);


	
	
}
