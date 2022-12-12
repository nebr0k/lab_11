#include <iostream>
#include <typeinfo>
#include"Series.h"
#include"Linear.h"
#include"Exponential.h"
using namespace std;

int main()
{
	Linear l(0, 2);
	Exponential e(2,2);
	Series* test = &l;
	Series* arr[2];
	arr[0] = &e;
	arr[1] = &l;
	for (int i = 0; i < 2; i++)
	{
		cout << "Element 5 = " << arr[i]->calculateElement(5) << endl;
		cout << "SUMMa 5 = " << arr[i]->sum(5) << endl;
		cout << endl;
	}


	cout << typeid(l).name() << endl; 
	cout << typeid(e).name() << endl; 
	cout << typeid(test).name() << endl;
	cout << typeid(*test).name() << endl;
}
