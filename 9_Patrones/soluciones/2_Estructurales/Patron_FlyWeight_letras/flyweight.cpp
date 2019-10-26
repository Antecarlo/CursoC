#include "flyweight.h"
#include <iostream>
using namespace std;

FlyWeight::FlyWeight(string font,int size,COLORS color)
{
	this->font = font;
	this->size_ = size;
	this->color = color;
}

bool FlyWeight::operator==(const FlyWeight &fly)
{
	return color==fly.color && font==fly.font && size_==fly.size_;
}

void FlyWeight::imprimir()
{
	cout << "font: " << font << " size: " 
	     << size_ << " color: " << color << endl;
}

FlyWeight::~FlyWeight()
{
}
