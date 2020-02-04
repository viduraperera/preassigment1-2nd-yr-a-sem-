// preassigment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Geometry.h"

int main()
{
	using  namespace std;
	int number;

	do
	{
		Geometry* a;
		a = new Geometry();

		cout << "Geometry Calculator" << endl;
		cout << "1. Calculate the Area of a Circle" << endl;
		cout << "2. Calculate the Area of a Rectangle" << endl;
		cout << "3. Calculate the Area of a Triangle" << endl;
		cout << "4. exit" << endl;
		cout << "enter the choice (1-4)" << endl;
		cin >> number;

		if (number == 1)
		{
			a->getAreaOfCircle();
			delete a;
		}
		else if (number == 2)
		{
			a->getAreaOfRectangle();
			delete a;
		}
		else if (number == 3)
		{
			a->getAreaOfTriangle();
			delete a;
		}
		else
		{
			cout << "invalid number" << endl;
		}
	}
		while (number != 4);
	cout << "exit" << endl;
}

