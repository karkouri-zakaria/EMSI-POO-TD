#pragma once
#include "Point.h"

class Cercle
{
private:
	Point c;
	double R;
	const double pi = 3.1415 ;
	
public:
	//Cercle();
	Cercle(Point c, double R);
	void Affiche() const;
	void changR(double R);
	void TransC(double dx,double dy);
	double Surface()const;
	double Perimetre()const;
	bool Egal(const Cercle &C2)const;
	bool Appar(const Point &a) const;


};
