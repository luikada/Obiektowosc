
#include <iostream>
#include "calculator.hpp"

int Calculator::calculation(char x, int a, int b)
{
	int result = 0;

	switch (x)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
	case '*':
		result = a * b;
	case '/':
		if (b == !0)
		{
			result = a / b;
		}
		else
		{
			std::cout << "druga liczba nie moze byc 0";
		}

	default:
		break;
	}

	return result;

}



