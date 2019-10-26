/*
 * AgendaException.h
 *
 *  Created on: 7 oct. 2019
 *      Author: antonio
 */

#ifndef AGENDAEXCEPTION_H_
#define AGENDAEXCEPTION_H_

#include <string>
#include <stdexcept>

class AgendaException : public std::exception{

	std::string mensaje;

public:
	AgendaException(std::string mensaje);

	const char *what() const throw();

	virtual ~AgendaException();
};

#endif /* AGENDAEXCEPTION_H_ */
