
/*
	Modulo 2
	Deteccion de numeros capicuos en array
*/

//Ficheros de encabezado
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10


int main(){

	int i=0;
	int numeros[N];
	int capicuo[6]={1,2,3,3,2,1};
	srand(time(NULL));

	for(i;i<N;i++){
		numeros[i]=rand()%100;
		printf("\n%d=%d",i,numeros[i]);
	}

	puts("");

	int suma=0;
	int aux;

	for(int a=0,b=N-1;a<N/2,b>=N/2;a++,b--){
		aux=numeros[a]-numeros[b];
		suma=suma+aux;
		//printf("\n%d",suma);
	}
	if(suma==0)printf("El array numero es capicuo\n");
	else printf("El array numero no es capicuo\n");

	int capsize = sizeof(capicuo)/sizeof(int);
	int suma2=0;	

	for(int c=0,v=capsize-1;c<capsize/2,v>=capsize/2;c++,v--){
		aux=capicuo[c]-capicuo[v];
		suma2=suma2+aux;
	}
	if(suma2==0)printf("El array cap es capicuo\n");
	else printf("El array cap no es capicuo\n");
}
