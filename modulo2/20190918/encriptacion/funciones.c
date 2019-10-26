/*

Modulo 2

Algoritmos de encriptado

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "funciones.h"

char * generarAlf(){
	int i;
	char c;
	int ind;
	int elementos=('z'-'a'+1)+('Z'-'A'+1)+1+1;
	char * alf;

	//printf("%d",elementos);
	alf=(char *) malloc(elementos*sizeof(char));

	//Mayusculas
	for(c='A',i=0;c<='Z';c++,i++)
		alf[i]=c;

	//Minusculas
	for(c='a';c<='z';c++)
		alf[i++]=c;

	//Espacio
	alf[i]=' ';

	//\0
	alf[++i]='\0';

	return alf;
}

int codificarLetra(char letra,char * alf){
	char *ptr;

	ptr=strchr(alf,letra);

	if(ptr==NULL){
		printf("Caracter no valido: %d.\n",(int)letra);
		exit(1);
	}
	
	return ptr-alf;

}

char decodificarLetra(int numero, char * alf){

	if(numero>=strlen(alf)||numero<0){
		puts("Codigo no valido\n");
		exit(1);
	}
	
	return alf[numero];
}

int * codificarCadena(char* cadena, char * alf){
	int i;
	int len;
	int * codigo;

	len=strlen(cadena);
	codigo=(int *) malloc(len*sizeof(int));
	
	for(i=0;i<len;i++){
		codigo[i]=codificarLetra(cadena[i],alf);
	}
	return codigo;
}

char * decodificarCadena(int * numeros,int n, char * alf){
	int i;
	char * decod;
	
	decod=(char *)malloc((n+1)*sizeof(char));	

	for(i=0;i<n;i++){
		decod[i]=decodificarLetra(numeros[i],alf);
	}
	decod[i]='\0';

	return decod;
}

char * encriptadoCesar(char * mensaje,char * alf,int k){
	int * aux;
	int i;
	int n;
	char * encripCesar;

	aux=codificarCadena(mensaje,alf);
	n=strlen(mensaje);

	for(i=0;i<n;i++){
		aux[i]=((aux[i]+k)%strlen(alf));
	}	
	encripCesar=decodificarCadena(aux,n,alf);

	free(aux);
	aux=NULL;

	return encripCesar;
}	

char * desencriptadoCesar(char * mensajeEnc,char * alf,int k){
	int * aux;
	int i, n;
	char * desencripCesar;

	aux=codificarCadena(mensajeEnc,alf);
	n=strlen(mensajeEnc);

	for(i=0;i<n;i++){
		if(aux[i]-k<0)
			aux[i]=strlen(alf)+(aux[i]-k);
		else
			aux[i]=(aux[i]-k);
	}
	
	desencripCesar=decodificarCadena(aux,n,alf);
	
	return desencripCesar;
}

char * generarCadena(char * cadena,int n){
	char * cadenaDin;
	int i;

	cadenaDin=(char *)malloc(n*sizeof(char));	

	strcpy(cadenaDin,cadena);
}

void imprimirCodigo(int * codigo,int n){
	int i;

	for(i=0;i<n;i++)
		printf("%d-",codigo[i]);
	puts("");
}

