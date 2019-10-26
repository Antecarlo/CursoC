#ifndef FORMATO_H
#define FORMATO_H

#include <string>
#include <vector>

using namespace std;

class Formato
{
	public:
		Formato();
		virtual string getCabeceras(vector<string> cab)=0;
		virtual string getTabla(vector<vector<string> > tabla)=0; 
		~Formato();
	protected:
};

#endif
