#include "documento.h"

Documento::Documento()
{
	this->formato = NULL;	
	
}

Documento::Documento(Formato *formato)
{
	this->formato = formato;
}

Documento::~Documento()
{
	if (this->formato != NULL)
		delete this->formato;	
}
