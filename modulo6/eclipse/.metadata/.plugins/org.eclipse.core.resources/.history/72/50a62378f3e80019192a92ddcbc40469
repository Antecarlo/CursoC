/*
 * Punto2D.h
 *
 *  Created on: 26 sept. 2019
 *      Author: antonio
 */

#ifndef PUNTO2D_H_
#define PUNTO2D_H_

class Punto2D {

//private:
	//privadas aunque no pongamos private: (esta fuera de public)
	int x,y;

	friend bool operator == (const Punto2D & p1,const Punto2D & p2);
	friend bool operator<(const Punto2D & p1,const Punto2D & p2);

public:
	Punto2D(int x=0,int y=0);
	float distancia(const Punto2D & p) const;
	void imprimir()const;
	Punto2D masCercano(Punto2D * nube, int n);
	Punto2D desplazar(int escalar);
	Punto2D desplazarNuevo(int escalar);
	virtual ~Punto2D();

	Punto2D operator + (const Punto2D & p);
	float distanciaSigno (const Punto2D& p) const;


	/*
	inline int getX(){return this->x;}
	inline void setX(int x){this->x=x;}
	inline int getY(){return this->y;}
	inline void setY(int y){this->y=y;}
	*/

	//inline significa que ya esta definida aqui

	int getX() const {
		return x;
	}

	void setX(int x) {
		this->x = x;
	}

	int getY() const {
		return y;
	}

	void setY(int y) {
		this->y = y;
	}
};

#endif /* PUNTO2D_H_ */
