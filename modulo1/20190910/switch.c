/*
Modulo 2

Switch
Ejemplo, imprime el nombre del dia de la semana a partir del numero del 1 al 7
*/

//Ficheros de encabezado
#include<stdio.h>

int main(){

	int dia;
	do{
		puts("Dame un numero perteneciente a [1,7]");
		fflush(stdin);
		scanf("%d",&dia);
		
	}while(dia>7 || dia<1);

	switch(dia){
		case 1: puts("Lunes\n");
			break;
		case 2: puts("Martes\n");
			break;
		case 3: puts("Miercoles\n");
			break;
		case 4: puts("Jueves\n");
			break;
		case 5: puts("Viernes\n");
			break;
		case 6: 
		case 7:
			puts("Finde\n");
			break;
		default:
			puts("Error\n");

	}
	

}
