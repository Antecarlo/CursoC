// Properties.h: interface for the Properties class.
//
//////////////////////////////////////////////////////////////////////

#ifndef AFX_PROPERTIES_H__0ECD120A_4F9A_4430_8E17_3339C7DBFC81__INCLUDED_
#define AFX_PROPERTIES_H__0ECD120A_4F9A_4430_8E17_3339C7DBFC81__INCLUDED_


#include <map>
#include <string>

using namespace std;

class Properties  
{

private:
	map<string,string> datos;
	string nombreFichero;

public:
	Properties(string);
	string getString(string);
	void putString(string, string);
	void save();
	virtual ~Properties();

};

#endif 
