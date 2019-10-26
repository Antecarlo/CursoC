/*
Modulo 2

Memoria dinámica
	Generar un array dinamico de 10 elementos, se imprime y se libera

*/

#include<stdlib.h>
#include<stdio.h>
#include<time.h>


int main(){

	//Random 
	time_t t;
	srand((unsigned)time(&t));
	
	char nc[5];
	int n;
	int i;
	double *ptr=NULL;



	//Ask for the quantity of numbers
	printf("How many random numbers?");
	fflush(stdin);
	fgets(nc,5,stdin);
	n=atoi(nc);


	//Book allocated memory:
	ptr= (double *) malloc (sizeof(double)*n);

	if (ptr==NULL){

		puts("\nThere is no available memory");
		exit(-1);
	}

	//Write the memory:
	for(i=0;i<n;i++)
		ptr[i]=	rand()%100;

	//Print the numbers:
	for(i=0;i<n;i++)
		printf("\n%g",ptr[i]);
	puts("");

	//Free memory
	free(ptr);
	ptr=NULL;

}
