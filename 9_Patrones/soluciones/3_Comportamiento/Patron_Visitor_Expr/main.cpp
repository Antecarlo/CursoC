#include <iostream>
using namespace std;

#include "Expresion.h"
#include "Variable.h"
#include "Constante.h"
#include "PrettyPrinterExpresion.h"

int main(){
	 Expresion *expresion = new Mult( new Suma( new Variable("a"), new Constante(5) ), 
	                                    new Suma( new Variable("b"), new Constante(1) ));

     // Pretty-printing...
     PrettyPrinterExpresion *pretty = new PrettyPrinterExpresion();
     expresion->aceptar(pretty);     

    // Visualizacion de resultados
    cout << "Resultado: " << pretty->getResultado() << endl;
    
    delete expresion;
    delete pretty;
	
}
