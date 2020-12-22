/*
	Copyright (c) 2020, Neo Dodti.
	All rights reserved.

	This program will determine
	the cube of a given number
*/

#include <iostream>

int main()
{
	int a, cube;

	std::cout << "Enter the number: ";
	std::cin >> a;
	cube = a * a * a;
	std::cout << "The cube of given number is " << cube << std::endl;
	return 0;
}