
/*
	Modulo 2
	Generacion de numeros aleatorios
*/

//Ficheros de encabezado
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10


int main(){

	int i=0;
	int numeros[N];
	srand(time(NULL));

	for(i=0;i<N;i++)
		numeros[i]=rand()%100;
		printf("\n%d=%d",i,numeros[i]);

	puts("");

}
