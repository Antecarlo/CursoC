/*
 * Factura.cpp
 *
 *  Created on: 2 oct. 2019
 *      Author: antonio
 */

#include "Factura.h"
#include <iostream>
#include <memory>

long Factura::NUM_FACT =1;

Factura::Factura(){
	this->numeroFact=0;
	this->baseImp=0;
	this->iva=0;
}

Factura::Factura(Fecha f, Cliente c,float iva){
	this->fecha=f;
	this->numeroFact=Factura::NUM_FACT;
	this->cliente=c;
	this->baseImp=baseImp;
	this->iva=iva;

	Factura::NUM_FACT++;
}

void Factura::imprimir() {

	double aux=this->calcular();
	std::cout << "FACTURA Nº: "<< this->numeroFact << std::endl;
	std::cout << "Fecha: "<< this->fecha << std::endl;
	std::cout <<std::endl;
	std::cout << "Cliente: "<<std::endl;
	std::cout << this->cliente << std::endl;
	std::cout <<std::endl;
	std::cout << "Servicios: "<<std::endl;
	if(this->eventos.size()!=0){
		for(unsigned int i=0; i<this->eventos.size(); i++){
			const std::type_info & info = typeid(* eventos[i]);
			std::cout <<info.name() << "  ";

			(this->eventos[i])->imprimir();
		//std::cout << *(this->eventos[i]) <<std::endl;
		//for(auto & i:this->eventos)
			//i->imprimir();
		}
	}else{
		std::cout << "No hay servicios"<<std::endl;
	}
	std::cout << std::endl << "BASE IMPONIBLE : " << this->baseImp << std::endl;
	std::cout<< "IVA. : "<< this->iva/100 * this->baseImp <<std::endl;
	std::cout<< "TOTAL: "<< aux <<std::endl;
	std::cout <<std::endl;
	std::cout <<std::endl;
}

double Factura::calcular() {

this->baseImp=0;
	if(this->eventos.size()!=0){
			for(auto & i:this->eventos)
				this->baseImp+=i->calcular();

			//for(unsigned int i=0; i<this->eventos.size(); i++)
				//this->baseImp+=(this->eventos[i])->calcular();
	}
	return this->baseImp*(1+(this->iva/100));
}

void Factura::addServicio(std::unique_ptr<Evento> evento) {
	this->eventos.push_back(std::move(evento));
}

Factura::~Factura() {
	// TODO Auto-generated destructor stub
}
