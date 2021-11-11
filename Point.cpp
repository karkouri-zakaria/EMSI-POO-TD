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

void Point::Afficher()
{
	cout << "(" << this->x << "," << this->y << ")";
}

double Point::Distance(Point z2)
{
	return sqrt(pow(this->x - z2.x, 2) + pow(this->y - z2.y, 2));
}
