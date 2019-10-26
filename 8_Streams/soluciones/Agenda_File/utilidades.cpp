#include "utilidades.h"

void Utilidades::extraerInt(string str, int &x, int &y, int &z, 
                            string sep)
{
	string d,m,a;
	int pos, rpos;
	
	pos = str.find(sep);
	rpos = str.rfind(sep);
	
	if (pos >= 0 && rpos >= 0 && pos != rpos){
		d = str.substr(0, pos);
		m = str.substr(pos+1, rpos-1-pos);	
		a = str.substr(rpos+1,str.length()-rpos-1);
		
		x = atoi(d.c_str());
		y = atoi(m.c_str());
		z = atoi(a.c_str());
	}	else
		x=y=z=0; 
}

void Utilidades::split(vector<string> &tokens, string input, char sep)
{
	istringstream ss(input); 
	string token;
	
	tokens.clear(); 
	while(getline(ss, token, sep)) 
		tokens.push_back(token);
}

