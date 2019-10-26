#ifndef SERVIDOR_H
#define SERVIDOR_H

#include <string>
using namespace std;

class Servidor
{
	public:
		Servidor();
		virtual void descargar(string)=0;
		~Servidor();
	protected:
};

#endif
