#pragma once
class Point
{
private:
	double x;
	double y;
	Point();

public:
	Point(double x, double y);
	void Afficher() const;
	double Distance( const Point &z2) const;
	void translate(double dx, double dy);
	static Point Origin();
};
