/*
Modulo 2

*/

//Ficheros de encabezado
#include<stdio.h>

# define N 7
# define M 4


int main(){
	int l=N+M;
	int arr1[N]={2,1};
	int arr2[M]={8};
	int numeros[l];

	for (int i=0;i<N;i++)
		numeros[i]=arr1[i];
	for (int i=0;i<M;i++)
		numeros[i+N]=arr2[i];
	for (int i=0;i<l;i++)
		printf("\n%d=%d",i,numeros[i]);	
	printf("\n");
	

}
