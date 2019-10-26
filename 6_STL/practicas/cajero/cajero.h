#ifndef CAJERO_H
#define CAJERO_H

#define NUM_BILLETES 4

class Cajero
{
	private:
		int billetes[NUM_BILLETES];
		int cantidad[NUM_BILLETES];
	
	public:
		Cajero(int=10,int=10,int=10,int=10);
		int saldo();
		int ingresar(int=0,int=0,int=0,int=0); 
		inline int *getTiposBilletes(){ return billetes; }
		bool retirar(int, int *);
		~Cajero();
	protected:
};

#endif
