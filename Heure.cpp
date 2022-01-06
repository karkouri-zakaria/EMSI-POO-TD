#include<iostream>
#include "Heure.h"
#include <string.h>   

Heure::Heure(int h=0, int min=0, int sec=0)
{
	this->h = h;
	this->min = min;
	this->sec = sec;
	if (!(0 < h && h < 24)) { this->h = 0; }
	if (!(0 < min && min < 60)) { this->min = 0; };
	if (!(0 < sec && sec < 60)) { this->sec = 0; };
}

void Heure::affiche() const
{
	if (this->h < 10){std::cout <<"0";}
	std::cout << this->h << ":";
	if (this->min < 10) {std::cout << "0";}
	std::cout << this->min << ":";
	if (this->sec < 10) {std::cout << "0";}
	std::cout << this->sec << std::endl;
}

bool Heure::operator>(const Heure& H)const
{
	if (this->h <= H.h) {
		if (this->min <= H.min) {
			if (this->sec <= H.sec) {
				return false;
			}
		}
	} return true;
}
