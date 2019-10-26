
#include <stdio.h>
#include <stdlib.h>

#define N 3


void sumaDiagonal();
void matrizEspejo();

int main(){

	sumaDiagonal();
	matrizEspejo();
}


void sumaDiagonal(){
	int matriz[N][N] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int i, suma = 0;

	for (i = 0 ; i < N ; i++ )
		suma += matriz[i][i];

	printf("La suma de la diagonal principal es: %d\n", suma);
}


void matrizEspejo(){
	int matriz[N][N], i, j, resul;

	
	// Rellenar la matriz:
	
	for (i = 0 ; i < N ; i++)
		for (j = 0 ; j < N ; j++){
			srand(rand());
			matriz[i][j] = rand() % 2;
		}



	// Comprobar si es una matriz espejo:
	printf("\nCONTENIDO DE LA TABLA\n");

	for (i = 0 ; i < N ; i++ ){
		for (j = 0 ; j < N ; j++)
			printf(" %3d ", matriz[i][j]);
		printf("\n");
	}



	resul = 1;
	for (i = 1 ; i < N && resul; i++)
		for (j = 0 ; j < N - 1 && resul; j++)
			resul = resul && (matriz[i][j] != matriz[j][i]);

	// Imprimir el resultado.
	printf("La matriz %s\n", (resul) ? "ES ESPEJO" : "NO ES ESPEJO");
}
