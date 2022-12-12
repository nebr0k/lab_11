#include "Linear.h"

int Linear::calculateElement(int n)
{
    return a1 + d * (n - 1);
    
}

int Linear::sum(int n)
{
    return (2 * a1 + (n - 1) * d) / 2 * n;
    
}
Linear::Linear(int a1, int d)
{
	this->a1 = a1;
	this->d = d;
}

void Linear::setA1(int a1)
{
	this->a1 = a1;
}

void Linear::setD(int d)
{
	this->d = d;
}

int Linear::getA1()
{
	return a1;
}

int Linear::getD()
{
	return d;
}