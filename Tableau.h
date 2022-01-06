#pragma once
class Tableau
{
protected:
	int l;
	float* tab;
public:
	Tableau(int);
	~Tableau();
	Tableau(const Tableau&);
	Tableau& operator=(const Tableau&);
	float& operator[](int);

};

