/*
	Modulo 2
	Generacion de numeros aleatorios y buscar el min y max dentro de un array
*/

//Ficheros de encabezado
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10


int main(){

	// Generar array aleatorio
	int i=0;
	int numeros[N];
	srand(time(NULL));

	for(i;i<N;i++){
		numeros[i]=rand()%100;
		printf("\n%d=%d",i,numeros[i]);
	}

	puts("");

	// Calcular el min y max del array
	int min=numeros[0];
	int i_min=0;
	int max=numeros[0];
	int i_max=0;
	
	for(int j=1;j<N;j++){
		if(max<=numeros[j]){
			max=numeros[j];
			i_max=j;
		}
		if(min>=numeros[j]){
			min=numeros[j];
			i_min=j;
		}
	}

	printf("\nEl minimo es %d y esta en el indice %d",min,i_min);
	printf("\nEl maximo es %d y esta en el indice %d\n",max,i_max);
	
}
