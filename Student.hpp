//2.3.Zaimplementuj klas� student(Student), kt�ra pozwala na :
//� ustawienie imienia oraz nazwiska
//� przekazanie 5 ocen z przedmiotu
//� wyliczenie �redniej


#pragma once
#include <string>
#include <iostream>

class Student
{
	std::string name, surname;
	int gradesNumber = 0;
	int* gradesTab= nullptr;


public:
	Student();
	~Student();
	int howMany(int gradesNumber);
	std::string getName(std::string name);
	std::string getSurname(std::string surname);
	void makeGradesTab(double gradeOne);
	double avr(int gradesNumber);

};