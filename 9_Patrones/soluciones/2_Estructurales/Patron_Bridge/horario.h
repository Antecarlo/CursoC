#ifndef HORARIO_H
#define HORARIO_H

#include "documento.h"


class Horario : public Documento
{
	
	vector<string> cabeceras;
	vector<vector<string> > tabla;
	
	public:
		Horario();
		inline vector<string> getCabeceras(){ return this->cabeceras; }
		inline vector<vector<string> > getTablas(){ return this->tabla; }
		inline void setCabeceras(vector<string> cabeceras){ this->cabeceras = cabeceras; }
		inline void setTabla(vector<vector<string> > tabla){  this->tabla = tabla; }
		string format();
		~Horario();
	protected:
};

#endif
