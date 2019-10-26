/*
Modulo 1

Parametros de main

Implementar un comando que reciba 3 parametros: programa numero1 operacion numero2

Si no hay suficientes parametros mostrar la ayuda: Esto tambien lo muestra con "programa -h"
programa <numero1> <operacion:+-> <numero2>

Tiene que imprimir el resultado de la operacion.

Ejemplos validos: programa 345 + 34
		  programa 56 - 9
		  programa -h

*/

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

#define MAS 1
#define MENOS 2
#define ERROR 3

#define NUM_NO_VALIDO 1
#define OP_NO_VALIDO 2
#define FALTAN_PARAMS 3
#define OPCION_NO_VAL 4

int operar(int numero, int op, int numero2){
	switch(op){
		case MAS: return numero+numero2;
		case MENOS: return numero-numero2;
	}
	return 0;
}


void opciones(){
	printf("\n\nOpciones del programa:\n\n\t-Introducir 'nombre programa' <numero1> <operacion:+-> <numero2>\n\t-Introducir 'nombre programa' -h\n\n");
}


void ayuda(char *param){

	if(strcmp(param,"-h")==0)	
		printf("\n\nAyuda:\n\t\tLa instruccion debe ser del tipo <numero1> <operacion:+-> <numero2>\n\n\n");
	else opciones();
}


int checknum(char *num){
	const char *digitos="0132456789";
	int i;

	for (i=0;i<strlen(num);i++)
		if (strchr(digitos,num[i])==NULL) return 0;
	return 1;
}

void ayudaCod(int codigo){

	switch(codigo){
		case NUM_NO_VALIDO:
			puts("\n\nHay un numero no valido\n");
			break;
		case OP_NO_VALIDO:
			puts("\n\nOperador no valido\n");
			break;
		case FALTAN_PARAMS:
			puts("\n\nFaltan parametros\n");
			break;
		case OPCION_NO_VAL:
			puts("\n\nOpcion no valida\n");
			break;
	}

}



int extraerOp(char *s){
	char op=s[0];

	if(strlen(s)>1)
		return ERROR;
	else if(op=='+')
		return MAS;
	else if(op=='-')
		return MENOS;
	else
		return ERROR;
}


int main(int argc,char *argv[]){
	int op;
	int num;
	int resultado;

	switch(argc){
	
	case 2:
		ayuda(argv[1]);
	break;
		
	case 4:
		op = extraerOp(argv[2]);
		if(checknum(argv[1])*checknum(argv[3])==1 && op!=ERROR){	
	
			resultado = operar(atoi(argv[1]),op,atoi(argv[3]));

			if(op==1){
				//printf("\n\nEl resultado es: %d\n\n",atoi(argv[1])+atoi(argv[3]));
				printf("\n\nEl resultado es: %d\n\n",resultado);
			}else{
				//printf("\n\nEl resultado es: %d\n\n",atoi(argv[1])-atoi(argv[3]));
				printf("\n\nEl resultado es: %d\n\n",resultado);
			}
		}else if(checknum(argv[1])!=1 || checknum(argv[3])!=1){
			ayudaCod(NUM_NO_VALIDO);
		}else if(op==ERROR){
			ayudaCod(OP_NO_VALIDO);
		}else{
			ayudaCod(OPCION_NO_VAL);
		}
		
		break;
	default:
		ayudaCod(FALTAN_PARAMS);
		opciones();
		break;
	}
}
