#include "Exponential.h"

int Exponential::calculateElement(int n)
{
    return a1 * pow(d, (n - 1));
}

int Exponential::sum(int n)
{
    return a1 * (pow(d, n) - 1) / (d - 1);
}
Exponential::Exponential(int a1, int d)
{
	this->a1 = a1;
	this->d = d;
}

void Exponential::setA1(int a1)
{
	this->a1 = a1;
}

void Exponential::setD(int d)
{
	this->d = d;
}

int Exponential::getA1()
{
	return a1;
}

int Exponential::getD()
{
	return d;
}
