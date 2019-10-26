#ifndef VECTOR_H
#define VECTOR_H

template<class T> class Vector
{
	private:
		int n;
		T *v;
		int index;
		
	public:
		Vector(int = 10);
		Vector(const Vector &);
		Vector &operator=(const Vector &);
		bool add(T);
		void ordenar();
		void println();
		inline int capacidad(){ return this->n; }
		~Vector();
	protected:
};

#endif
