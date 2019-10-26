/*
 * Coordenada.cpp
 *
 *  Created on: 2 oct. 2019
 *      Author: antonio
 */

#include "Coordenada.h"
#include <ctime>
#include <vector>
#include <algorithm>

Coordenada::Coordenada(int fila, int columna): fil(fila),col(columna) {
}

Coordenada Coordenada::getAleatorio(int nMax) {
	Coordenada coor;
	coor.fil=std::rand() % nMax;
	coor.col=std::rand() %nMax;

	return coor;
}

std::vector <Coordenada> Coordenada::getCoordenadasAleatorias(int numCoordenadas,int nMax){
	std::vector<Coordenada> coordenadas;
	Coordenada aux;
	std::srand(std::time(0));

	for (int i=0;i<numCoordenadas;i++){
		aux=Coordenada::getAleatorio(nMax);

		auto index = std::find(std::begin(coordenadas),std::end(coordenadas),aux);
		if (index == std::end(coordenadas)){
			//No existe y se inserta en el vector
			coordenadas.push_back(aux);
		}
	}
	return coordenadas;
}

std::vector<Coordenada> Coordenada::getCoordenadasAdyacentes(int nMax)const{
	std::vector<Coordenada> adyacentes;
	Coordenada aux;

	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(i==0 && j==0) continue;
			aux=* this + Coordenada(i,j);
			if(aux.cumpleLimite(nMax))
				adyacentes.push_back(aux);
		}
	}
	return adyacentes;
}

bool Coordenada::operator ==(const Coordenada & c) {
	return this->fil == c.fil && this->col == c.col;
}

bool Coordenada::operator !=(const Coordenada & c){
	return this->fil != c.fil && this->col != c.col;
}

std::istream & operator >> (std::istream & is, Coordenada & c){
	return is >> c.fil >> c.col;
}

std::ostream & operator << (std::ostream & os, const Coordenada & c){
	return os << "(" << c.fil << ", " <<c.col<<")";
}

bool Coordenada::cumpleLimite(int nMax) {
	return this->fil >= 0 && this->col >=0 && this->fil <nMax && this->col <nMax;
}

Coordenada Coordenada::operator +(const Coordenada& c) const{
	return Coordenada(this->fil+c.fil,this->col+c.col);
}

Coordenada::~Coordenada() {
	// TODO Auto-generated destructor stub
}
