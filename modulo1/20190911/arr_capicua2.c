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
	int capicuo[]={1,2,3,2,1};
	srand(time(NULL));

	for(i;i<N;i++){
		numeros[i]=rand()%100;
		printf("\n%d=%d",i,numeros[i]);
	}

	puts("");

	int aux=0;
	for(int a=0,b=N-1;a<b;a++,b--){
		aux=numeros[a]-numeros[b];
		if(aux!=0){
			printf("El array numero no es capicuo\n");
			break;
		}
		else printf("El array numero es capicuo\n");
	}

	int aux2=0;
	int capsize=sizeof(capicuo)/sizeof(int);
	for(int c=0,v=capsize-1;c<v;c++,v--){
		aux=capicuo[c]-capicuo[v];
		if(aux2!=0){
			printf("El array cap no es capicuo\n");
			break;
		}
		else {
		printf("El array cap es capicuo\n");
		break;
		}
		
	}

}
