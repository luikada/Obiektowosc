#include "happyCars.h"
#include <iostream>

Car::Car()
{
	std::cout << "konstr Car" << std::endl;
}

Car::~Car()
{
	std::cout << "Dekonstr Car" << std::endl;

}

ElectricCar::ElectricCar()
{

	std::cout << "konstr ElectricCar" << std::endl;

}

ElectricCar::~ElectricCar()
{
	std::cout << "Dekonstr ElectricCar" << std::endl;

}

AutoTransmisionCar::AutoTransmisionCar()
{
	std::cout << "konstr AutoTransmisionCar" << std::endl;

}

AutoTransmisionCar::~AutoTransmisionCar()
{
	std::cout << "Dekonstr AutoTransmisionCar" << std::endl;

}

Tesla::Tesla()
{
	std::cout << "konstr Tesla" << std::endl;

}

Tesla::~Tesla()
{
	std::cout << "Dekonstr Tesla" << std::endl;

}
