/*
	Copyright (c) 2020, Neo Dodti.
	All rights reserved.

	This program will calculate
	the area of a given circle
*/

#include <iostream>

int main()
{
	double rad;
	double area;

	std::cout << "Enter radius of circle: ";
	std::cin >> rad;

	area = 22/7 * rad * rad;

	std::cout << "Area of circle is " << area << std::endl;

	return 0;
}