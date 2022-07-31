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
		std::cout << "przegl¹d niewa¿ny, musisz jechaæ do stacji kontroli pojazdów"<< std::endl;
	 }
	else
	{
		std::cout << "przegl¹d wa¿ny, mo¿esz jechaæ dalej" << std::endl;
	}
}

void Car::changeOil(double levelOfOil)
{
	if ((2 - levelOfOil) > 0)
	{
		std::cout << "poziom oleju ok, jedŸ dalej" << std::endl;

	}
	else
	{
		std::cout << "zalecana zmiana oleju, jad¹c dalej ryzykujesz zatarcie silnika" << std::endl;

	}
}
