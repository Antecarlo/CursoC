/*

Clase Escena que mantiene una serie de figuras con smart pointers
*/


#include <vector>
#include <memory>

#include "Figura.h"

#ifndef ESCENA_H

	#define ESCENA_H


	class Escena {
		
		int pos;
		int n;

		// El vector de punteros a figura, se define sin tamanyo.
		std::vector<std::unique_ptr<Figura> > figuras;	
		
		public:
			Escena(int = 10);
			bool addFigura(std::unique_ptr<Figura>);
			void visualizar();
			~Escena();
	};

#endif
