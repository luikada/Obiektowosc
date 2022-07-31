
#include <iostream>
//#include "Account2.h"
//#include "calculator.hpp"
//#include "Car.hpp"
#include "carStaticVin.hpp"

int main()
{

	sCar clio ("diesel", 2.3);
	clio.carInspection(2000);
	clio.changeOil(1.1);
	clio.carNO();
	//clio.getVin();// nie dziala


}


//void Car()
//{
//
//	Car volvo("Diesel", 1.6);
//	volvo.carInspection(2021);
//	volvo.changeOil(1.0);
//
//
//	std::cout << std::endl;
//
//}
//
//void accout2()
//{
//	Account mineAcc(1000.10, accType::buisiness);
//	std::cout << mineAcc.getBalance() << std::endl;
//	std::cout << "Cost of your accoutn is: " << mineAcc.Costs() << std::endl;
//
//
//
//}
//
//
//void calc()
//{
//	int number = 0;
//	int numberTwo = 0;
//	char znak = 0;
//
//	std::cout << "Podaj liczbe: " << std::endl;
//	std::cin >> number;
//	std::cout << "Podaj znak: " << std::endl;
//	std::cin >> znak;
//	std::cout << "Podaj liczbe: " << std::endl;
//	std::cin >> numberTwo;
//
//
//	Calculator action;
//	std::cout << action.calculation(znak, number, numberTwo) << std::endl;
//
//
// }