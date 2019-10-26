/*
 * Persona.h
 *
 *  Created on: 25 sept. 2019
 *      Author: antonio
 */

#ifndef PERSONA_H_
#define PERSONA_H_

#include <string>

class Persona {

	//Definicion de atributos
		std::string nombre;
		std::string apellidos;
		float peso;
		float altura;


public:
	//Constructor por defecto
	Persona();

	Persona(std::string,std::string,float,float);

	void dormir();
	void hablar(Persona);

	//Destructor
	virtual ~Persona();
};

#endif /* PERSONA_H_ */
