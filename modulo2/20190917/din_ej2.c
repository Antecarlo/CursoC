/*
Modulo 2

Memoria dinámica
	Generar un array dinamico de 10 elementos, se imprime y se libera

*/

#include<stdlib.h>
#include<stdio.h>
#include<time.h>


//imprimir: imprime los numeros
//liberar: libera la memoria ocupada

/*
ERROR NO PROPAGA AL MAIN LA DIRECCION DE BLOQUE RESERVADO, CUANDO LA FUNCION SE EJECUTA ESA DIRECCION SE BORRA

void booK(double *ptr,int n){

	//Book the memory and initialize it

	int i;

	ptr= (double *) malloc (sizeof(double)*n);

	if (ptr==NULL){

		puts("\nThere is no available memory");
		exit(-1);
	}else{

	//Write the memory:

	for(i=0;i<n;i++)
		ptr[i]=	rand()%100;	
	}
}
*/

double * booK(int n){

	//Book the memory and initialize it

	int i;

	ptr= (double *) malloc (sizeof(double)*n);

	if (ptr==NULL){

		puts("\nThere is no available memory");
		exit(-1);
	}else{

	//Write the memory:

	for(i=0;i<n;i++)
		ptr[i]=	rand()%100;	
	}
	return ptr;
}

void prinT(double * ptr,int n){

	//Print the numbers:

	int i;

	for(i=0;i<n;i++)
		printf("\n%g",ptr[i]);
	puts("");
}

void freE(double * ptr){

	//Free the occupied memory
	free(ptr);
	ptr=NULL;
}


int main(){

	//Random 
	time_t t;
	srand((unsigned)time(&t));
	
	char nc[5];
	int n;
	double* ptr=NULL;

	//Ask for the quantity of numbers
	printf("How many random numbers?");
	fflush(stdin);
	fgets(nc,5,stdin);
	n=atoi(nc);

	ptr=booK(n);
	prinT(ptr,n);
	freE(ptr);
}
