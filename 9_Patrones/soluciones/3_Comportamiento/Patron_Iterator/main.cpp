#include "Vector2.h"
#include "IteradorVector.h"

#include <iostream>
using namespace std;

int main(){
	Vector2 vector2(5);
	IteradorVector *it = vector2.iterador();
	
	cout << "Elementos del Vector2: " << endl;
	while (it->hasNext())
		cout << it->next() << endl;	
		
	delete it;	
}
