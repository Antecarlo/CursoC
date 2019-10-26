#include "Light.h"
#include <iostream>
using namespace std;

Light::Light()
{
}

void Light::turnOn()
{
	cout << "La Luz esta encendida" << endl;
}
		
void Light::turnOff()
{
	cout << "La luz esta apagada" << endl;
}

Light::~Light()
{
}
