#pragma once
class Geometry
{
private:
	float Radius;
	float Length;
	float Width;
	float Base;
	float Height;
	float Area;
public:
	Geometry();
	Geometry(float radius, float length, float width, float base, float height, float area);
	void getAreaOfCircle();
	void getAreaOfRectangle();
	void getAreaOfTriangle();

};

