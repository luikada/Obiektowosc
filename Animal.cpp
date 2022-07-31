#include "Animal.hpp"


Animal::Animal()
{
	std::cout << "konstruktor animal" << std::endl;

}

Animal::Animal(std::string _name)
{
}

Animal::~Animal()
{
	std::cout << "dekonstruktor animal" << std::endl;


}

void Animal::roar()
{
	std::cout << "Animal ROARRRRRR" << std::endl;
}

void Animal::sleep()
{
	std::cout << "Animal ZzZzZZzzZZzzzzz" << std::endl;

}


Mammal::Mammal()
{
	std::cout << "konstruktor mammal" << std::endl;

}

Mammal::~Mammal()

{
	std::cout << "dekonstruktor mammal" << std::endl;

}

Dog::Dog()
{
	std::cout << "konstruktor dog" << std::endl;

}

Dog::~Dog()
{
	std::cout << "dekonstruktor dog" << std::endl;

}

Cat::Cat()
{
	std::cout << "konstruktor cat" << std::endl;

}

Cat::~Cat()
{
	std::cout << "dekonstruktor cat" << std::endl;

}

void Lion::roar()
{
	std::cout << "Lion ROARRRRRR" << std::endl;

}

void Lion::feast()
{
	std::cout << "Lion omnomnom" << std::endl;

}
