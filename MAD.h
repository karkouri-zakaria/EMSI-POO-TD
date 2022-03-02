#pragma once
class MAD
{
private:
	double val;
public:
	MAD();
	MAD(double);
	void afficher() const;
	void operator=(const MAD);
	void operator+(const MAD);
	void operator-(const MAD);
	void operator*(double);
	bool operator<(const MAD&);
};

