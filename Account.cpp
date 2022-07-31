#include "Account.hpp"


std::string Account::generateBankNumber()
{
	return std::string();
}

Account::Account()
{
	balance; 
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

