/*
	Copyright (c) 2020, Neo Dodti.
	All rights reserved.

	This program will determine
	the greater of two numbers
*/

#include <iostream>

int main()
{
	int a, b;

	std::cout << "Enter first number: ";
	std::cin >> a;
	std::cout << "Enter second number: ";
	std::cin >> b;

	if (a == b)
		std::cout << "Both are equal." << std::endl;
	else if (a > b)
		std::cout << "First number is greater than second number." << std::endl;
	else
		std::cout << "Second number is greater than first number." << std::endl;

	return 0;
}