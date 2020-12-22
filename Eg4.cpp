/*
	Copyright (c) 2020, Neo Dodti.
	All rights reserved.

	This program will determine
	the factorial of a given number
*/

#include <iostream>

int main()
{
	int num, fact = 1;

	std::cout << "Enter a number: ";
	std::cin >> num;

	for (int i = 1; i <= num; i++)
	{
		fact *= i;

		// For debugging
		// std::cout << "DEBUB: fact = " << fact << ", i = " << i << std::endl;
	}

	std::cout << "Factorial of " << num << " is " << fact << std::endl;

	return 0;
}