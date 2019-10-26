#ifndef FORMATOHTML_H
#define FORMATOHTML_H

#include "formato.h"

class FormatoHTML : public Formato
{
	string listToHTML(vector<string>);
	
	public:
		FormatoHTML();
		string getCabeceras(vector<string> cab);
		string getTabla(vector<vector<string> > tabla);	
		~FormatoHTML();
	protected:
};

#endif
