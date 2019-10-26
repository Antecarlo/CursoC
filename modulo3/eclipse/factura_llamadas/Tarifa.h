/*
 * Tarifa.h
 *
 *  Created on: 2 oct. 2019
 *      Author: antonio
 */

#ifndef TARIFA_H_
#define TARIFA_H_


class Tarifa {

	double importeSMS;
	double importeSGCall;
	double importeR;
	double importeSGCallInt;

public:
	Tarifa(double sms=0.05,double sgCall=0.01, double roaming=2.5 ,double sgCallInt=0.02);

	double getImporteR() const {
		return importeR;
	}

	double getImporteSgCall() const {
		return importeSGCall;
	}

	double getImporteSgCallInt() const {
		return importeSGCallInt;
	}

	double getImporteSms() const {
		return importeSMS;
	}

	void setImporteR(double importeR) {
		this->importeR = importeR;
	}

	void setImporteSgCall(double importeSgCall) {
		importeSGCall = importeSgCall;
	}

	void setImporteSgCallInt(double importeSgCallInt) {
		importeSGCallInt = importeSgCallInt;
	}

	void setImporteSms(double importeSms) {
		importeSMS = importeSms;
	}

	virtual ~Tarifa();
};


#endif /* TARIFA_H_ */
