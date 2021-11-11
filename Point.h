#pragma once
class Point
{
private:
	double x;
	double y;

public:
	Point();
	Point(double x, double y);
	void Afficher();
	double Distance(Point z2);
	static Point Reff();
	static Point addPoint(double x, double y);
};

