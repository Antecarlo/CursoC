#include <iostream>
using namespace std;

#include "expresion.h"
#include "variable.h"
#include "constante.h"
#include "suma.h"
#include "mult.h"

int main(){
	 Expresion *expresion = new Mult( new Suma( new Variable("a"), new Constante(5) ), 
	                                    new Suma( new Variable("b"), new Constante(1) ));

   
    
    delete expresion;
   
	
}
