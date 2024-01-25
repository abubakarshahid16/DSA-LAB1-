#include "Point.h"
// default constructor 
Point::Point()
{
	x = 0;
	y = 0;
}
// paremtrized constructor 
Point::Point(int _x,int _y)
{
	this->x = _x;
	this->y = _y;
}
// getter for x
int Point::getterx()
{
	return this->x;
}
// getter for y
int Point::gettery()
{
	return this->y;
}
// setter for y 
void Point::settery(int _y)
{
	this->y = _y;
}
// setter for x
void Point::setterx(int _x)
{
	this->x = _x;
}
// distance function 
double Point::distance(Point z,Point t)
{
	double totalDistance;
	totalDistance= sqrt(pow((t.x - z.x), 2) + pow((t.y - z.y), 2));
	return totalDistance;
}
