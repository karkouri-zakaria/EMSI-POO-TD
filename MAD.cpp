#include "MAD.h"
#include<iostream>
MAD::MAD() :val(0) {}
MAD::MAD(double v) :val(v){}
void MAD::afficher() const
{
	std::cout << val << std::endl;
}
void MAD::operator=(const MAD m)
{
	val = m.val;
}
void MAD::operator+(const MAD m) {
	this->val += m.val;
}
void MAD::operator-(const MAD m ) {
	this->val -= m.val;
}
void MAD::operator*(double p)
{
	val = val * p;
}
bool MAD::operator<(const MAD& m)
{
	return((val < m.val) ? true : false);
}