#include "Account2.hpp"


std::string Account::generateBankNumber()
{
	return std::string();
}

Account::Account()
{
	balance;
}

Account::Account(const Account& old)
{
	this->balance = old.balance;

}

int Account::wihtdraw(int amount)
{
	if (amount > balance)
	{
		std::cout << "nie masz wystarczajaco œrodków na wyplate" << std::endl;
	}
	else
	{
		(balance -= amount);
	}
	return balance;
}

void Account::deposit(int amount)
{
	balance += amount;
}

int Account::getBalance()
{
	return balance;
}

Account::~Account()
{

}

void Account::ChooseAccountType(Account::accType)
{
	this->choosenAccType = choosenAccType;
}

