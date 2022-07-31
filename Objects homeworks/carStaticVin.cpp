#include "carStaticVin.hpp"

std::string sCar::sEngine::Id = 0;
std::string sCar::sEngine::Vin = 0;
int sCar::carCount=0;
const std::string location;


sCar::sCar(std::string typeOfEngine, double capacity) 
{
	carVin = sCar::sEngine::realVinNumber(sengine);
}

void sCar::carInspection(int year)
{

	if ((2022 - year) > 1)
	{
		std::cout << "przegl¹d niewa¿ny, musisz jechaæ do stacji kontroli pojazdów" << std::endl;
	}
	else
	{
		std::cout << "przegl¹d wa¿ny, mo¿esz jechaæ dalej" << std::endl;
	}
}

void sCar::changeOil(double levelOfOil)
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

std::string sCar::getVin()
{
	return carVin;
}




sCar::sEngine::sEngine()
{
} 

int sCar::carNO()
{
	carCount++;

	return carCount;
}

void sCar::sEngine::setId(std::string carId)
{ 
	Id = carId;

}

void sCar::sEngine::setCapacity(double capacity)
{
	_capacity = capacity;

}

void sCar::sEngine::setTypeOfEngine(std::string typeOfEngine)
{

	_typeOfEngine = typeOfEngine;
	
}

std::string sCar::sEngine::realVinNumber(sEngine& sengine)
{
	if (sengine._typeOfEngine == "diesel")
	{
		Vin[0] = 1;
	}
	else
	{
		Vin[0] = 2;

	}

	Vin.append(location); //dodaje PL

	int x = sengine._capacity * 10; 
	Vin[3] = x;

	sengine.Id= "00" + Vin[0] + Vin[3];

	Vin.append(sengine.Id);

	return Vin;
}

sCar::sEngine::~sEngine()
{

}



sCar::~sCar()
{
	--carCount;
}