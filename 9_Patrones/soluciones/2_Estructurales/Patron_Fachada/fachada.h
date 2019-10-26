#ifndef FACHADA_H
#define FACHADA_H

#include "cliente.h"
#include "banco.h"
#include "sistemadecreditos.h"
#include "sistemamorosidad.h"

class Fachada
{
	private:
		Banco banco;
		SistemaMorosidad sm;
		SistemaDeCreditos sc;
	
	public:
		Fachada();
		bool concederHipoteca(Cliente c, double valorHipoteca);
		~Fachada();
	protected:
};

#endif
