#include <iostream>
#include "Cajero.h"

using namespace std;

Cajero::Cajero(int b100,int b50,int b20,int b10)
{
	billetes[100]=b100;
	billetes[50]=b50;
	billetes[20]=b20;
	billetes[10]=b10;
}

int Cajero::saldo()
{
    int sumaTotal = 0;
    map<int,int>::iterator it;
    
    for (it = billetes.begin() ; it != billetes.end() ; it++)
        sumaTotal += it->first * it->second;
        
	return sumaTotal;
}
		
int Cajero::ingresar(int b100,int b50,int b20,int b10)
{
    billetes[100]+=b100;
    billetes[50]+=b50;
    billetes[20]+=b20;
    billetes[10]+=b10;
    
	return b100*100+b50*50+b20*20+b10*10;
}

void Cajero::imprimir(){
     map<int,int>::reverse_iterator it;
     cout << "Contenido del Cajero" << endl;
     
     for (it = billetes.rbegin() ; it != billetes.rend() ; it++)
        cout << "Billetes de " << it->first << " => " 
             << it->second << " = " << (it->first * it->second) << endl;
     cout << endl << "SALDO TOTAL: " << this->saldo() << endl << endl;
}
		
bool Cajero::retirar(int importe, map<int,int> &billetes_devolver)
{
    int i = 0;
    int numBilletes;
    map<int,int>::reverse_iterator it;
    
    billetes_devolver.clear();
        
	if (importe % 10 == 0 && importe > 0){
        
        for (it = this->billetes.rbegin() ; it != this->billetes.rend() ; it++){
        
            if (importe >= it->first){
                // Calcular el numero de billetes de ese tipo:
                numBilletes = importe / it->first;
                
                // Anotar los billetes que voy a devolver:
                billetes_devolver[it->first] = numBilletes;
                
                // Actualizar importe:
                importe = importe % it->first;
                
                // Actualizar billetes del cajero:
                this->billetes[it->first] -= numBilletes;
            }
            if (importe == 0) break;
        }
		return true;
		
	}	else
		return false;
}

Cajero::~Cajero()
{
}
