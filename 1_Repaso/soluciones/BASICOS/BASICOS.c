// BASICOS.cpp : Defines the entry point for the console application.
//

#include <stdio.h>


void tablaASCII(){

	unsigned int i = 0, ini = 0, fin = 255, col = 9;

	printf("\n\n\t%s %d %s %d\n\n","Tabla de caracteres ASCII desde el",ini,"hasta", fin);

	for (i = ini ; i <= fin ; i++){

		switch(i){

			case 7:		// Bell.
			case 8:		// Backspace.
			case 10:	// Retorno de carro.
			case 11:	// No sale nada.
			case 12:	// Feed.
			case 13:	// CR.
			case 26:	// No sale ningún carácter.
			case 127:	// No sale ningún carácter.
				printf("%3s%3d   ","",i);
				break;

			default:
				printf("%3s%3d   %c","",i, i);
				break;

		}
	}

	if (!(i % col))
		putchar('\n');

	if ( !( (i-ini+1) % (20*col))){
		getchar();
		printf("\n\n\t%s %d %s %d\n\n","Tabla de caracteres ASCII desde el",ini,"hasta", fin);
	}
}



void primos100(){
int i, j, esPrimo;

	printf("LISTADO DE NUMEROS PRIMOS DEL 1 AL 100");
	for (i = 1; i <= 100 ; i++ ){
	
		for (esPrimo=1, j = 2; j < i ; j++ ){
			
			if (i % j == 0){
				esPrimo = 0;
				break;
			}				
		}
		
		if (esPrimo)
			printf("\n%d", i);	
	}
}


int main(int argc, char* argv[]){
	

	// Prueba de la función tablaASCII
	tablaASCII();
	printf("\n\n");


	// Prueba de la función primos100:
	primos100();
	printf("\n\n");


	return 0;
}

