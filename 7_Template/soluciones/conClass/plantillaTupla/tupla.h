#ifndef TUPLA_H
#define TUPLA_H

template<class T>class Tupla
{
	private:
		T a;
		T b;
		
	public:
		Tupla();
		Tupla(T a, T b){ this->a = a; this->b = b; }
		T get(int);
		void set(int, T);
		~Tupla();
	protected:
};

#endif
