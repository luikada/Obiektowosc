#include "Car.hpp"


Car::Car(std::string typeOfEngine, double capacity)
{
	this->carModel = carModel;

	engine.typeOfEngine = typeOfEngine;
	engine.capacity = capacity;
}

void Car::carInspection(int year)
{

	if ((2022 - year) > 1)
	{
		std::cout << "przegl�d niewa�ny, musisz jecha� do stacji kontroli pojazd�w"<< std::endl;
	 }
	else
	{
		std::cout << "przegl�d wa�ny, mo�esz jecha� dalej" << std::endl;
	}
}

void Car::changeOil(double levelOfOil)
{
	if ((2 - levelOfOil) > 0)
	{
		std::cout << "poziom oleju ok, jed� dalej" << std::endl;

	}
	else
	{
		std::cout << "zalecana zmiana oleju, jad�c dalej ryzykujesz zatarcie silnika" << std::endl;

	}
}
