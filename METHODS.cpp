#include <iostream>
#include <math.h>
#include "CLASS.h"
using namespace std;

GRAD::GRAD(double g, double m, double s)
{
	long double sec = s / 3600;
	long double min = m / 60;
	long double grad = g;
	grad = sec + min + grad;
	element1 = grad;
}

GRAD::GRAD(double g, double m, double s, double g1, double m1, double s1)
{

	long double sec = s / 3600;
	long double min = m / 60;
	long double grad = g;
	grad = sec + min + grad;
	element1 = grad;

	long double sec1 = s1 / 3600;
	long double min1 = m1 / 60;
	long double grad1 = g1;
	grad1 = sec1 + min1 + grad1;
	element2 = grad1;
}

double GRAD::plus()
{
	return (element1 + element2);
}

double GRAD::minus()
{
	return (element1 - element2);
}

double GRAD::mylti(double ch)
{
	return (element1 * ch);
}

double GRAD::div(double ch)
{
	return (element1 / ch);
}

double GRAD::rad()
{
	return element1 * acos(-1) / 180;
}