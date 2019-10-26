/*
	Modulo 2
	Generacion de numeros aleatorios y buscar un numero y contar sus repeticiones en un array
*/

//Ficheros de encabezado
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 100


int main(){

	// Generar array aleatorio
	int i;
	int numeros[N];
	srand(time(NULL));

	for(i=0;i<N;i++){
		numeros[i]=rand()%100;
		printf("\n%d=%d",i,numeros[i]);
	}

	puts("");

	int j;
	int flag=0;
	int contador=0;
	int numero;
	int posiciones[N]={0};

	printf("Numero a buscar: \n");
	fflush(stdin);
	scanf("%d",&numero);
	
	for(j=0;j<N;j++){
		if(numeros[j]==numero){
			posiciones[contador]=j;
			contador++;
			flag=1;
		}
	}

	if(contador!=0)printf("\nEl numero %d aparece %d veces\n",numero,contador);
	else printf("\nEl numero %d no aparece\n",numero);
	
	for(i=0;i<N;i++){
		if(posiciones[i]!=0){
			printf("El numero %d aparece en las posiciones:\t",numero);
			printf("%d\t",posiciones[i]);
		}
	}
	puts("");
	
}
