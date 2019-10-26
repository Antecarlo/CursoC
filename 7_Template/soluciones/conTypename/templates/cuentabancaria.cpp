#include "cuentabancaria.h"

ostream &operator<<(ostream &os, const CuentaBancaria &cc)
{
	return os << "Titular: " << cc.titular << endl
	          << "Numero C: " << cc.cc << endl
	          << "Saldo: " << cc.saldo << endl;
}

CuentaBancaria::CuentaBancaria(string titular, string cc, double saldo)
{
	this->titular = titular;
	this->cc = cc;
	
	this->saldo = saldo;
}

bool CuentaBancaria::ingresar(double importe)
{ 
	if (importe > 0.0){
		saldo += importe; 
		return true;
	}else
		return false;
}

bool CuentaBancaria::retirar(double importe)
{
	 
	if (saldo - importe > 0.0){
		saldo -= importe;
		return true;
	} else
		return false;		
}

string CuentaBancaria::toString()
{
	char s[50];
	sprintf(s,"%g",this->saldo);
	string resul(s);
	
	return (this->titular + " " + this->cc + " " + resul);
}

CuentaBancaria::~CuentaBancaria()
{
}
