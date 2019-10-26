#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H

#include <string>
#include <iostream>
using namespace std;

class CuentaBancaria
{
	friend ostream &operator<<(ostream &, const CuentaBancaria &);
		
	public:
		CuentaBancaria(string="",string="",double=1000.0);
		virtual bool ingresar(double);
		virtual bool retirar(double);
		inline double consultarSaldo(){ return saldo; }
		virtual string toString();
		~CuentaBancaria();
		
	protected:
		string titular;
		string cc;
		double saldo;		
};

#endif
