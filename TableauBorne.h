#pragma once
#include"Tableau.h"
class TableauBorne : public Tableau
{
private:
	float inf, sup;
public:
	TableauBorne(int, float, float);
	float operator[](int);
	float& operator()(int,float);

};

