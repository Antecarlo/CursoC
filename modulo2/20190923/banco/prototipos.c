
//FUNCIONES
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#include "prototipos.h"
#include "tipos.h"

//Definicion de funciones


TFechaHora ahora(){
	
	TFechaHora fh;

	time_t t;
  	struct tm *tm;
 	t=time(NULL);
  	tm=localtime(&t);

	fh.dd=tm->tm_mday;
	fh.mm=tm->tm_mon+1;
	fh.yy=tm->tm_year+1900;

	fh.HH=tm->tm_hour;
	fh.MM=tm->tm_min;
	fh.SS=tm->tm_sec;

	return fh;
}

void imprimirFechaHora(TFechaHora fh){
	printf("\n\t\t\t%02d/%02d/%02d %02d:%02d:%02d\n",fh.dd,fh.mm,fh.yy,fh.HH,fh.MM,fh.SS);
}

int buscarTarjeta(char * tarjeta, TCliente * clientes, int numClientes){
	int i;

	for(i=0;i<numClientes;i++){
		if(strcmp(tarjeta,clientes[i].numTarjeta)==0) return i;
	}
	return -1;
}

int buscarPin(int pin,int posCliente, TCliente * clientes){

	if(clientes[posCliente].pin==pin) return posCliente;
	return -1;
}

void saldo(TCliente * clientes, int posCliente){
	
	printf("\nSu saldo es: %.2f\n",clientes[posCliente].saldo);
	puts("Pulse una tecla para continuar...");
	getchar();
}

int pantalla1(TCliente * clientes, long numClientes){

	system("clear");

	printf("\n\n\n");
	printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
	printf("%%%%\t\t\tCAJERO AUTOMATICO:\t\t\t\t%%%%\n");
	printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n");

	char tarjeta[10];
	char aux[6];
	int pin,i,posCliente;
	int n=0;
	int checkPin=-1;

	puts("\nNUMERO DE TARJETA\n");
	fgets(tarjeta,20,stdin);
	tarjeta[4]='\0';
	fflush(stdin);

	//Chequear tarjeta
	posCliente=buscarTarjeta(tarjeta,clientes,numClientes);

	if(posCliente==-1){
		puts("Tarjeta no valida ...");
		puts("Pulse una tecla para continuar");
		getchar();
		return -1;
	}else{

		if(clientes[posCliente].bloqueada==1){
			puts("Tarjeta bloqueada, pongase en contacto con el administrador...");
			getchar();
			return -1;
		}
		puts("PIN: \n");
		pin=atoi(fgets(aux,6,stdin));

		//Chequear pin
		while(n<3 && checkPin==-1){
			checkPin=buscarPin(pin,posCliente,clientes);
			printf("Numero invalido, intento %d/3\n",n+1);
			puts("Pulse una tecla para continuar");
			getchar();
			if(checkPin!=-1) return checkPin;
			n++;
		}

		//Bloqueo de tarjeta
		puts("Se procede al bloqueo de la tarjeta bloqueada, pongase en contacto con el administrador...");
		clientes[posCliente].bloqueada=1;
		return -1;

	}
}

int pantalla2(char * nombre){
	int op;
	char s[10];
	char aux[6];

	printf("Usuario conectado: %s",nombre);
	puts("\nOperaciones:");
	puts("\n1.SALDO");
	puts("\n2.RETIRAR");
	puts("\n3.INGRESAR");
	puts("\n4.MOVIMIENTOS");
	puts("\n5.CAMBIAR PIN");
	puts("\n6.DESCONECTAR");
	puts("\nOPCION:");

	fflush(stdin);
	fgets(aux,6,stdin);
	aux[1]='\0';
	op=atoi(aux);
	return op;

}
