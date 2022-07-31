#include <iostream>
#include <string.h>
#include "MyClass.hpp"
#include "Shape.hpp"
#include "Account.hpp"
#include "Student.hpp"
#include "Const.hpp"
#include "Animal.hpp"

int main()
{


}

//void student()
//{
//
//	std::string studentname = "klaudia";
//	std::string studentsurname = "tracz";
//	int quantity = 0;
//
//	double singleGrade = 0;
//
//
//	Student first; //student 1 
//	std::cout << "imie: " << first.getName(studentname) << std::endl;
//	std::cout << "nazwisko: " << first.getSurname(studentsurname) << std::endl;
//	std::cout << "podaj iloœæ ocen z przedmiotu: " << std::endl;
//	std::cin >> quantity;
//
//	first.howMany(quantity); // przekazanie ze quantity sa tymi ktore beda uzyte w tablicy
//	
//	first.makeGradesTab(singleGrade);
//
//	std::cout << first.avr(quantity) << std::endl;
//
//
//	std::cout << std::endl;
//
//}

//void inharitanceRestaurant()
//{
//	//Animal* pa = new Lion(); pa->roar();
//	std::cout << "Co podac? 1-zupa, 2-glowne" << std::endl;
//	int select =0;
//	std::cin >> select;
//	Dish* dish;
//	
//	if (select == 1)
//	{
//		dish = new Soup(200);
//	}
//	else
//	{
//		dish = new MainDish(500);
//	}
//
//	std::cout << "kcal:" << dish-> getKcal() << std::endl;


	//kenlenr pyta co sobie zyczymy
	//jezeli 1->zupa
//	jezeli 2-> stworz danie glowne
	//za kazdym razem jak uzytkownik napisze "eat" wywolujemy metode eat
	//jezeli danie sie skonczy (kcal ==o) wychodzimy z programu
//	return 0;
//}

//Dish* dish;
//if ()
//dish = new Soup(200);
//else dish = MainDish(500);

//void teslaDiamondProblem()
//{
//	Tesla modelX;
//
//}
//
//void staticBinding()
//{
//
//	Lion* lion = new Lion();
//	lion->feast();
//	lion->roar();
//	lion->sleep();
//	delete lion;
//
//	Animal* animal = new Lion();
//	animal->sleep();
//	animal->roar();
//
//	delete animal;
//}



//void foo()
//{
//	std::cout << std::endl;
//	std::cout <<"metoda" << std::endl;
//
//	Cat cat;
//	Cat *kitty=new Cat();
//	std::cout << "koniec metoda" << std::endl;
//	std::cout << std::endl;
//	delete kitty;
//}
//
//
//	void constructorChain()
//	{
//		Dog dog;
//		std::cout << std::endl;
//		foo();
//		std::cout << std::endl;
//
//	}










	//Account prv; //clasa account z nadanym obiektem prv 
	//prv.deposit(150);
	//std::cout << prv.getBalance() << std::endl;
	//int cash = prv.wihtdraw(100);
	//std::cout << prv.getBalance() << std::endl;
	//cash = prv.wihtdraw(100);
	//std::cout << prv.getBalance() << " " << cash << std::endl;



	//MyClass o1, o2; // klasa MyClass o obiewkcie o1
	//o1.setVariable(16);
	//int value = o1.getVariable();
	//int value2 = o2.getVariable();
	//std::cout << value << " " << value2 << std::endl;

	//Rectangle rect;
	////duzo jakeigos kodu 
	//rect.setDimensions(3, 7);
	//std::cout << rect.getField() << "  " << rect.getCircuit() << std::endl;

	//Rectangle rect2; //z konstryktorem parametryzowanym
	//std::cout << rect2.getField() << "  " << rect2.getCircuit() << std::endl;

	//Rectangle rect1(rect); //konstruktor kopiujacy
	//std::cout << rect1.getField() << "  " << rect1.getCircuit() << std::endl;


	//Point p1, p2;
	//p1.x = 10;
	//p1.y = 8;
	//p2.x = 3;
	//p2.y = 2;

	//Rectangle rect3(p1, p2);

	//std::cout << rect3.getField() << "  " << rect3.getCircuit() << std::endl;


	//Triangle tri(4, 3, 6, 5);
	//std::cout << "obwod trojkata to: " << tri.getCirucit(4, 3, 6) << std::endl;
	//std::cout << "pole trojkata to: " << tri.getField(4, 5) << std::endl;

	//const LectureRoom roomA;
	//LectureRoom roomB;
	//roomB = roomA; //dziala - nie dziala gdy zrobisz konst pole w room A! 
	////RoomA=roomB // nie dziala
	//// w klasie konst nie mozna zmieniac pol:
	//roomB.size = 300;
	////roomA.size = 330; nie dziala bo size jest konst przez to ze jest w klasie konst



	////przyklad prosty
	//const int a = 15;
	//int b = 25;
	//// a = b; tez nie dziala
	//b = a;

