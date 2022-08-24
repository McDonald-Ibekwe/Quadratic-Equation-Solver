#include "QuadraticEquation.h"

const char* nameOfValue(const char* name)
{
	return name;
}

double getValue(const char* varName, 
	std::function<const char*(const char*)> fPtr)
{
	std::cout << fPtr(varName) << " = ";
	double input{};
	std::cin >> input;
	return input;
}

void printRoots(double a, double b, double c)
{
	// declare the roots
	double x1{};
	double x2{};

	// declare the discriminant
	double discriminant{ (b * b) - (4 * a * c) };

	if (discriminant > 0) {
		std::cout << "The roots are real and distinct.\n";
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		x2 = (-b - sqrt(discriminant)) / (2 * a);
		std::cout << "x1 = " << x1 << ",  x2 = " << x2 << '\n';
	}
	else if(discriminant == 0) {
		std::cout << "The roots are real and equal.\n";
		x2 = x1 = -b / (2 * a);
		std::cout << "x1 = " << x1 << ",  x2 = " << x2 << '\n';
	}
	else {
		std::cout << "The roots are imaginary.\n";
		double real = -b / (2 * a);
		double imaginary = sqrt((4 * a * c) - (b * b)) / (2 * a);
		std::cout << "x1 = " << real << " + " 
			<< imaginary << "i\n" << "x2 = "
			<< real << " - " << imaginary << "i\n";
	}
}