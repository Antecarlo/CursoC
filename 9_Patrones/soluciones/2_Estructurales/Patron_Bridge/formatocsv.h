#ifndef FORMATOCSV_H
#define FORMATOCSV_H

#include "formato.h"

class FormatoCSV : public Formato
{
	string listToCSV(vector<string>);
	
	public:
		FormatoCSV();
		string getCabeceras(vector<string> cab);
		string getTabla(vector<vector<string> > tabla);		
		~FormatoCSV();
	protected:
};

#endif
