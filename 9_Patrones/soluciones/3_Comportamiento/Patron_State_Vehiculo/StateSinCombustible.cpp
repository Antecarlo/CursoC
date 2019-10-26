#include "StateSinCombustible.h"

StateSinCombustible::StateSinCombustible(Vehiculo *vehiculo):State(vehiculo) {

}

/**
 * @return void
 */
void StateSinCombustible::acelerar() {
   cout << "ERROR: El vehiculo se encuentra sin combustible" << endl;
}


void StateSinCombustible::frenar() {
   cout << "ERROR: El vehiculo se encuentra sin combustible" << endl;
}


void StateSinCombustible::contacto() {
    cout << "ERROR: El vehiculo se encuentra sin combustible" << endl;
}
