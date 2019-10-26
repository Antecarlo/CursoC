#include "Banco.h"
#include "BancoException.h"

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    try {
       Banco banco("ficheros\\cuentas.txt","ficheros\\cajero.txt");
       banco.menu();
       
    } catch(BancoException &e){
       cout << e.what() << endl;   
       cin.get();           
    }
	return 0;
}
