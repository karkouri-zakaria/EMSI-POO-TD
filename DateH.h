#pragma once
#include"Heure.h"

class DateH : public Heure
{
private:
	int D, M, Y;
public:
	DateH(int,int,int,int,int,int);
	void Show()const;
	bool operator>(const DateH&)const;

};

