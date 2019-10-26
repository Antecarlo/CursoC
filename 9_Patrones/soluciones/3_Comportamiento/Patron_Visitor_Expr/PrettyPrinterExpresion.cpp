#include "PrettyPrinterExpresion.h"

PrettyPrinterExpresion::PrettyPrinterExpresion()
{
}

void PrettyPrinterExpresion::visitarOpBinaria(OpBinaria *op, string pOperacion)
{
	op->getIzq()->aceptar(this);
	string pIzq = this->getResultado();
	
	op->getDer()->aceptar(this);
	string pDer = this->getResultado();
	
	_resultado = "(" + pIzq + pOperacion + pDer + ")";
}

string PrettyPrinterExpresion::convert_string(int valor)
{
	string val;
	char s[50];
	
	sprintf(s, "%d", valor);
	val = s;
	return val;		
}

void PrettyPrinterExpresion::visitarSuma(Suma *s){
	visitarOpBinaria(s, "+");
}

void PrettyPrinterExpresion::visitarMult(Mult *m){
	visitarOpBinaria(m, "*");
}

void PrettyPrinterExpresion::visitarVariable(Variable *v){
	_resultado = v->getNombre();
}

void PrettyPrinterExpresion::visitarConstante(Constante *c){
	_resultado = convert_string(c->getValor());
}

PrettyPrinterExpresion::~PrettyPrinterExpresion()
{
}
