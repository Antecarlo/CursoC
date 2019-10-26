// ARRAYS.cpp : Defines the entry point for the console application.
//

#include <ctype.h>
#include <stdio.h>

#define MAX 15

int ordenacionASC(int vector[], int longitud){

	int i, orden;
	
		for (i = 1, orden = 1; i < longitud ; i++){
			
			if (vector[i - 1] > vector[i]){
				orden = 0;
				break;
			}
		
		}

	return orden;
}



int esCapicua(int vector[], int longitud){

	int n, i, j, valor;

	if (longitud % 2 == 0){
			n = longitud / 2;
		
		} else {
			n = (longitud / 2) + 1;
		
		}
	
		for (valor = 1, i =	0, j = longitud - 1; i < n ; i++, j-- ){
		
			if (vector[i] != vector[j]){
				valor = 0;
				break;
			}
		}

	return valor;
}


void getsn(char *s, int longitud){

	int i = 0;

	do {
		if ( ( s[i] = getchar()) != 13) i++;

	} while ((i < (longitud - 1)) && (s[i] != 13));
	s[i] = '\0';
}

int main(int argc, char* argv[]){

	
	// Prueba de la función ordenacionASC:
	int vector1[] = {1, 2, 5, 7, 9, 10};
	int vector2[] = {0, 1, 2, -1, 9, 11};

	if (ordenacionASC(vector1, 6)) 
		printf("\nvector1 ordenado ASC\n");

	else
		printf("\nvector1 NO ordenado ASC\n");


	if (ordenacionASC(vector2, 6)) 
		printf("\nvector2 ordenado ASC\n");

	else
		printf("\nvector2 NO ordenado ASC\n");



	// Prueba de la función esCapicua:
	int vector3[] = {1, 2, 5, 2, 1};
	int vector4[] = {0, 1, 2, -1, 1, 0};

	if (esCapicua(vector3, 5)) 
		printf("\nEl vector3 es Capicua\n");

	else
		printf("\nEl vector3 NO es Capicua\n");

	
	if (esCapicua(vector4, 6)) 
		printf("\nEl vector4 es Capicua\n");

	else
		printf("\nEl vector4 NO es Capicua\n");


	// Prueba de la función getsn:
	char cadena[MAX];

	do {
		printf("\nIntroduzca una frase : ");
		getsn(cadena, MAX);
		printf("\n\n la cadena leida es: ");
		puts(cadena);
		printf("\n\n Seguimos (S/N): ");
	} while (toupper(getchar()) != 'N');

	printf("\n\n");


	return 0;
}

