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

tiempo::Hora::Hora() {
	time_t t;
	struct tm * t_m;

	t=time(0);
	t_m=localtime(&t);

	this->h=t_m->tm_hour;
	this->m=t_m->tm_min;
	this->s=t_m->tm_sec;
}

/*
tiempo::Hora::Hora(int horas, int minutos, int segundos) {
	this->h=horas;
	this->m=minutos;
	this->s=segundos;
}
*/

tiempo::Hora::Hora(int horas, int minutos, int segundos):h(horas),m(minutos),s(segundos) {
	this->ajustar();
}

tiempo::Hora::Hora(std::string hora) {
	h=m=s=0;
	//this->h=hora[0:2];
	//this->m=hora[3:5];
	//this->s=hora[0:2];
}


tiempo::Hora::Hora(double d) {
	double minutos,segundos;
	this->h = (int)d;
	minutos=(d-this->h)*60.0;
	this->m=(int)minutos;
	segundos=(minutos-this->m)*60.0;
	this->s=(int)segundos;
}

void tiempo::Hora::imprimir() const {
	//std::cout.fill('0');
	//std::cout.width(2);
	std::cout << std::setw(2)<< std::setfill('0') << this->h <<":"<< std::setw(2)<< std::setfill('0') << this->m << ":" <<std::setw(2)<< std::setfill('0') << this->s << std::endl;
}

void tiempo::Hora::ajustar() {

		this->m+=(s/60);
		this->s=s%60;

		this->h+=(m/60);
		this->m=m%60;

		h=h%24;
}

void tiempo::Hora::inc() {
	this->s++;
	this->ajustar();
}

tiempo::Hora tiempo::Hora::operator +(const tiempo::Hora& hora){
	Hora aux(this->h+hora.h,this->m+hora.m,this->s+hora.s);
	aux.ajustar();
	return aux;
}

bool tiempo::operator ==(const tiempo::Hora& hora,const tiempo::Hora& hora2) {
	if((hora2.h==hora.h) && (hora2.m==hora.m) && (hora2.s==hora.s))
		return true;
	else
		return false;
}

bool tiempo::Hora::operator <(const tiempo::Hora& hora) {
	 return (this->segundos()<hora.segundos());
}

bool tiempo::Hora::operator >(const tiempo::Hora& hora) {
	return (this->segundos()>hora.segundos());
}

std::ostream & tiempo::operator<<(std::ostream & os, const tiempo::Hora & hora){
	return os << std::setw(2) << std::setfill('0') << hora.h << ":"
			<< std::setw(2) << std::setfill('0') << hora.m << ":"
			<< std::setw(2) << std::setfill('0') << hora.s;
}

/*
std::istream & operator>>(std::istream & is,tiempo::Hora & hora){
	return is >>hora.h >> hora.m >> hora.s;
}
*/

std::istream & tiempo::operator>>(std::istream & is,tiempo::Hora & hora){

	is>>hora.h>>hora.m>>hora.s;
	hora.ajustar();
	return is;

}

long tiempo::Hora::segundos() const {
	return (this->h * 3600.0)+(this->m*60.0)+(this->s);
}

tiempo::Hora tiempo::Hora::operator ++() {
	this->inc();
	this->ajustar();
	return * this;
}

tiempo::Hora tiempo::Hora::operator ++(int int1) {
	//Sufijo
	Hora aux(* this);
	this->inc();
	return aux;
}

tiempo::Hora::~Hora() {
	// TODO Auto-generated destructor stub
}

