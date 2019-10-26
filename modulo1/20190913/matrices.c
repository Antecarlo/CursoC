/*
Modulo 1

Definicion de matrices (arrays de 2 dimensiones)

*/

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void imprimir(int n, int m, int tabla[n][m]){
	int i,j;

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%2d  ",tabla[i][j]);
		}
		puts("");
	}
}

void imprimirTras(int n, int m, int tabla[n][m]){
	int i,j;

	for(j=0;j<m;j++){
		for(i=0;i<n;i++){
			printf("%2d  ",tabla[i][j]);
		}
		puts("");
	}
}


int main(){

	int m[2][4]={{1,2,3,4},{4,5,6,7}};
	int m2[][5]={{1,1,1,1,1},{2,2,2,2,2}};
	//int m3[][]={{1,1,1,1,1},{2,2,2,2,2}}; No se pueden dejar las dos dimensiones vacias

	imprimir(2,4,m);
	puts("");

	imprimirTras(2,4,m);

}
