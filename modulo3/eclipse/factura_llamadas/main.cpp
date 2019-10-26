/*
 * main.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#include<iostream>
#include<memory>

#include "Sms.h"
#include "Call.h"
#include "CallI.h"
#include "Hora.h"
#include "Fecha.h"
#include "Cliente.h"
#include "Tarifa.h"
#include "Factura.h"


void test_servicios(){
	Sms sms(662589475,0.05,Fecha(1,15,2019),Hora(14,56,28));
	Call call(625194865,0.05,Fecha(1,15,2019),Hora(14,56,28),Hora(15,0,0));
	CallI callI(625194865,1.2,0.05,Fecha(1,15,2019),Hora(14,56,28),Hora(15,0,0));
	std::cout << sms << std::endl;
	std::cout << call << std::endl;
	std::cout << callI << std::endl;

	//Pruebas con el operador: typeid

	const std::type_info & info = typeid(sms);
	std::cout << "typeid(sms) " <<info.name() << std::endl;

	const std::type_info & info2 = typeid(callI);
	std::cout << "typeid(callI) " <<info2.name() << std::endl;

	int numero=0;
	const std::type_info & info3 = typeid(numero);
	std::cout << "typeid(numero) " <<info3.name() << std::endl;

	std::unique_ptr<Evento> ser = std::make_unique<Sms>(662589475,0.05,Fecha(1,15,2019),Hora(14,56,28));
	const std::type_info & info4 = typeid(* ser);
	std::cout << "typeid(ser) " <<info4.name() << std::endl;

	}

void test_factura(){
	Tarifa tarifa;
	Cliente cliente(tarifa,"Sara","Casado Lopez",628597484);
	Factura factura(Fecha(23,9,1998),cliente,21);


	factura.addServicio(std::make_unique<Sms>(645918785,cliente.getTarifa().getImporteSms(),Fecha(25,9,1654),Hora(20,20,20)));
	factura.addServicio(std::make_unique<Call>(648475123,cliente.getTarifa().getImporteSgCall(),Fecha(25,9,1654),Hora(20,20,20),Hora(20,22,21)));
	factura.addServicio(std::make_unique<CallI>(754151520,cliente.getTarifa().getImporteR(),cliente.getTarifa().getImporteSgCallInt(),Fecha(25,9,1654),Hora(14,10,20),Hora(15,0,1)));


	factura.imprimir();

	Factura factura2(Fecha(2,3,2020),cliente,21);
	factura2.imprimir();
}

int main(){
	//test_servicios();
	test_factura();
}


