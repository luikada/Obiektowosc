#pragma once
class Car
{
public:
	Car();
	~Car();
};

class ElectricCar : virtual Car
{
public:
	ElectricCar();
	~ElectricCar();
};

class AutoTransmisionCar :virtual Car
{
public:
	AutoTransmisionCar();
	~AutoTransmisionCar();
};

class Tesla :public ElectricCar, public AutoTransmisionCar
{
public: 
	Tesla();
	~Tesla();
};