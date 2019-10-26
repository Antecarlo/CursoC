/*

Modulo 2
Generar matriz dinamica de n x m. Las filas y las columnas se piden al usuario.

19/09/2019
10:09

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Devolviendo el doble puntero
float ** crearMatriz(int f,int c){

	int i,j;
	float k=1.0;
	float ** matriz;
	
	matriz=(float **)malloc(sizeof(float *)*f);
	for(i=0;i<f;i++){
		matriz[i]=(float *)malloc(sizeof(float)*c);
		for(j=0;j<c;j++,k++)
			matriz[i][j]=k;
	}	

	return matriz;
}

// Con triple puntero
void crearMatriz2 (int f,int c,float *** matriz){

	int i,j;
	float k=1.0;
	
	* matriz=(float **)malloc(sizeof(float *)*f);
	for(i=0;i<f;i++){
		(* matriz)[i]=(float *)malloc(sizeof(float)*c);
		for(j=0;j<c;j++,k++)
			(* matriz)[i][j]=k;
	}	
}

// Copiando la variable en main con triple puntero
void crearMatriz3 (int f,int c,float *** matriz){

	int i,j;
	float k=1.0;
	float ** aux;
	
	aux=(float **)malloc(sizeof(float *)*f);
	for(i=0;i<f;i++){
		aux[i]=(float *)malloc(sizeof(float)*c);
		for(j=0;j<c;j++,k++)
			aux[i][j]=k;
	}	
	* matriz=aux;
}

void imprimir(int f, int c,float ** matriz){
	
	int i,j;

	for(i=0;i<f;i++){
		for(j=0;j<c;j++)
			printf("%4.1f",matriz[i][j]);
		puts("");
	}	
}

/* MAAL
void liberar(int f,float ** matriz){
	int i;

	for(i=0;i<f;i++){
		free(matriz[i]);
		matriz[i]=NULL;
	}

	free(matriz);
	matriz=NULL;
}
*/

void liberar(int f,float *** matriz){
	int i;

	for(i=0;i<f;i++){
		free((*matriz)[i]);
		(*matriz)[i]=NULL;
	}

	free(matriz);
	*matriz=NULL;
}

float ** liberar2(int f,float ** matriz){
	int i;

	for(i=0;i<f;i++){
		free(matriz[i]);
		matriz[i]=NULL;
	}

	free(matriz);
	return NULL;
}


int main(){

	float ** matriz = NULL; //Inicializamos el doble puntero
	int f,c;

	puts("\nFilas:");
	fflush(stdin);
	scanf("%d",&f);

	puts("\nColumnas:");
	fflush(stdin);
	scanf("%d",&c);

	// Crear la matriz
	//matriz=crearMatriz(f,c);
	crearMatriz3(f,c,&matriz);
	//crearMatriz2(f,c,&matriz);

	//Imprimir
	imprimir(f,c,matriz);

	//Liberar
	//liberar(f,&matriz);
	matriz=liberar2(f,matriz);

	printf("Direccion matriz: %p",matriz);

}
