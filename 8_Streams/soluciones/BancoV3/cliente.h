// Class automatically generated by Dev-C++ New Class wizard

#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>
using namespace std;

class Cliente
{
    friend ostream & operator<<(ostream &, const Cliente &);
     
    private:
            string nif;
            string nombre;
           
            
	public:
		Cliente(string="", string="");
		string toCSV();
		~Cliente();
};

#endif // CLIENTE_H