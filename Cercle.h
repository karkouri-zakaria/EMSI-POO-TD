#pragma once
#include "Point.h"

class Cercle
{
private:
	Point c;
	double R;
	const double pi = 3.1415 ;
	
public:
	Cercle();
	Cercle(Point c, double R);
	void Affiche();
	void changR(double R);
	void TransC(Point c);
	double Surface();
	double Perimetre();
	bool Egal(Cercle C2);
	bool Appar(Point a);


};

