
//FUNCIONES
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "prototipos.h"
#include "tipos.h"

void imprimirPersona(TPersona p){
	printf("\nUser: %s dni: %s edad: %d\n",p.nombre,p.dni,p.edad);
}

void intercambiar(TPersona *p1,TPersona *p2){
	TPersona aux=*p2;
	*p2=*p1;
	*p1=aux;	
}

void ordenar(TPersona *personas, int n,int(*ptr)(int,int)){
	int i,j;

	for (i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(ptr(personas[i].edad,personas[j].edad))
				intercambiar(&personas[i],&personas[j]);
}

int asc(int a, int b){
	if(a<b) return 1;
	else return 0;
}

int des(int a, int b){
	if(a>b) return 1;
	else return 0;
}

void limpiar(char *s){
	char *ptr=strchr(s,'\n');
	if(ptr!=NULL)
		*ptr='\0';
}

void cumpleanyos(TPersona *p){
	//(*p).edad++
	p->edad++;
}

TPersona registrar(){
	TPersona p;
	char ed[12];

	printf("Introduce el nombre:");
	fflush(stdin);
	fgets(p.nombre,50,stdin);
	limpiar(p.nombre);

	printf("Introduce el dni:");
	fflush(stdin);
	fgets(p.dni,12,stdin);
	limpiar(p.dni);

	printf("Introduce la edad:");
	fflush(stdin);
	fgets(ed,12,stdin);
	p.edad=atoi(ed);
	fflush(stdin);

	return p;
}

