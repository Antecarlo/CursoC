// Class automatically generated by Dev-C++ New Class wizard

#include "cuentadeahorro.h" // class's header file
#include <cstdlib>
#include <cstdio>
using namespace std;

// class constructor
CuentaDeAhorro::CuentaDeAhorro(string nc,int clave,int pass,double saldo,Cliente c,double penalizacion):
     CuentaBancaria(nc,clave,pass,saldo,c)
{
	this->penalizacion = penalizacion;
}

CuentaDeAhorro::CuentaDeAhorro(vector<string> campos):CuentaBancaria(campos){
    this->penalizacion = atof(campos.at(7).c_str());                                             
}                                           

void CuentaDeAhorro::actualizarSaldo(double importe)
{
     if (importe < 0) 
        importe = importe + (importe * this->penalizacion / 100.0);
        
     CuentaBancaria::actualizarSaldo(importe);   
}

string CuentaDeAhorro::toCSV(){
       string csv;
       char aux[50];
       
       sprintf(aux,"%f",this->penalizacion);
       csv = CuentaBancaria::toCSV() +";"+string(aux);
       return csv;
}

void CuentaDeAhorro::imprimir(){
     CuentaBancaria::imprimir();
     cout << "penalizacion: " << this->penalizacion << endl;      
}

// class destructor
CuentaDeAhorro::~CuentaDeAhorro()
{
	// insert your code here
}