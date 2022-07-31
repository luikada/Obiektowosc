#include "Account2.h"


std::string Account::generateBankNumber()
{
	return std::string();
}

Account::Account(double balance, accType choosenAcc)
{
	this->choosenAcc = choosenAcc;
	this->balance = balance;

}


Account::Account(const Account& old)
{
	this->balance = old.balance;
	this->choosenAcc = old.choosenAcc;

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

std::string Account::Costs()
{
	if (choosenAcc == accType::buisiness)
	{
		std::string costIs = "10% w skali roku";

		return costIs;
	}	

	else if (choosenAcc == accType::personal)
	{
		std::string costIs = "0% jesli co miesiac transakcja na min 100";

		return costIs;
	}
	else if (choosenAcc == accType::saving)
	{
		std::string costIs = "2% w skali roku";

		return costIs;
	}
}

