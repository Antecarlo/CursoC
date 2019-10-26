
//FUNCIONES
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#include "prototipos.h"
#include "tipos.h"
#include "listas.h"

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

void imprimirFechaHora2(TFechaHora fh){
	printf("\n%02d/%02d/%02d %02d:%02d:%02d",fh.dd,fh.mm,fh.yy,fh.HH,fh.MM,fh.SS);
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

void pantallaInicio(){

	system("clear");

	printf("\n\n\n");
	printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
	printf("%%%%\t\t\tCAJERO AUTOMATICO:\t\t\t\t%%%%\n");
	printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n");

}

int pantalla1(TCliente * clientes, long numClientes){

	pantallaInicio();

	char tarjeta[10];
	char aux[6];
	int pin,i,posCliente;
	int n=1;
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
		fflush(stdin);
		pin=atoi(fgets(aux,6,stdin));
		checkPin=buscarPin(pin,posCliente,clientes);
		if(checkPin!=-1) return checkPin;

		//Chequear pin
		while(n<3 && checkPin==-1){
			printf("Numero invalido, siguiente intento %d/3\n",n+1);
			puts("Pulse una tecla para continuar");
			getchar();
			pantallaInicio();
			puts("PIN: \n");
			pin=atoi(fgets(aux,6,stdin));
			checkPin=buscarPin(pin,posCliente,clientes);
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

	pantallaInicio();
	printf("Usuario conectado: %s",nombre);
	puts("\nOperaciones:");
	puts("1.SALDO");
	puts("2.RETIRAR");
	puts("3.INGRESAR");
	puts("4.MOVIMIENTOS");
	puts("5.CAMBIAR PIN");
	puts("6.DESCONECTAR");
	puts("\nOPCION:");

	fflush(stdin);
	fgets(aux,6,stdin);
	aux[1]='\0';
	op=atoi(aux);
	return op;

}

void saldo(TCliente * clientes, int posCliente){

	printf("\n\nSALDO:\n");
	printf("\nSu saldo es: %.2f\n",clientes[posCliente].saldo);
	puts("Pulse una tecla para continuar...");
	getchar();
}

void cajero(int * billetes, int n, int importe){
	int i;
	for(i=0;i<n && importe>0;i++){
		if(importe>=billetes[i]){
			printf("%d billete(s) de %d\n",importe/billetes[i],billetes[i]);
		}
	}
	puts("Pulse una tecla para continuar");
	getchar();	
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

//RETIRAR

void retirar(TCliente * clientes,int posCliente){
	//Pedir multiplos de 10
	//Atualizar saldo y comprobar si hay saldo suficiente
	//Generar un movimiento con la fecha/hora actual

	int importe;
	int billetes[3]={50,20,10};
	int n=sizeof(billetes)/sizeof(int);
	int i;
	char aux[20];
	char descrip[200];

	TMovimiento movimientoRetirar;

	do{
 	printf("\t\tTeclear importe multiplo de 10:\n");
	importe=atoi(fgets(aux,20,stdin));
	if(importe%10!=0)printf("Entrada no valida, debe ser multiplo de 10\n");
	}while(importe%10!=0);


	//Comprobar si hay saldo suficiente
	if(importe<=clientes[posCliente].saldo){
		//Actualizar saldo
		clientes[posCliente].saldo-=importe;

		//Generar movimiento
		movimientoRetirar.fechaHora=ahora();
		sprintf(descrip,"Retirada de efectivo: -%d",importe);
		strcpy(movimientoRetirar.descripcion,descrip);
		movimientoRetirar.importe=(float)-importe;

		//Insertar el movimiento en la lista de movimientos
		clientes[posCliente].movimientos=insertarMovimiento(clientes[posCliente].movimientos,movimientoRetirar);
		
		//Emitir billetes
		cajero(billetes,n,importe);
	}else{
		puts("\nNo hay saldo disponible...");
		printf("\nSaldo actual %.2f\n",clientes[posCliente].saldo);
		puts("Pulse una tecla para continuar");
		getchar();
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

// MOVIMIENTOS

void movimientos(TCliente * clientes,int posCliente){
	//Muestra la lista de movimientos (el primero que sale es el ultimo)
	printf("\n\nLISTADO DE MOVIMIENTOS:\n");
	if(clientes[posCliente].movimientos!=NULL){
		printf("%-20s\t%-20s\t%15s","FECHA-HORA","DESCRIPCION","IMPORTE");
		imprimirMovimientos(clientes[posCliente].movimientos);
	}else printf("No hay movimientos\n");
	printf("\n\nPulse para continuar");
	getchar();
}

//////////////////////////////////////////////////////////////////////////////////////////////////////


//INGRESAR


void ingresar(TCliente * clientes,int posCliente){
	
	int diez,veinte,cincuenta,total;
	char auxd[20],auxv[20],auxc[20];
	TMovimiento movimientoIngresar;
	char descrip[200];

	//Pedir billetes de 10, 20 y 50
	//Se calcula el total y se actualiza el saldo
	//Generar un movimiento con la fecha/hora actual
	printf("\n\nINGRESAR:\n");

	puts("Introduzca el numero de billetes de 10, 20 y 50 euros:\n");
	diez=atoi(fgets(auxd,20,stdin));
	veinte=atoi(fgets(auxv,20,stdin));
	cincuenta=atoi(fgets(auxc,20,stdin));
	
	total=diez*10+veinte*20+cincuenta*50;
	
	//Actualizar saldo
	clientes[posCliente].saldo=clientes[posCliente].saldo+total;


	//Generar movimiento
	movimientoIngresar.fechaHora=ahora();
	sprintf(descrip,"Ingreso de efectivo: %d",total);
	strcpy(movimientoIngresar.descripcion,descrip);
	movimientoIngresar.importe=(float)total;

	clientes[posCliente].movimientos=insertarMovimiento(clientes[posCliente].movimientos,movimientoIngresar);
	printf("\n\nEl importe se ha ingresado satisfactoriamente");

}

//////////////////////////////////////////////////////////////////////////////////////////////////////

//CAMBIAR PIN

void cambiarPin(TCliente * clientes, int posCliente){

	int pinEsc,nuevoPin1,nuevoPin2;
	char aux[20],aux2[20],aux3[20];

	//Pedir pin actual
	// Pedir 2 veces el nuevo pin
	//Actualizar los datos del cliente
	printf("\n\nCAMBIAR PIN:\n");

	//Pedir el pin actual
	printf("\nPor favor, introduzca su pin actual");
	pinEsc=atoi(fgets(aux,20,stdin));

	if(clientes[posCliente].pin==pinEsc){
		printf("\nPin correcto, introduzca dos veces el nuevo pin\n\nPIN:\n\n");
		nuevoPin1=atoi(fgets(aux2,20,stdin));
		printf("\nRepitalo por favor\n");
		nuevoPin2=atoi(fgets(aux3,20,stdin));
		
		if(nuevoPin1==nuevoPin2){
			clientes[posCliente].pin=nuevoPin1;
			printf("\nEl pin se ha cambiado correctamente");
		}
		
	}else{
		printf("El pin no es correcto");

	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

//BORRAR
void borrar(TCliente * clientes, int numClientes){
	printf("\n\nBORRAR:\n");
	borrarMovimientos(clientes,numClientes);
	printf("\nTodos los movimientos han sido borrados correctamente\n");

}







