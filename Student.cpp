#include "Student.hpp"
#include <string.h>
#include <iostream>

Student::Student()  //stworzenia konstruktora ktory tworzy tablice dynamiczna do ocen.
{
	this->gradesNumber = gradesNumber;

	gradesTab= new int[gradesNumber];

	for (int i = 0; i < gradesNumber; i++)
	{
		gradesTab[i]=0;  
		i++;
	}

}


Student::~Student() 
{
	delete[] gradesTab;
}

int Student::howMany(int gradesNumber)   //metoda wczutyjaca ile jest ocen
{
	return this->gradesNumber = gradesNumber;

}
std::string Student::getName(std::string name) //metoda wczutyjaca imie
{return name;
} 

std::string Student::getSurname(std::string surname) //metoda wczutyjaca nazwisko
{
	return surname;
}

void Student::makeGradesTab(double oneGrade)
{
	int times = 0;
	while (gradesNumber > times)
	{
		std::cout << "podaj ocene: " << std::endl;
		std::cin >> oneGrade;

		for (int i = 0; i < gradesNumber; i++)
		{
			gradesTab[i] = oneGrade;

		}

		times++;

	}

}

double Student::avr(int gradesNumber)  // nie dziala
{
	double sum = 0.0;
	double result = 0.0;

	for (int i = 0; i < gradesNumber; i++)
	{
		sum += gradesTab[i];
		i++;
	}
	result = sum / (gradesNumber - 1);

	return result;
}

