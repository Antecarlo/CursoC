#include<time.h>
#include<stdlib.h>
#include<stdio.h>

#include "arr_menu_funciones.h"

#define SALIR 5
#define N 10


int main(){
	
	//Variables genericas
	int a;
	int b;
	int j;
	int i;
	int flag;

	//Generar array aleatorio

	/*
	int numeros[N];
	srand(time(NULL));

	for(i=0;i<N;i++){
		numeros[i]=rand()%100;
	}
	*/

	int numeros[N]={1,2,3,4,5,5,4,3,2,1};


	//Mostramos el menu por primera vez
	int op=0;
	op=mostrar(op);

	do{


	switch(op){
		case 1:
			puts("\n\tIMPRIMIR\n");

			imprimir(numeros,N);

			puts("");
			break;
		case 2:
			puts("\n\t¿ES CAPICUO?");

			flag=capicua(numeros,N);
			if(flag==1)printf("\tEl array es capicuo\n");
			else printf("\tEl array no es capicuo\n");

			puts("");
			break;
		case 3:
			puts("\n\tMINIMO/MAXIMO");

			minmax(numeros,N);	

			puts("");
			break;
		case 4:
			puts("\n\tBUSCAR NUMERO");

			buscar(numeros,N);

			puts("");
			break;
		case SALIR:
			puts("\n\tSALIR");
			break;
		default:
			puts("\n\tOPCION NO VALIDA");

	}

	//Mostramos de nuevo el menu con la opcion seleccionada
	op=mostrar(op);

	}while(op!=SALIR);
}
