#pragma once
#include<iostream>
#include"Series.h"
#include<cmath>
using namespace std;
class Linear : public Series
{

private:
	int a1;
	int d;
public:
	Linear(int a1, int d);
	void setA1(int a1);
	void setD(int d);
	int getA1();
	int getD();



	int calculateElement(int n) override;
	int sum(int n) override;
};

