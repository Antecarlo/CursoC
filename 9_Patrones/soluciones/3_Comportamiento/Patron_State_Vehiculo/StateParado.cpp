/**
 * Project Untitled
 */


#include "StateParado.h"
#include "StateEnMarcha.h"
#include "StateApagado.h"
#include "StateSinCombustible.h"

StateParado::StateParado(Vehiculo *vehiculo):State(vehiculo) {

}

/**
 * @return void
 */
void StateParado::acelerar() {
     if (vehiculo->getCombustible() > 0) {
	            // El vehiculo se pone en marcha. Aumenta la velocidad y cambiamos de estado
	            //estado = EN_MARCHA;
	            vehiculo->setEstado(new StateEnMarcha(vehiculo));
	            cout << "El vehiculo se encuentra ahora EN MARCHA" << endl;
	            vehiculo->modificarVelocidad(10);
	            vehiculo->modificarCombustible(-10);
    }   else   {
        //estado = SIN COMBUSTIBLE
        vehiculo->setEstado(new StateSinCombustible(vehiculo));
        cout << "El vehiculo se encuentra ahora SIN COMBUSTIBLE" << endl;
    }
}

/**
 * @return void
 */
void StateParado::frenar() {
    cout << "El vehiculo ya esta parado" << endl;
}

/**
 * @return void
 */
void StateParado::contacto() {
    this->vehiculo->setEstado(new StateApagado(vehiculo));
    cout << "El vehiculo se encuentra ahora APAGADO"  << endl;
}
