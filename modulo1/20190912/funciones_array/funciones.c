
#include<stdio.h>
#include "arr_menu_funciones.h"


///////////////////////////////////////////////////////////////////////////////////////////////
	//Funciones

// IMPRIMIR
void imprimir(int *arr,int n){
	int i;
	for(i=0;i<n;i++) 
		printf("%d:%d\n",i,arr[i]);
}

// CAPICUA
int capicua(int *arr,int n){
	int i,j;
	int flag=1;

	for (i=0,j=n-1;i<j;i++,j--)
		if (arr[i]!=arr[j]){
			flag=0;
			break;		
		}
	return flag;
}

// MINIMO/MAXIMO
void minmax(int *arr,int n){

	int j;
	int min=arr[0];
	int i_min=0;
	int max=arr[0];
	int i_max=0;

	for(j=1;j<n;j++){
		if(max<=arr[j]){
			max=arr[j];
			i_max=j;
		}
		if(min>=arr[j]){
			min=arr[j];
			i_min=j;
		}
	}
	printf("\nEl minimo es %d y esta en el indice %d",min,i_min);
	printf("\nEl maximo es %d y esta en el indice %d\n",max,i_max);
}

//BUSCAR
void buscar(int *arr,int n){
	int i;
	int flag=0;
	int contador=0;
	int num;

	printf("Numero a buscar: \n");
	fflush(stdin);
	scanf("%d",&num);
	
	for(i=0;i<n;i++){ 
		if(arr[i]==num){
			flag=1;
			contador++;
		}
	}

	if(contador!=0)printf("\nEl numero %d aparece %d veces ",num,contador);
	else printf("\nEl numero %d no aparece\n",num);

}

//MOSTRAR MENU
int mostrar(int op){
	printf("\t\t\t\tMENU ARRAY\n\n");
	printf("\t\t\t\t1. IMPRIMIR\n");
	printf("\t\t\t\t2. ¿ES CAPICUO?\n");
	printf("\t\t\t\t3. MINIMO/MAXIMO\n");
	printf("\t\t\t\t4. BUSCAR NUMERO\n");
	printf("\t\t\t\t5. SALIR\n");
	if(op==0)printf("\t\t\t\tOPCION: %s\n"," ");
	else printf("\t\t\t\tOPCION: %d\n",op);

	puts("Selecciona una opcion:\n");
	fflush(stdin);
	scanf("%d",&op);
	
	return op;
}




///////////////////////////////////////////////////////////////////////////////////////////////
