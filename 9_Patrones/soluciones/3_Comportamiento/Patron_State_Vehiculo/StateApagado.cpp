#include "StateApagado.h"
#include "StateParado.h"
#include "StateSinCombustible.h"

StateApagado::StateApagado(Vehiculo *vehiculo):State(vehiculo) {

}

void StateApagado::acelerar() {
    cout << "El vehiculo esta apagado" << endl;
}

void StateApagado::frenar() {
    cout << "El vehiculo esta apagado" << endl;
}

void StateApagado::contacto() {
    if (this->vehiculo->getCombustible() > 0){
    	vehiculo->setEstado(new StateParado(vehiculo));
    	cout << "El vehiculo ahora se encuentra parado" << endl;
    	vehiculo->setVelocidad(0);
    } else {
    	vehiculo->setEstado(new StateSinCombustible(vehiculo));
    	cout << "El vehiculo se encuentra sin combustible" << endl;
    }
}
