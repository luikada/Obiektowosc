#include "MyClass.hpp"
//class MyClass {
//public:
//	int variable = 42; //private by default
//
//};

 
	int MyClass::getVariable() //get i nazwa zmiennej sie pisze przy getterach
	{
		return variable;
	}
	void MyClass::setVariable (int param)
	{
		variable = param;
	}


