#include <iostream>

class Bank {
	std::string number;
	double balance = 0;
public:
	std::string genereteBanknumber()
	{
		return "019290u3874312jh";
	}

	Bank()
	{

	}

	Bank(const Bank &old)
	{
		this->balance = old.balance;
	}

	~Bank()
	{
	}

	double withdraw(double amount) {
		double withdrew = amount;
		if (balance > amount)
		{
			balance -= amount;
		}
		else
		{
			withdrew = balance;
			balance = 0;
		}
		return withdrew;
	}

	double withdraw2(double amount) {
		if (balance >= amount)
		{
			balance -= amount;
		}
		return balance;
	}

	void deposit(double amount) {
		balance += amount;
	}

	double getBalance(); // deklaracja
};

double Bank::getBalance() // definicja
{
	return balance; //return this->balance tez by zadzialalo
}
//void foo()
//{
//	Bank inMethod(0);
//}

//int main() {
//	Bank savingAccount;
//	Bank secondAccount(savingAccount);
//	{
//		Bank another(secondAccount);
//		foo();
//
//	}
//
//
//	Bank secondAccount=savingAccount;  //to samo co linijke wyzej
//	savingAccount.deposit(100);
//	std::cout << savingAccount.getBalance() << std::endl;
//	double cash = savingAccount.withdraw(50);
//	std::cout << cash << " " << savingAccount.getBalance() << std::endl;
//	cash = savingAccount.withdraw(100); // 50
//	std::cout << cash << " " << savingAccount.getBalance() << std::endl;
//	return 0;
//}
