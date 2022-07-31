#pragma once

struct Point
{
	int x, y;
};

class Rectangle
{
	int a=0, b=0;
public:
	Rectangle(); //konstruktor
	Rectangle(int a, int b); //konstruktor 
	Rectangle(const Rectangle& old); //c-tor kopiujacy
	Rectangle(Point ur,Point ll); //konstruktor

	void setDimensions(int x, int y); // to jest setter na a i b
	int getField();
	int getCircuit();

};



class Circle
{
	int r = 0;
public:
	void setDimensions(int R);
	double getField();
	double getCircuit();

};

class Triangle
{
	double a=0,b=0,c=0,h=0;

public:
	Triangle(double a, double b, double c, double h)
	{
		aSide = a;
		bSide = b;
		cSide = c;
		hLenght = h;
	};

	double getCirucit(double a, double b, double c);
	double getField(double a, double h);
private: 
	double aSide, bSide, cSide, hLenght;

};