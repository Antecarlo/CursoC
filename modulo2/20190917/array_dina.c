/*
Modulo 2

Memoria dinámica
	Generar un array dinamico de 10 elementos, se imprime y se libera

*/

#include<stdlib.h>
#include<stdio.h>

int main(){
	int n=10;
	int i;
	double *ptr=NULL; //tambien seria valido: =0

	//Reservar memoria para n double:
	ptr= (double *) malloc (sizeof(double)*n);

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
		printf("\n%g",ptr[i]);

	//Liberar memoria
	free(ptr);
	ptr=NULL;

}
