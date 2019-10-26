#ifndef TIPOS

#define TIPOS

typedef struct n {
	int numero;
	struct n *sig;
} TNodo;


typedef struct c {
	TNodo *inicio;
	TNodo *fin;
} TCola;


#endif
