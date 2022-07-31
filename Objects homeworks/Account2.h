//Dla klasy Account, dodaj pole przechowuj¹ce jego typ (biznesowe,prywatne, oszczêdnoœciowe)
//• dodaj metodê zwracaj¹c¹ miesiêczny koszt prowadzenia w zale¿noœci odtypu

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