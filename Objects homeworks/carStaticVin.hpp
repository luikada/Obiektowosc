#pragma once
#include <iomanip>
#include <iostream>
#include <string.h>
//Zaimplementuj klasê samochód(Car), która bêdzie mia³a klasê
//wewnêtrzn¹ obs³uguj¹c¹ silnik(Engine) :
//	• silnik ma pojemnoœæ i typ(Diesel, Petrol)
//	• w silniku mo¿na wymieniæ olej
//	• samochód przechodzi coroczny serwis

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
