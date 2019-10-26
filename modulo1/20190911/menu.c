#include<time.h>
#include<stdio.h>

#define SALIR 3


int main(){

	int op;

	do{

	printf("\t\t\t\tMENU\n\n");
	printf("\t\t\t\t1. SUMAR\n");
	printf("\t\t\t\t2. RESTAR\n");
	printf("\t\t\t\t3. SALIR\n");
	printf("\t\t\t\tOPCION: \n");

	puts("");
	fflush(stdin);
	scanf("%d",&op);

	switch(op){
		case 1:
			puts("\n\tSumar");
			break;
		case 2:
			puts("\n\tRestar");
			break;
		case SALIR:
			break;
		default:
			puts("\n\tOpcion no valida");

	}

	}while(op!=SALIR);
}

