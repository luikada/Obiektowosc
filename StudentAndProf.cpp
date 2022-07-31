#include "StudentAndProf.hpp"

Student::Student(std::string _street, int _houseNo) 
{
	address.street = _street;
	address.houseNo = _houseNo;

}

Student::~Student()
{
} 

void Student::setName(std::string name)
{
	this->name = name;
}

void Student::setProf(Profesor* profesor)
{
	this->profesor = profesor;
}

void Student::sendEmailToProf()
{
	std::cout << "wysylam maila do prof" << std::endl;
	profesor->receiveEmail("Witam");
}


Profesor::Profesor(Student& student) : student(student)
{
}

Profesor::~Profesor()
{
}

void Profesor::setName(std::string name)
{
	this->name = name;
}

void Profesor::receiveEmail(std::string emailCopy)
{
	std::cout << "Profesor odebral email" << std::endl << emailCopy << std::endl;

}
