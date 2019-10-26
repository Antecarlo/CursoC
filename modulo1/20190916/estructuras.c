/*
Estructuras de datos: definicion, acceso, paso de parametros...
*/

#include<stdio.h>
#include<string.h>


// Tipo definido por el programador
struct persona{
	char nombre[50];
	char dni[12];
	int edad;	
}persona1; //OJO ES UNA VARIABLE GLOBAL

typedef struct{
	int d,m,y;
} TFecha;

typedef struct{
	char nombre[50];
	char dni[12];
	int edad;
	TFecha fecha;
} TPersona; // OJO TPersona es el nombre de un tipo: es un alias.


void imprimirPersona(TPersona p){
	printf("\nUser: %s dni: %s edad: %d\n",p.nombre,p.dni,p.edad);
}

void cumpleanyos(TPersona *p){
	//(*p).edad++
	p->edad++;
}

void limpiar(char *s){

	char *ptr=strchr(s,'\n');
	if(ptr!=NULL)
		*ptr='\0';
}

void registrar(TPersona *p){

	printf("Introduce el nombre:");
	fflush(stdin);
	//scanf("%s",(*p).nombre);
	//scanf("%s",p->nombre);
	fgets(p->nombre,50,stdin);

	printf("Introduce el dni:");
	fflush(stdin);
	//scanf("%s",p->dni);
	//scanf("%s",(*p).dni);
	fgets(p->dni,12,stdin);

	printf("Introduce la edad:");
	fflush(stdin);
	//scanf("%d",&(*p).edad);
	scanf("%d",&(p->edad));
	fflush(stdin);
}

TPersona registrar2(){
	TPersona p;

	printf("Introduce el nombre:");
	fflush(stdin);
	//scanf("%s",(*p).nombre);
	//scanf("%s",p->nombre);
	fgets(p.nombre,50,stdin);
	limpiar(p.nombre);

	printf("Introduce el dni:");
	fflush(stdin);
	//scanf("%s",p->dni);
	//scanf("%s",(*p).dni);
	fgets(p.dni,12,stdin);
	limpiar(p.dni);

	printf("Introduce la edad:");
	fflush(stdin);
	//scanf("%d",&(*p).edad);
	scanf("%d",&(p.edad));
	fflush(stdin);

	return p;
}


int main(){

	//Definicion e inicializacion de una var. de tipo struct persona
	// struct persona usuario;	
	struct persona usuario={"Jose","8566699H",45};

	printf("\nUser: %s dni: %s edad: %d\n",usuario.nombre,usuario.dni,usuario.edad);
	printf("\nbytes: %ld\n", sizeof(struct persona));

	TPersona p={"Ana","50999777G",56};
	printf("\nbytes: %ld\n",sizeof(TPersona));

	//Modificar el DNI de la variable p a 51.000.000A
	strcpy(p.dni,"51.000.000A");
	p.edad+=10;
	imprimirPersona(p);
	cumpleanyos(&p);
	imprimirPersona(p);

	/*
	TPersona p2;
	registrar(&p2);
	imprimirPersona(p2);
	*/

	TPersona aux= registrar2();
	imprimirPersona(aux);
	
}

