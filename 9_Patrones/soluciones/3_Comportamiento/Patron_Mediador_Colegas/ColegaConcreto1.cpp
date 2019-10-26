#include "ColegaConcreto1.h"
#include "Colega.h"

#include <iostream>
using namespace std;

ColegaConcreto1::ColegaConcreto1(IMediador * mediador):Colega(mediador) {}

void ColegaConcreto1::recibir(string mensaje) {
    cout << "Colega Concreto 1: " << mensaje << endl;
}

ColegaConcreto1::~ColegaConcreto1() {}
