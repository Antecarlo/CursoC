#ifndef PRETTYPRINTEREXPRESION_H
#define PRETTYPRINTEREXPRESION_H

#include <string>
using namespace std;

#include "Suma.h"
#include "Mult.h"
#include "Variable.h"
#include "Constante.h"
#include "VisitanteExpresion.h"

class PrettyPrinterExpresion : public VisitanteExpresion
{
	string _resultado;
	void visitarOpBinaria(OpBinaria *, string);
	string convert_string(int);
	
	public:
		PrettyPrinterExpresion();
		void visitarSuma(Suma *);
		void visitarMult(Mult *);
		void visitarVariable(Variable *);
		void visitarConstante(Constante *);		
		inline string getResultado(){ return _resultado; }
		~PrettyPrinterExpresion();
	protected:
};

#endif
