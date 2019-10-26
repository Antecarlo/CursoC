#ifndef DOCUMENTO_H
#define DOCUMENTO_H


#include "formato.h"

class Documento
{
	public:
		Documento();
		Documento(Formato *);
		inline Formato *getFormato(){ return this->formato; }	
		inline void setFormato(Formato *formato){ this->formato = formato; }
		virtual string format()=0;	
		~Documento();
		
	protected:
		Formato *formato;		
};

#endif
