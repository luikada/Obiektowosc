#pragma once
#include <iostream>
#include <string.h>
//Zaimplementuj klas� samoch�d(Car), kt�ra b�dzie mia�a klas�
//wewn�trzn� obs�uguj�c� silnik(Engine) :
//	� silnik ma pojemno�� i typ(Diesel, Petrol)
//	� w silniku mo�na wymieni� olej
//	� samoch�d przechodzi coroczny serwis

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
