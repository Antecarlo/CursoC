
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

#include "prototipos.h"
#include "tipos.h"

#define MAXPER 2
#define SALIR 4


/*
void introducirPersona(TPersona p,TPersona *p){

}
*/

int main(){

	int op;
	char op2[4];
	int i;
	int notEmpty;
	int n;

	int numPersonas=0;
	TPersona personas[MAXPER];

	do{

	notEmpty=(numPersonas>0)?1:0;

	printf("\t\t\t\tMENU\n\n");
	printf("\t\t\t\t1. REGISTRAR NUEVA PERSONA\n");
	printf("\t\t\t\t2. IMPRIMIR PERSONAS\n");
	printf("\t\t\t\t3. ORDENAR PERSONAS\n");
	printf("\t\t\t\t4. SALIR\n");
	printf("\t\t\t\tOPCION: \n\n");

	fflush(stdin);
	fgets(op2,4,stdin);
	op=atoi(op2);
	//printf("op:%d",op);

	switch(op){
		case 1:
			if(numPersonas<MAXPER){
			puts("\n\tRegistrar");
			//TPersona aux=registrar();
			personas[numPersonas]=registrar();
			numPersonas++;
			}else
				printf("\n\n\t\t\t&&&&&&&& Error, no caben mas personas &&&&&&&&\n\n");
			break;
		case 2:
			if(notEmpty){
				puts("\n\tImprimir");
				for(i=0;i<numPersonas;i++)
				imprimirPersona(personas[i]);
			}
			else
				printf("\n\n\t\t\t&&&&&&&& Error, no hay personas &&&&&&&&\n\n");
			break;
		case 3:
			if(notEmpty){
				puts("\n\tOrdenar por edad");
				n=sizeof(personas)/sizeof(personas[0]);
				ordenar(personas,n,asc);

			}
			else
				printf("\n\n\t\t\t&&&&&&&& Error, no hay personas &&&&&&&&\n\n");
			break;
		case SALIR:
			break;
		default:
			puts("\n\tOpcion no valida");
			break;
	}

	}while(op!=SALIR);

}
