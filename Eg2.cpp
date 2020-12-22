/*
	Copyright (c) 2020, Neo Dodti.
	All rights reserved.

	This program will determine
	whether a given number is
	even or not
*/

#include <iostream>

int main()
{
	int num;

	std::cout << "Enter a number: ";
	std::cin >> num;

	if (num % 2 == 0)
		std::cout << num << " is an even number" << std::endl;
	else
		std::cout << num << " is not an even number" << std::endl;

	return 0;
}