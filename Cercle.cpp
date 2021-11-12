#include <iostream>
#include "Cercle.h"
using namespace std; 

/*Cercle::Cercle()
{
	this->c = Point::Origin();
	this->R = 0;
}*/

Cercle::Cercle(Point c, double R)
{
	this->c = c;
	this->R = R;
}

void Cercle::Affiche() const
{
	cout << "("; this->c.Afficher(); cout << "," << this->R << ")\n";
}

void Cercle::changR(double R)
{
	this->R = R;
}

void Cercle::TransC(double dx, double dy)
{
	this->c.translate(dx, dy);
}

double Cercle::Surface() const
{
	return pi*pow(this->R,2);
}

double Cercle::Perimetre() const
{
	return pi * this->R * 2;
}

bool Cercle::Egal(const Cercle &C2) const
{
	bool res;
	if (this->c.Distance(C2.c) == 0 and this->R == C2.R) { return true;}
	else { return false; }
}

bool Cercle::Appar(const Point &a) const
{
	bool res;
	if (this->c.Distance(a) == this->R) { return true; }
	else { return false; }
}
