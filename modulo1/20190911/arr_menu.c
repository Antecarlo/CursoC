#include<time.h>
#include<stdlib.h>
#include<stdio.h>

#define SALIR 5
#define N 10


int main(){
	
	//Variables genericas
	int a;
	int b;
	int j;

	//Generar array aleatorio
	int i;
/*
	int numeros[N];
	srand(time(NULL));

	for(i=0;i<N;i++){
		numeros[i]=rand()%100;
	}
*/
	int numeros[N]={1,2,3,4,5,5,4,3,2,1};

	//Mostramos el menu por primera vez
	int op;

	printf("\t\t\t\tMENU ARRAY\n\n");
	printf("\t\t\t\t1. IMPRIMIR\n");
	printf("\t\t\t\t2. ¿ES CAPICUO?\n");
	printf("\t\t\t\t3. MINIMO/MAXIMO\n");
	printf("\t\t\t\t4. BUSCAR NUMERO\n");
	printf("\t\t\t\t5. SALIR\n");
	printf("\t\t\t\tOPCION: %s\n"," ");

	do{

	puts("");
	fflush(stdin);
	scanf("%d",&op);

	switch(op){
		case 1:
			puts("\n\tIMPRIMIR\n");

			for(i=0;i<N;i++){
				printf("\n\t%d=%d",i,numeros[i]);
			}

			puts("");
			break;
		case 2:
			puts("\n\t¿ES CAPICUO?");

			int flag1=0;
			for(int a=0,b=N-1;a<b;a++,b--){
				if(numeros[a]!=numeros[b]){
					flag1=1;
					break;
				}
			}
			if(flag1==1)printf("\tEl array no es capicuo\n");
			else printf("\tEl array es capicuo\n");

			puts("");
			break;
		case 3:
			puts("\n\tMINIMO/MAXIMO");

			int min=numeros[0];
			int i_min=0;
			int max=numeros[0];
			int i_max=0;
	
			for(j=1;j<N;j++){
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
	

			puts("");
			break;
		case 4:
			puts("\n\tBUSCAR NUMERO");

			int flag=0;
			int contador=0;
			int numero;
			int posiciones[N]={1};	

			/*
			for(i=0;i<N;i++){
				printf("%d:%d\n",i,posiciones[i]);
			}
			*/

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

			if(contador!=0)printf("\nEl numero %d aparece %d veces ",numero,contador);
			else printf("\nEl numero %d no aparece\n",numero);

			printf("en las posiciones:\t");
			if(posiciones[0]==0) printf("%d\t",posiciones[0]);
			for(i=0;i<N;i++){
				if(posiciones[i]!=0){
					printf("%d\t",posiciones[i]);
				}
			}

			puts("");
			break;
		case SALIR:
			puts("\n\tSALIR");
			break;
		default:
			puts("\n\tOPCION NO VALIDA");

	}

	printf("\t\t\t\tMENU ARRAY\n\n");
	printf("\t\t\t\t1. IMPRIMIR\n");
	printf("\t\t\t\t2. ¿ES CAPICUO?\n");
	printf("\t\t\t\t3. MINIMO/MAXIMO\n");
	printf("\t\t\t\t4. BUSCAR NUMERO\n");
	printf("\t\t\t\t5. SALIR\n");
	printf("\t\t\t\tOPCION: %d\n",op);

	}while(op!=SALIR);
}

