#include "plantilla.h"

template <class T, class R, class S> Plantilla<T,R,S>::Plantilla(T t, R r, S s)
{
	this->t = t;
	this->r = r;
	this->s = s;
}

template <class T, class R, class S> void Plantilla<T,R,S>::print()
{
	cout << "T: " << this->t << " " 
		 << "R: " << this->r << " " 
		 << "S: " << this->s << endl;
}

template <class T, class R, class S> Plantilla<T,R,S>::~Plantilla()
{
}
