#ifndef EXPRBOOLEANA_H
#define EXPRBOOLEANA_H

#include <string>
using namespace std;

class ExprBooleana
{
	public:	
		ExprBooleana();	
		virtual bool evaluar()=0;
	 	virtual ExprBooleana *sustituir(string, ExprBooleana *exp)=0;
		virtual ExprBooleana *copiar()=0;
		virtual string toString()=0;	
		~ExprBooleana();
	protected:
};

#endif
