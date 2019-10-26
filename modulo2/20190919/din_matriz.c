/*

Modulo 2
Generar matriz dinamica de n x m. Las filas y las columnas se piden al usuario.

19/09/2019
10:09

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	float ** matriz = NULL; //Inicializamos el doble puntero
	int f,c;
	int i,j;
	float k=1.0;

	puts("\nFilas:");
	fflush(stdin);
	scanf("%d",&f);

	puts("\nColumnas:");
	fflush(stdin);
	scanf("%d",&c);

	// Crear la matriz
	matriz=(float **)malloc(sizeof(float *)*f);
	for(i=0;i<f;i++){
		matriz[i]=(float *)malloc(sizeof(float)*c);
		for(j=0;j<c;j++,k++)
			matriz[i][j]=k;
	}	

	//Imprimir
	for(i=0;i<f;i++){
		for(j=0;j<c;j++)
			printf("%4.1f",matriz[i][j]);
		puts("");
	}	

	//Liberar
	for(i=0;i<f;i++){
		free(matriz[i]);
		matriz[i]=NULL;
	}

	free(matriz);
	matriz=NULL;

}
