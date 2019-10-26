#include <iostream>
#include "cajero.h"

using namespace std;

Cajero::Cajero(int b100,int b50,int b20,int b10)
{
	billetes[0]=100;
	billetes[1]=50;
	billetes[2]=20;
	billetes[3]=10;
	
	cantidad[0]=b100;
	cantidad[1]=b50;
	cantidad[2]=b20;
	cantidad[3]=b10;
}

int Cajero::saldo()
{
    int sumaTotal = 0;
    for (int i = 0 ; i < NUM_BILLETES ; i++)
        sumaTotal += billetes[i] * cantidad[i];
        
	return sumaTotal;
}
		
int Cajero::ingresar(int b100,int b50,int b20,int b10)
{
    cantidad[0]+=b100;
    cantidad[1]+=b50;
    cantidad[2]+=b20;
    cantidad[3]+=b10;
    
	return b100*100+b50*50+b20*20+b10*10;
}
		
bool Cajero::retirar(int importe, int *cantidad_retirada)
{
    int i = 0;
    int numBilletes;
    
	if (importe % 10 == 0 && importe > 0){
        // Inicializar el array  
        for (i = 0 ; i < NUM_BILLETES ; i++)
            cantidad_retirada[i]=0;   
                
		// Calcular billetes: 
        i=0;                          
        while (importe > 0){
             
              if (importe >= billetes[i]){
                 // Calcular el numero de billetes de ese tipo:
                 numBilletes = importe / billetes[i];
                            
                 // Anotar los billetes que voy a devolver:
                 cantidad_retirada[i] = numBilletes;
                 
                 // Actualizar importe:
                 importe = importe % billetes[i];
                                                  
                 // Actualizar billetes del cajero:
                 this->cantidad[i]-=numBilletes;
              }
              i++;
                                                                        
        }
		return true;
		
	}	else
		return false;
}

Cajero::~Cajero()
{
}
