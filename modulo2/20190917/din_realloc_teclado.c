/*
Modulo 2

Generar un array dinamico de tamaño 0 y despues se amplia con realloc

void *realloc(void * p, size_t tamaño_total);

*/

#include<stdlib.h>
#include<stdio.h>

int main(){
	int n=0;
	int *ptr=NULL; //tambien seria valido: =0
	int in;
	int i;

	printf("Enter numbers, to finish press 0:\n");
	do{
	printf("_");
	fflush(stdin);
	scanf("%d",&in);
	
	ptr=(int *)realloc(ptr,sizeof(int)*++n);

	if (ptr==NULL){

		puts("\nNo hay memoria disponible");
		exit(-1);

	}else ptr[n-1]=in;

	}while(in!=0);


	//Imprimir los numeros:
	for(i=0;i<n;i++)
		printf("%d-",ptr[i]);
	puts("");

	//Liberar memoria
	free(ptr);
	ptr=NULL;

}
