#include <iostream>
#include "NewComplex.h"
#include"math.h"
using namespace std;

int Complex::NoCom = 0;

Complex::Complex()
{
	Complex::NoCom++;
	this->x = 0;
	this->y = 0;
	this->Polaire=new(double[2]);
}

Complex::Complex(double x, double y)
{
	Complex::NoCom++;
	this->x = x;
	this->y = y;
	this->Polaire = new(double[2]);
	this->Polaire[0] = sqrt(pow(this->x, 2) + pow(this->y, 2));
	this->Polaire[1] = (atan(this->y / this->x)*180/pi); //degré
}

Complex* Complex::Create()
{
	Complex* P = new Complex();
	return P;
}

Complex* Complex::Create(double x, double y)
{
	 Complex* P = new Complex(1, 2);
	 return P;
}

Complex::~Complex()
{
	delete[] Polaire;
	this->Polaire = nullptr;
}

Complex::Complex(const Complex& z)
{
	Complex::NoCom++;
	this->x = z.x;
	this->y = z.y;
	this->Polaire = new(double[2]);
        //this->Polaire[0] = z.Polaire[0];
        //this->Polaire[1] =z.Polaire[1];
	for (size_t i = 0; i < 2; i++)
	{
		this->Polaire[i] = z.Polaire[i];
	}
}

Complex Complex::operator=(const Complex& z)
{
	if (this != &z) {
		this->x = z.x;
		this->y = z.y;
		delete[] this->Polaire;
		this->Polaire = nullptr;
		this->Polaire = new(double[2]);
		//this->Polaire[0] = z.Polaire[0];
                //this->Polaire[1] =z.Polaire[1];
		for (size_t i = 0; i < 2; i++)
		{
			this->Polaire[i] = z.Polaire[i];
		}
	}
	return *this;
}

bool Complex::operator==(const Complex& z) const
{
	if (this->x==z.x && this->y==z.y){
		return true;
	}
	return false;
}

void Complex::Afficher() const
{
	if (this->y==1){
		cout << this->x << " + i" << endl;
	}
	else if (this->y == -1) {
		cout << this->x << " - i" << endl;
	}
	else if(this->y<0) {
		cout << this->x << " - i" << -this->y << endl;
	}
	else{
		cout << this->x << " + i" << this->y << endl;
	}
}

void Complex::AfficherPol() const
{
	cout << Complex::NoCom << ":" << "(" << this->Polaire[0] << " , " << this->Polaire[1] << ")" << endl;
}

Complex Complex::Conjuge() const
{
	Complex Z(this->x, -this->y);
	return Z;
}
Complex Complex::operator+(const Complex& z) const
{
	Complex Z(this->x + z.x, this->y + z.y);
	return Z;
}

Complex Complex::operator-(const Complex& z) const
{
	Complex Z(this->x - z.x, this->y - z.y);
	return Z;
}

Complex Complex::operator*(const Complex& z) const
{
	Complex Z((this->x*z.x-this->y*z.y),(this->x*z.y+this->y*z.x));
	return Z;
}
