#include<iostream>
#include "DateH.h"

DateH::DateH(int h = 0, int min = 0, int sec = 0, int D = 1, int M = 1, int Y = 1900) :Heure(h,min,sec)
{
	this->h = h;
	this->min = min;
	this->sec = sec;
	this->D = D;
	this->M = M;
	this->Y = Y;
	if (!(0 < h && h < 24)) { this->h = 0;}
	if (!(0 < min && min < 60)) { this->min = 0; };
	if (!(0 < sec && sec < 60)) { this->sec = 0; };
	if (!(0 < D && D < 32)) { this->D = 1; };
	if (!(0 < M && M < 13)) { this->M = 1; };
	if (!(1899 < Y && Y < 2501)) { this->Y = 1900; };
}

void DateH::affiche() const
{
	if (this->D < 10) { std::cout << "0"; }
	std::cout << this->D << "/";
	if (this->M < 10) { std::cout << "0"; }
	std::cout << this->M << "/";
	if (this->Y < 10) { std::cout << "0"; }
	std::cout << this->Y << " ";
	this->affiche();
}

bool DateH::operator>(const DateH& Dt) const
{
	if (this->Y<=Dt.Y){
		if (this->M <= Dt.M) {
			if (this->D <= Dt.D) {
				if (this->h <= Dt.h) {
					if (this->min <= Dt.min) {
						if (this->sec <= Dt.sec) {
							return false;
						}
					}
				}
			}
		}
	} return true;
}
