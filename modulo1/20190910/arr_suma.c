/*
Modulo 2

/*
*/
//Ficheros de encabezado
#include<stdio.h>
#include<stdlib.h>

# define N 7
# define M 4


int main(){

	int arr1[N];
	int arr2[M];

	for (int a=0;a<N;a++)
		arr1[a]=rand()%5;

	for (int b=0;b<M;b++)
		arr2[b]=rand()%5;

	
	//int arr1[N]={1,1,1,1,1,1,1};
	//int arr2[M]={1,1,1,1};
	int i,j;

	int arr3[(N>M)?N:M];
	int n=sizeof(arr3)/sizeof(int);

	for (i=0;i<n;i++)
		if(i>=N) arr3[i]=arr2[i];
		else if(i>=M) arr3[i]=arr1[i];
		else arr3[i]=arr1[i]+arr2[i];
	printf("Array suma:");

	for (int i=0;i<n;i++)
		printf("\n%d=%d",i,arr3[i]);	
	printf("\n\nArray1:");

	for (int i=0;i<N;i++)
		printf("\n%d=%d",i,arr1[i]);	
	printf("\n\nArray2:");

	for (int i=0;i<M;i++)
		printf("\n%d=%d",i,arr2[i]);	
	printf("\n");

}
