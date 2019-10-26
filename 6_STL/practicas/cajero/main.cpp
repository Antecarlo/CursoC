#include <iostream>
using namespace std;

#include "cajero.h"
#include "cajeroconsola.h"
#include "cuentabancaria.h"
#include "cuentadeahorro.h"


void test(){
    cout << "Prueba" << endl;
    
    CuentaBancaria *cb = new CuentaBancaria("1000-2000-44-1234567890",1111, 1111,1000.0,Cliente("91334455A","Jose"));
                        
    cb->actualizarSaldo(100);
                        
    cb->imprimir();
    cout << endl;
    
    CuentaBancaria *ca = new CuentaDeAhorro("2356-2000-44-9876543210",2222, 2222,5200.0,Cliente("12345678L","Ana"),3.5);
                        
    ca->actualizarSaldo(100);
     
    ca->imprimir();

    delete cb;
    delete ca;
}


int main(int argc, char** argv) {
   
    CajeroConsola cc;
    cc.menu();
    
    // test();
    
    cin.get();
    return 0;
}
