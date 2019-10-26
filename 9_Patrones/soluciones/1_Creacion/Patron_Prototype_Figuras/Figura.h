
#ifndef _FIGURA_H
#define _FIGURA_H

#include <string>
using namespace std;

class Figura {
public: 
	Figura(string="black");   
	virtual Figura * clone() = 0; 
	virtual void draw() = 0;
	inline void setColor(string color){this->color = color;}
	~Figura();
protected: 
    string color;
};

#endif //_FIGURA_H
