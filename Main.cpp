#include <iostream>
#include <string>

#include "QuadraticEquation.h"

int main()
{
	// declare variables and get input from getValue function
	double a{ getValue("a", nameOfValue)};
	double b{ getValue("b", nameOfValue)};
	double c{ getValue("c", nameOfValue)};

	// Print the roots of the equation
	printRoots(a, b, c);
	return 0;
}