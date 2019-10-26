
#ifndef ESTRUCTURAS

#define ESTRUCTURAS

typedef struct dat {
	char *nroCuenta;
	char *dni;
	float saldo;
} TDato;


typedef struct lista {
	TDato d;
	struct lista *sig;
} TLista;


#endif
