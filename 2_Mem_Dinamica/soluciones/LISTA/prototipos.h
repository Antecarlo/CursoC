
#ifndef PROTOTIPOS

	#define PROTOTIPOS

	void menu();
	void leerCuenta(TDato *);
	void imprimeCuenta(TDato *);
	TLista *insertarDatos(TLista *);
	TLista *anyadeCuenta(TLista *, TDato);
	void listarCuentas(TLista *);
	void buscarCuenta();
	void borrarCuenta(TLista **);
	TLista *borrarCuentas();
	void borrarNodo(TLista **, char *);


#endif