#pragma once
class Heure
{
protected:
	int h, min, sec;
public :
	Heure(int,int,int);
	void affiche() const;
	bool operator>(const Heure&)const;

};

