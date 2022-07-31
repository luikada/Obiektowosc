#pragma once
#include <string>
#include <iostream>

class Profesor;

class Student
{
		struct Address
	{	std::string street;
		int houseNo;
	};

	Address address;
	Profesor* profesor; //chcemy wskazac na obiekt a nie go kopiowac albo deklarowac w kostruktorze
	std::string name;
	
public:
	Student(std::string _street, int _houseNo);
	~Student();

	void setName(std::string name);
	void setProf(Profesor* profesor);
	void sendEmailToProf();

};

class Profesor
{
	Student& student;
	std::string name;

public: 
	Profesor(Student& student);
	~Profesor();
	void setName(std::string name);
	void receiveEmail(std::string emailCopy);

};