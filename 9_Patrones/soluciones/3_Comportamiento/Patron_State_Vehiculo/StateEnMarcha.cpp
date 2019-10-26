#include "StateEnMarcha.h"
#include "StateSinCombustible.h"
#include "StateParado.h"

StateEnMarcha::StateEnMarcha(Vehiculo *vehiculo):State(vehiculo) {

}


void StateEnMarcha::acelerar() {
   		if (vehiculo->getCombustible() > 0) {
			// Aumentamos la velocidad, permaneciendo en el mismo estado
			if (vehiculo->getVelocidad() >= VELOCIDAD_MAX) {
				cout << "ERROR: El coche ha alcanzado su velocidad maxima" << endl;
				vehiculo->modificarCombustible(-10);
			} else {
				vehiculo->modificarVelocidad(10);
				vehiculo->modificarCombustible(-10);
			}
		} else {
			// estado = SIN COMBUSTIBLE
			vehiculo->setEstado(new StateSinCombustible(vehiculo));
			cout << "El vehiculo se ha quedado sin combustible" << endl;
		}
}


void StateEnMarcha::frenar() {
    vehiculo->modificarVelocidad(-10);
		if (vehiculo->getVelocidad() <= 0) {
			// estado = PARADO;
			vehiculo->setEstado(new StateParado(vehiculo));
			cout << "El vehiculo se encuentra ahora PARADO" << endl;
		}
}


void StateEnMarcha::contacto() {
    cout << "ERROR: No se puede cortar el contacto en marcha!" << endl;
}
