#pragma once
#include <iostream>
#include <string.h>
//Zaimplementuj klasê samochód(Car), która bêdzie mia³a klasê
//wewnêtrzn¹ obs³uguj¹c¹ silnik(Engine) :
//	• silnik ma pojemnoœæ i typ(Diesel, Petrol)
//	• w silniku mo¿na wymieniæ olej
//	• samochód przechodzi coroczny serwis

class Car
{
		class Engine 
		{
	public:
		std::string typeOfEngine = {};
		double capacity=0;
		};


	Engine engine;
	std::string carModel={};

public:
	Car(std::string typeOfEngine, double capacity);
	void carInspection(int year);
	void changeOil(double levelOfOil);



};
