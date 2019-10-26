/**
 * Project Untitled
 */


#include "Vehiculo.h"
#include "StateApagado.h"
 
Vehiculo::Vehiculo(){
	this->combustible = 0;
	this->velocidad = 0;
	this->estado = NULL;
} 

Vehiculo::Vehiculo(int combustible) {
	this->combustible = combustible;
	this->velocidad = 0;
	this->estado = new StateApagado(this);
}

/**
 * @return State
 */
State *Vehiculo::getEstado() {
    return this->estado;
}

/**
 * @param estado
 * @return void
 */
void Vehiculo::setEstado(State *estado) {
    this->estado = estado;
}

/**
 * @return int
 */
int Vehiculo::getVelocidad() {
    return this->velocidad;
}

/**
 * @param velocidad
 * @return void
 */
void Vehiculo::setVelocidad(int velocidad) {
    this->velocidad = velocidad;
}

/**
 * @return int
 */
int Vehiculo::getCombustible() {
    return this->combustible;
}

/**
 * @return void
 */
void Vehiculo::acelerar() {
	estado->acelerar();
    cout << "Velocidad actual: " << velocidad << " Combustible: " << combustible << endl;
}

/**
 * @return void
 */
void Vehiculo::frenar() {
    estado->frenar();
}

/**
 * @return void
 */
void Vehiculo::contacto() {
    estado->contacto();
}

/**
 * @param km
 * @return void
 */
void Vehiculo::modificarVelocidad(int km) {
    velocidad += km;
}

/**
 * @param litros
 * @return void
 */
void Vehiculo::modificarCombustible(int litros) {
    combustible += litros;
}
