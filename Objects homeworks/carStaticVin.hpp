#pragma once
#include <iomanip>
#include <iostream>
#include <string.h>
//Zaimplementuj klas� samoch�d(Car), kt�ra b�dzie mia�a klas�
//wewn�trzn� obs�uguj�c� silnik(Engine) :
//	� silnik ma pojemno�� i typ(Diesel, Petrol)
//	� w silniku mo�na wymieni� olej
//	� samoch�d przechodzi coroczny serwis

//6.2 dla kazdego nowo stworzonego silnika nadaj mu automatycznie,
//unikalny numer VIN w podanym formacie 
// diesel-1 petrol-2 || zaokraglona pojemnosc np 17 (dwie cyfry) || ID 4 cyfry 

class sCar
{
	class sEngine
	{
		static std::string Id;
		static std::string Vin;
		std::string _typeOfEngine;
		double _capacity;
		static const std::string location;
	public:
		sEngine();
		~sEngine();
		void setId(std::string carId);
		void setCapacity(double capacity);
		void setTypeOfEngine(std::string typeOfengine);
		static std::string realVinNumber(sEngine &sengine);
	};


	sEngine sengine;
	std::string carVin;
	static int carCount;

public:
	sCar(std::string typeOfEngine, double capacity);
	std::string getVin();
	void carInspection(int year);
	void changeOil(double levelOfOil);
	static int carNO();
	~sCar();

};
