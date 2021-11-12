#include <iostream>
#include "Point.h"
using namespace std;

Point::Point()
{
	this->x=0;
	this->y=0;
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

void Point::Afficher() const
{
	cout << "(" << this->x << "," << this->y << ")";
}

double Point::Distance(const Point &z2)const
{
	return sqrt(pow(this->x - z2.x, 2) + pow(this->y - z2.y, 2));
}

void Point::translate(double dx, double dy)
{
	this->x = this->x + dx;
	this->y = this->y + dy;
}

Point Point::Origine()
{
	Point p;
	return(p);
}
