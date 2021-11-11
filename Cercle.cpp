#include <iostream>
#include "Cercle.h"
using namespace std; 

Cercle::Cercle()
{
	this->c = Point();
	this->R = 0;
}

Cercle::Cercle(Point c, double R)
{
	this->c = Point(c);
	this->R = R;
}

void Cercle::Affiche()
{
	cout << "("; this->c.Afficher(); cout << "," << this->R << ")\n";
}

void Cercle::changR(double R)
{
	this->R = R;
}

void Cercle::TransC(Point c)
{
	this->c = c;
}

double Cercle::Surface()
{
	cout << pi * pow(this->R, 2) << endl;
	return pi*pow(this->R,2);
}

double Cercle::Perimetre()
{
	cout << pi * this->R * 2 << endl;
	return pi * this->R * 2;
}

bool Cercle::Egal(Cercle C2)
{
	bool res;
	if (this->c.Distance(C2.c) == 0 and this->R == C2.R) { res= true;}
	else { res= false; }
	cout << res << endl;
	return res;
}

bool Cercle::Appar(Point a)
{
	bool res;
	if (this->c.Distance(a) == this->R) { res = true; }
	else { res = false; }
	cout << res << endl;
	return res;
}

