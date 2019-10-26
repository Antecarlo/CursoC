#ifndef VECTOR2_H
#define VECTOR2_H

template <class T> class Vector2
{
	// Att. privados
	T *ptr;
	int n, pos;
	
	// Att. privados & estaticos
	static int instancias;
	
	// Metodos privados
	void copiar(const Vector2 &);
	
	template <class R> friend void print(const Vector2<T> &v){
		for (int i=0 ; i < v.n ; i++)
			cout << v.ptr[i] << endl;
	}
	
	public:
		Vector2(int=10);
		Vector2(const Vector2 &);
		Vector2 &operator=(const Vector2 &);
		inline const T *getPtr(){ return this->ptr; }
		bool add(T);
		void imprimir() const;
		T get(int) const;
		void set(int, T);
		int size() const;
		static int getInstancias();
		~Vector2();
	protected:
};

#endif
