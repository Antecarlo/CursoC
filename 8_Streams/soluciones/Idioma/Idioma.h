// Idioma.h: interface for the Idioma class.
//
//////////////////////////////////////////////////////////////////////

#ifndef IDIOMA_H
#define IDIOMA_H


#include <map>
#include <string>

using namespace std;

class Idioma  
{

private:
	map<string,string>mapa;

public:
	Idioma(string);
	string get(string clave){ return mapa[clave]; }
	virtual ~Idioma();

};

#endif 
