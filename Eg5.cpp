/*
	Copyright (c) 2020, Neo Dodti.
	All rights reserved.

	This program will calculate
	the amount based on given principal,
	rate of interest and time period
*/

#include <iostream>

int main()
{
	float p, r, t, a;

	std::cout << "\nEnter princiapl: ";
	std::cin >> p;
	std::cout << "Enter rate: ";
	std::cin >> r;
	std::cout << "Enter time: ";
	std::cin >> t;

	a = ((p * r * t)/100);

	std::cout << "Amount is Rs. " << a << std::endl;

	return 0;
}