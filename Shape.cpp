#include "Shape.hpp"
#include <corecrt_math_defines.h>
#include <math.h>

Rectangle::Rectangle()
{
}
Rectangle::Rectangle(int a, int b)
{
	this->a = a;
	this->b = b;

}

Rectangle::Rectangle(const Rectangle& old)
{
	a = old.a;
	b = old.b;

};
Rectangle::Rectangle( Point ur, Point ll) //liczeni dlugosci i wysokosci bokow 
{
	int witdh = abs(ur.x - ll.x);
	int height = abs(ur.y -ll.y);

	this->a = witdh;
	this->b = height;

};


void Rectangle::setDimensions(int x, int y)
{
	a = x;
	b = y;
}
int Rectangle::getField()
{
	return a*b;
}
int Rectangle::getCircuit()
{
	return 2*a +2*b;
}


void Circle::setDimensions(int r)
{
	 this->r=r;
}
double Circle::getField()
{
	return M_PI*r*r;
}
double Circle::getCircuit()
{	
	return 2*M_PI*r;
}

double Triangle::getCirucit(double a, double b, double c)
{
	return a + b + c;
}

double Triangle::getField(double a, double h)
{
	return(a*h)/2;
}
