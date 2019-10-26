/*

Modulo 2
Funciones de prueba:

*/

#include<stdio.h>

void imprimir(int *arr,int n){
	int i;
	for(i=0;i<n;i++) 
		printf("%d:%d\n",i,arr[i]);
}

int buscar(int *arr,int n,int num){
	int i;
	int flag=0;
	int contador=0;
	
	for(i=0;i<n;i++) 
		if(arr[i]==num){
			flag=1;
			contador++;
		}
	//if(flag==1)printf("\nEl numero %d se repite %d veces\n",num,contador);
	//else printf("El numero %d no esta en el array",num);
		return contador;
}

// *arr es puntero
int capicua2(int *arr,int n){
	int i,j;
	int flag=1;

	for (i=0,j=n-1;i<j;i++,j--)
		if (arr[i]!=arr[j]){
			flag=0;
			break;		
		}
	return flag;
}

int main(){
	int arr[]={1,2,3,4,-4,3,2,1,6,5,78};
	int n=sizeof(arr)/sizeof(int);
	int num;
	int contador;

	//printf("%d\n",n);

	if(capicua2(arr,n))
		puts("\nEl array es capicuo");
	else
		puts("\nNo es capicuo");

	imprimir(arr,n);
	puts("");

	fflush(stdin);
	printf("Numero a buscar: \n");
	scanf("%d",&num);
	contador=buscar(arr,n,num);
	if(contador>0)printf("\nEl numero %d se repite %d veces\n",num,contador);
	else printf("El numero %d no esta en el array",num);

	
}
