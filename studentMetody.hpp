#pragma once
#include <string>
//chyba asocjacja
class AddressSeparate
 {
	 std::string street;
	 int houseNo;
 public:
	 AddressSeparate(std::string street, int house);
	 std::string getStreet();
	 void setStreet(std::string street);
	 int getHouseNo();
	 void setHouseNo(int house);
 };

 class StudentSeparate
 {
	 AddressSeparate& address;
 public:
	 StudentSeparate(AddressSeparate& address);
	 int getHouseNo();
	 std::string getStreet();
 };

 //agregacja lub kompozycja
 
class Student {

    struct Address
	{
		std::string street;
		int houseNo;
	};

	Address address;

public:     
	Student(std::string street, int houseNo);
};