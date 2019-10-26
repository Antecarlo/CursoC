/*
Modulo 2

Generar un array dinamico de tamaño n con calloc y despues se amplia con realloc

void *realloc(void * p, size_t tamaño_total);

El puntero p, apunta al bloque inicial de mem, pero tambien puede ser NULL.
tamaño_total lo que teniamos en bytes + lo nuevo que quiero.

*/

#include<stdlib.h>
#include<stdio.h>

int main(){
	int n=10;
	int n2=n+5;
	int i;
	double *ptr=NULL; //tambien seria valido: =0

	//Reservar memoria para n double:
	ptr= (double *)calloc(n,sizeof(double));

	if (ptr==NULL){

		puts("\nNo hay memoria disponible");
		exit(-1);
	}

	printf("\nEl bloque se encuentra en la dir: %p",ptr);

	//Cargar numeros dentro del array:
	for(i=0;i<n;i++)
		ptr[i]=i/100.0;

	//Imprimir los numeros:
	for(i=0;i<n;i++)
		printf("\n%g_",ptr[i]);

	//Ampliacion para 5 datos mas:
	ptr=(double *)realloc(ptr,sizeof(double)*n2);
	for(i=n;i<n2;i++)
		ptr[i]=99;

	//Imprimir de nuevo el array ampliado:
	for(i=0;i<n2;i++)
		printf("\n%g",ptr[i]);

	//Liberar memoria
	free(ptr);
	ptr=NULL;

}
