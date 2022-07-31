#pragma once
#include <string>
#include <iostream>


class Account
{
	int balance=0;
	std::string numberAcc{};
	std::string nameSurname{};
	std::string idNumber{};
	std::string generateBankNumber();

public:
	Account();
	Account(const Account& old);
	int wihtdraw(int amount);
	void deposit(int amount);
	int getBalance();
	~Account();

};