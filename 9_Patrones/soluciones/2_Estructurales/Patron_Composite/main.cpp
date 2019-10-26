#include <iostream>

using namespace std;

#include "expresion.h"
#include "expresionnumerica.h"
#include "expresionsuma.h"
#include "expresionresta.h"

int main()
{
	Expresion *expr1 = new ExpresionNumerica(14);
	Expresion *expr2 = new ExpresionSuma(new ExpresionNumerica(3), new ExpresionNumerica(5));
		
	Expresion *expresion = new ExpresionResta(expr1, expr2); 
	cout << "Expresion: " << expresion->toString() << endl;
	cout << "Resul : " << expresion->getValue();
	
}
