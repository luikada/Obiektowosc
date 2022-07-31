 #include "studentMetody.hpp"

//konstruktor z lista inicjalizujaca
AddressSeparate::AddressSeparate(std::string _street, int _houseNo) :
	street(_street),
	houseNo(_houseNo)
{
}

std::string AddressSeparate::getStreet()
{
	return street;

}

void AddressSeparate::setStreet(std::string street)
{
	this->street = street;
}

int AddressSeparate::getHouseNo()
{
	return houseNo;
}

void AddressSeparate::setHouseNo(int house)
{
	this->houseNo = house;
}


//lista inicjalizujaca + referencja l. inicj gdy konstruktor kopiujacy
StudentSeparate::StudentSeparate(AddressSeparate& address) :
	address(address) // -> address = _address;
{

}

int StudentSeparate::getHouseNo()
{
	return address.getHouseNo();
}

std::string StudentSeparate::getStreet()
{
	return address.getStreet();
}

Student::Student(std::string street, int houseNo)
{
	address.houseNo = houseNo;
	address.street = street;

}



