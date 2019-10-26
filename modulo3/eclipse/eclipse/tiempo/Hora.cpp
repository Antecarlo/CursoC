/*
 * Hora.cpp
 *
 *  Created on: 26 sept. 2019
 *      Author: antonio
 */

#include "Hora.h"
#include<iostream>
#include<chrono>
#include<thread>
#include<iomanip>

Hora::Hora() {
	time_t t;
	struct tm * t_m;

	t=time(0);
	t_m=localtime(&t);

	this->h=t_m->tm_hour;
	this->m=t_m->tm_min;
	this->s=t_m->tm_sec;
}

/*
Hora::Hora(int horas, int minutos, int segundos) {
	this->h=horas;
	this->m=minutos;
	this->s=segundos;
}
*/

Hora::Hora(int horas, int minutos, int segundos):h(horas),m(minutos),s(segundos) {
	this->ajustar();
}

Hora Hora::operator +(const Hora& hora){
	Hora aux(this->h+hora.h,this->m+hora.m,this->s+hora.s);
	aux.ajustar();
	return aux;
}

Hora::Hora(std::string hora) {
	h=m=s=0;
	//this->h=hora[0:2];
	//this->m=hora[3:5];
	//this->s=hora[0:2];
}


Hora::Hora(double d) {
	double minutos,segundos;
	this->h = (int)d;
	minutos=(d-this->h)*60.0;
	this->m=(int)minutos;
	segundos=(minutos-this->m)*60.0;
	this->s=(int)segundos;
}

void Hora::imprimir() const {
	//std::cout.fill('0');
	//std::cout.width(2);
	std::cout << std::setw(2)<< std::setfill('0') << this->h <<":"<< std::setw(2)<< std::setfill('0') << this->m << ":" <<std::setw(2)<< std::setfill('0') << this->s << std::endl;
}

void Hora::ajustar() {

		this->m+=(s/60);
		this->s=s%60;

		this->h+=(m/60);
		this->m=m%60;

		h=h%24;
}

void Hora::inc() {
	this->s++;
	this->ajustar();
}



Hora::~Hora() {
	// TODO Auto-generated destructor stub
}

