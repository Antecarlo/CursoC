#ifndef CAJERO_H
#define CAJERO_H

#define NUM_BILLETES 4

#include <map>
using namespace std;

class Cajero
{
	private:
        map<int,int> billetes;
	
	public:
		Cajero(int=10,int=10,int=10,int=10);
		Cajero(map<int,int> billetes){ this->billetes=billetes;}
		inline map<int,int> getBilletes(){ return this->billetes; }
		int saldo();
		int ingresar(int=0,int=0,int=0,int=0); 	
		bool retirar(int, map<int,int> &);
		void imprimir();
		~Cajero();
	protected:
};

#endif
