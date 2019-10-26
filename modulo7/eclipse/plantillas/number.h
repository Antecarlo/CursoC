
/*

	Implementacion de clases genericas

*/

#ifndef NUMBER_H

#define NUMBER_H

#include <iostream>

template <class T> class Number {

	friend void print(const Number<T> & n){ //Podria no ser friend
		std::cout << n.att << std::endl;
			}


	friend std::ostream & operator << (std::ostream & os, const Number<T> & number){
		return os << number.att;
	}


	private:
		T att;
	public:
		Number(T n);


		T get(){return this->att;}
		Number <T> operator+(const Number<T> & n);
		void set(T n){this->att=n;} 

		~Number();
};


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	template<class T> Number<T>::Number(T n): att(n){}


	template <class T> Number<T> Number<T>::operator+(const Number<T> & n){
		return Number (this->att + n.att);
		//return *this + n; ERROR, esta llamando al operador todo el rato con this +
	}

	template<class T> Number<T>::~Number(){}

#endif
