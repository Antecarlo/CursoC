
/*
Diseñar un cajero automatico para los clientes de un banco

Los clientes tendran una cuenta en el banco donde mantienen sus datos personales, saldo y movimientos

El cliente una vez identificado en el cajero podra realizar las siguientes operaciones:

- Consultar saldo
- Retirar dinero, actualizando su saldo
- Ingresar dinero, actualizando su saldo
- Consultar movimientos
- Cambiar la password de acceso al cajero

En el movimiento registrar fecha, hora, operacion y cantidad, positiva si es ingreso y negativa si es un reintegro.

*/


#include<time.h>
#include<stdlib.h>
#include<stdio.h>

#include "prototipos.h"
#include "tipos.h"

#define MAXPER 5
#define SALIR 4



int main(){

	TCliente clientes[4]=
	{
		{"Carlos Antequera","1111",1111,1000.0,0,NULL},
		{"Beatriz Galvez","2222",2222,1500.0,0,NULL},
		{"Laura Cabot","3333",3333,5000.0,0,NULL},
		{"Fernando Espinosa","4444",4444,5000.0,0,NULL},
	};

	long numClientes=sizeof(clientes)/sizeof(TCliente);
	int posCliente;
	int op;


	while(1){
		posCliente=pantalla1(clientes,numClientes);

		if(posCliente!=-1){
			do{
				op=pantalla2(clientes[posCliente].nombre);
				switch(op){
					case 1:
						//saldo()
						break;
					case 2:
						//retirar()
						break;
					case 3:
						//ingresar()
						break;
					case 4:
						//movimientos()
						break;
					case 5:
						//cambiarPin()
						break;
					case 6:
						//desconectar()
						break;
				}
			}while(op!=6);
		}
	}
}
