/*
 ============================================================================
 Name        : tablas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void  escribe(int a[][12], int x, int y);   // prototipo
void  escribo(int (*a)[12], int x, int y);  // prototipo
void pruebaTablaInt(int, int); 
void imprimirTabla(int **, int, int);
int **liberarTabla(int **, int, int);

void main () {         // =============
  int dias[2][12] = {
     { 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12},
     {13,14,15,16,17,18,19,20,21,22,23,24}
  };
  escribe(dias, 1, 3);
  escribe(dias, 0, 7);
  escribo(dias, 1, 3);
  escribo(dias, 0, 7);
  
  printf("\n------------------");
  pruebaTablaInt(4,8);
}

void pruebaTablaInt(int f, int c){
	int **m = NULL;
	int i, j;
	
	srand(time(NULL));
	m = (int **) malloc(sizeof(int *) * f);
	for (i = 0 ; i < f ; i++){
		m[i] = (int *) malloc(sizeof(int) * c);
		
		for (j = 0 ; j < c ; j++)
			m[i][j] = rand() % 100;
	}
	
	imprimirTabla(m, f, c);	
	m = liberarTabla(m, f, c);
}

int **liberarTabla(int **m, int f, int c){
	int i, j;
	
	for (i = 0 ; i < f ; i++){
		free(m[i]);
		m[i] = NULL;
	}
	
	free(m);
	m = NULL;
	return m;						
}

void imprimirTabla(int **m, int f, int c){
	int i, j;
	
	printf("\nMatriz generada aleatoriamente:\n");
	for (i = 0; i < f ; i++){
		for (j = 0 ; j < c ; j++)
			printf("%02d  ", m[i][j]);
		printf("\n");
	}
}

void escribe(int a[][12], int f, int c) {    // definición
   printf("Valor [%2i,%2i] = %3i\n", f, c, a[f][c]);
}

void escribo(int (*a)[12], int f, int c) {   // definición
   printf("Valor [%2i,%2i] = %3i\n", f, c, a[f][c]);
}


