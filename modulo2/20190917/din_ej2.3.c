/*
Modulo 2

Memoria dinámica
	Generar un array dinamico de 10 elementos, se imprime y se libera

*/

#include<stdlib.h>
#include<stdio.h>
#include<time.h>


void booK3(double ** ptr_main,int n){

	//Book the memory and initialize it

	int i;

	double * ptr= (double *) malloc (sizeof(double)*n);

	if (ptr==NULL){

		puts("\nThere is no available memory");
		exit(-1);
	}else{

	//Write the memory:

	for(i=0;i<n;i++)
		ptr[i]=rand()%100;	
	}
	
	//Copiar la dir. en el puntero definido en main.
	*ptr_main =ptr;
}


void prinT(double * ptr,int n){

	//Print the numbers:

	int i;

	for(i=0;i<n;i++)
		printf("\n%g",ptr[i]);
	puts("");
}

void freE(double ** ptr){

	//Free the occupied memory
	free(*ptr);
	*ptr=NULL;
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

	//ptr=booK(n);
	booK3(&ptr,n);
	prinT(ptr,n);
	freE(&ptr);
}
