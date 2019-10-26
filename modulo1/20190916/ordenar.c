/*
Reordenacion de un array
*/

#include <stdio.h>

void intercambiar(int *n1,int *n2){
	
	int aux=*n2;
	*n2=*n1;
	*n1=aux;	
}


void ordenarMm(int *numeros, int n){
	int i,j;

	for (i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(numeros[i]>numeros[j])
				intercambiar(&numeros[i],&numeros[j]);
}

void ordenarmM(int *numeros, int n){
	int i,j;

	for (i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(numeros[i]<numeros[j])
				intercambiar(&numeros[i],&numeros[j]);
}

void imprimir(int *numeros, int n){
	int i;

	for (i=0;i<n;i++)
		printf("%d ",numeros[i]);
	puts("");
}

int main(){

	int arr[]={2,78,4,3,1,7,9,564,2,3,5434};
	int n=sizeof(arr)/sizeof(int);
	ordenarMm(arr,n);
	imprimir(arr,n);

	ordenarmM(arr,n);
	imprimir(arr,n);

}
