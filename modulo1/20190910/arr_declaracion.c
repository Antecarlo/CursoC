/*
Modulo 2


*/

//Ficheros de encabezado
#include<stdio.h>

# define N 10


int main(){
	//Define un array de tamaño N sin inicializar
	int numeros[N];
	int i;

	for (i=0;i<N;i++)
		printf("\n%d=%d",i,numeros[i]);
	printf("\n");

	//Definir un array inicializando los valores
	int numeros2[]={3,7,4,4,5,78,6,2,4,5,7,3};
	int n=sizeof(numeros2)/sizeof(int);
	printf("\n numeros2 ocupa %ld bytes y un entero: %ld", sizeof(numeros2),sizeof(int));

	for (i=0;i<n;i++)
		printf("\n%d=%d",i,numeros2[i]);
	printf("\n");

	// Definir un array con tamaño e inicializar algun elemento, el resto se rellenan automaticamente con 0s
	int numeros3[N]={1,2,3};

	for (i=0;i<N;i++)
		printf("\n%d=%d",i,numeros3[i]);	
	printf("\n");
}

