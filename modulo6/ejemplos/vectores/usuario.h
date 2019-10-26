#ifndef USUARIO_H
#define USUARIO_H

#include <string>
using  namespace std;

class Usuario
{
	
	friend bool operator==(const Usuario &, const Usuario &);
	
	private:
		int numero;
		string nombre;
				
	public:
		Usuario();
		Usuario(int numero, string nombre);
		inline int getNumero(){ return this->numero; }
		inline void setNumero(int numero){ this->numero = numero; } 
		inline string getNombre(){ return this->nombre; }
		inline void setNombre(string nombre){ this->nombre = nombre; }
		string toString();
		~Usuario();
		
	protected:
};

#endif
