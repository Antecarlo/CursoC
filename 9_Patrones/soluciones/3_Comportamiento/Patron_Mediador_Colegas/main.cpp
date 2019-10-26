#include "IMediador.h"
#include "Mediador.h"
#include "Colega.h"
#include "ColegaConcreto1.h"
#include "ColegaConcreto2.h"

int main(){
	Mediador *m = new Mediador();
	Colega *c1 = new ColegaConcreto1(m);	
	Colega *c2 = new ColegaConcreto2(m);
	
	m->agregarColega(c1);
	m->agregarColega(c2);
	
	c2->comunicar("ColegaConcreto2 ha cambiado ...");
	delete m;
	
}
