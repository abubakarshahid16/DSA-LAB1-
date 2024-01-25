#pragma once
#include<cmath>
// class of point 
class Point
{
	// private members
private:
	int x; // x coordinate
	int y; // y coordinate 
public:
	Point();
	Point(int _x, int _y);
	// getter 
	int getterx();
	int gettery();
	void setterx(int _x);
	void settery(int _y);
	double distance(Point _x,Point _y);
	// operator overloading
	void operator=(const Point& d)
	{
		this->x = d.x;
		this->y = d.y;
	}



};

