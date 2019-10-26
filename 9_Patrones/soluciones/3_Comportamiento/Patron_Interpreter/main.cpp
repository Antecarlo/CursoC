#include <iostream>
using namespace std;

#include "ExprBooleana.h"
#include "Constante.h"
#include "ExprAnd.h"
#include "ExprOr.h"
#include "ExprNot.h"


int main(){
	
	ExprBooleana *exp = new ExprOr(new Constante(false), 
	                   new ExprAnd(new ExprAnd(new Constante(true), 
					   new ExprOr(new Constante(false),new Constante(true))), 
					   new ExprNot(new Constante(true))));
	bool resul = exp->evaluar();
	cout << exp->toString() << endl;
	cout << "Resul: " << (resul ? " TRUE " : " FALSE ") << endl;
}
