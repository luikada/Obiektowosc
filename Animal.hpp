#pragma once
#include <iostream>

class Animal
{
	std::string name;

public:
	Animal();
	Animal(std::string _name);
	~Animal();
	void roar();
	void  sleep ();
};
class Lion : public Animal
{
public:
	void roar();
	void  feast();
};
class Mammal : public Animal
{
public: 
	Mammal();
	Mammal(std::string _name) : Animal(_name) {};

	~Mammal();

};

class Dog : public Mammal
{
public:
	Dog();
	Dog(std::string _name): Mammal (_name){};
	~Dog();
};

class Cat : public Mammal
{
public:
	Cat();
	~Cat();
};