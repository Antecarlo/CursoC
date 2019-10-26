
/*

	Implementacion de clases genericas

*/

#ifndef NUMBER_H

#define NUMBER_H

template <class T> class Number {

	private:
		T att;
	public:
		Number(T n);


		T get(){return this->att;}
		Number <T> operator+(const Number<T> & n);
		void set(T n){this->att=n;} 

		~Number();
};

	template<class T> Number<T>::Number(T n): att(n){}
	template<class T> Number<T> Number<T>::operator+(const Number<T> & n){
		return Number (this->att + n.att);	
	}

	template<class T> Number<T>::~Number(){}

#endif
