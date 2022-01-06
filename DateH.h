#pragma once
#include"Heure.h"

class DateH : public Heure
{
private:
	int D, M, Y;
public:
	DateH(int h=0,int min=0,int sec=0,int D=1,int M=1,int Y=1900);
	void affiche()const;
	bool operator>(const DateH&)const;

};

