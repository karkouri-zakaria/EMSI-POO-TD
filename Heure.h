#pragma once
class Heure
{
protected:
	int h, min, sec;
public :
	Heure(int h=0,int min=0,int sec=0);
	void affiche() const;
	bool operator>(const Heure&)const;
	int convertTOsec() const;

};

