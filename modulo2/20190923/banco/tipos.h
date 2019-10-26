#ifndef TIPOS_H

	#define TIPOS_H


	typedef struct{
		int dd,mm,yy;
		int HH,MM,SS;
	}TFechaHora;

	typedef struct{
		TFechaHora fechaHora;
		char descripcion[200];
		float importe;
	}TMovimiento;

	typedef struct nodo{
		TMovimiento mov;
		struct nodo * sig;
	} TNodoMov;

	typedef struct{
		char nombre[50];
		char numTarjeta[20];
		int pin;
		float saldo;
		int bloqueada;
		TNodoMov * movimientos;
	}TCliente;

#endif
