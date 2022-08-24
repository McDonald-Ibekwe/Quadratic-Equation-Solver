#pragma once
#include <iostream>
#include <functional>
#include <cmath>

const char* nameOfValue(const char* name);
double getValue(const char* varName, 
	std::function<const char*(const char*)> fPtr);
void printRoots(double a, double b, double c);

