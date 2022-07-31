//Dla klasy Account, dodaj pole przechowuj�ce jego typ (biznesowe,prywatne, oszcz�dno�ciowe)
//� dodaj metod� zwracaj�c� miesi�czny koszt prowadzenia w zale�no�ci odtypu

#pragma once
#include <string>
#include <iostream>

enum class accType { buisiness, personal, saving };

class Account
{
	double balance = 0;
	std::string numberAcc{};
	std::string nameSurname{};
	std::string idNumber{};
	std::string generateBankNumber();


public:
	accType choosenAcc;
	Account(double balance, accType choosenAcc);
	Account(const Account& old);
	int wihtdraw(int amount);
	void deposit(int amount);
	int getBalance();
	~Account();

	std::string Costs();

};