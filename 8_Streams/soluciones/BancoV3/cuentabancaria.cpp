// Class automatically generated by Dev-C++ New Class wizard

#include "cuentabancaria.h" // class's header file
#include <cstdlib>
#include <cstdio>
using namespace std;

// class constructor
CuentaBancaria::CuentaBancaria(string nc,int clave,int pass,double saldo,Cliente titular)
{
	this->numeroCuenta = nc;
	this->clave = clave;
	this->password = pass;
	this->saldo = saldo;
	this->titular = titular;
}

CuentaBancaria::CuentaBancaria(vector<string> campos){
    this->numeroCuenta = campos.at(1);
	this->clave = atoi(campos.at(2).c_str());
	this->password = atoi(campos.at(3).c_str());
	this->saldo = atof(campos.at(4).c_str());
	this->titular = Cliente(campos.at(5),campos.at(6));                                      
}

string CuentaBancaria::toCSV(){
       char aux[50];
       string csv = "";
       
       csv += this->numeroCuenta + ";";
       
       sprintf(aux,"%d", this->clave);
       csv += string(aux)+";";
       
       sprintf(aux,"%d", this->password);
       csv += string(aux)+";";
       
       sprintf(aux,"%f", this->saldo);
       csv += string(aux)+";";
       
       csv += this->titular.toCSV();
       return csv;              
}

void CuentaBancaria::imprimir(){
        cout << "cc: " << this->numeroCuenta << endl << 
                     "clave: " << this->clave << endl << 
                     "pass: " << this->password << endl << 
                     "saldo: " << this->saldo <<  endl <<
                     "titular: " << this->titular << endl;        
}

// class destructor
CuentaBancaria::~CuentaBancaria()
{
	// insert your code here
}
