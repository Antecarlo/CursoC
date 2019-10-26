#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>
using namespace std;

class Cliente
{
	string cif;
	string razonSocial;
	string dir;
	
	public:
		Cliente();
		Cliente(string, string, string);		
		vector<string> toListString();
		~Cliente();
	protected:
};

#endif
