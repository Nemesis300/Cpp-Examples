/*
	Copyright (c) 2020, Neo Dodti.
	All rights reserved.

	This program will determine
	whether a given tringle is
	equilateral, scalene or isoceles
*/

#include <iostream>

int main()
{
	float a, b, c;
	std::cout << "Enter the length of first side of triangle: ";
	std::cin >> a;
	std::cout << "Enter the length of second side of triangle: ";
	std::cin >> b;
	std::cout << "Enter the length of third side of triangle: ";
	std::cin >> c;

	if (a == b && b == c)
		std::cout << "It is an equilateral triangle" << std::endl;
	else if (a != b && b != c)
		std::cout << "It is an scalene triangle" << std::endl;
	else
		std::cout << "It is a isoceles triangle" << std::endl;
	
	return 0;
}