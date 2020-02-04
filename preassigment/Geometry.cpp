#include "Geometry.h"
#include <iostream>
using namespace std;

Geometry::Geometry()
{
	Radius = 0;
	Length = 0;
	Width = 0;
	Base = 0;
	Height = 0;
	Area = 0;
}

Geometry::Geometry(float radius, float length, float width, float base, float height, float area)
{
	Radius = radius;
	Length = length;
	Width = width;
	Base = base;
	Height = height;
	Area = area;
}

void Geometry::getAreaOfCircle()
{
	cout << "enter the radius: " << endl;
	cin >> Radius;
	if (Radius <= 0) 
	{
		cout << "error" << endl;
	}
	else 
	{
		Area = (22.0 / 7) * Radius;
		cout << "area of the circle is:" << Area << endl;
	}
}

void Geometry::getAreaOfRectangle()
{
	cout << "enter the length and the Width" << endl;
	cin >> Length;
	cin >> Width;
	if (Length <= 0 || Width <= 0) 
	{
		cout << "error" << endl;
	}
	else 
	{
		Area = Length * Width;
		cout << "area of the rectangle is " << Area << endl;
	}
}

void Geometry::getAreaOfTriangle()
{
	cout << "enter the base and the height" << endl;
	cin >> Base;
	cin >> Height;
	if (Base <= 0 || Height <= 0)
	{
		cout << "error" << endl;
	}
	else 
	{
		Area = Base * Height * 0.5;
		cout << "area of the triangle is " << Area << endl;
	}
}
