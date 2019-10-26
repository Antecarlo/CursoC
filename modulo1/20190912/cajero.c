#include<time.h>
#include<stdlib.h>
#include<stdio.h>


/*
Modulo 1

Cajero automatico

*/

/*
int maximo(int *arr){

}


int reordenar(int *arr){
	int arr2=*arr;
	
	
}
*/


int main(){
	int num;
	int billetes[3]={50,20,10};
	int n=sizeof(billetes)/sizeof(int);
	int i;
	
	printf("\n\n\n");
	printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
	printf("%%%%\t\t\tCAJERO AUTOMATICO:\t\t\t\t%%%%\n");
	printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n");

	do{
 	printf("\t\tTeclear importe multiplo de 10:\n");
	fflush(stdin);
	scanf("%d",&num);
	if(num%10!=0)printf("Entrada no valida, debe ser multiplo de 10\n");
	}while(num%10!=0);

	for(i=0;i<n && num>0;i++){
		if(num>=billetes[i]){
			printf("%d billete(s) de %d\n",num/billetes[i],billetes[i]);
			num%=billetes[i]; //importe=importe%billetes[i];
		}
	}	
}
