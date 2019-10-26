#include "ColegaConcreto2.h"

ColegaConcreto2::ColegaConcreto2(IMediador * mediador):Colega(mediador) {}

void ColegaConcreto2::recibir(string mensaje) {
    cout << "Colega Concreto 2: " << mensaje << endl;
}

ColegaConcreto2::~ColegaConcreto2() {}
