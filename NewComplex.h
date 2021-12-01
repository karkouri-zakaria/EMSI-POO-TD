#pragma once
class Complex
{
private:
	double x;
	double y;
	double* Polaire; //(module,argument)
	const double pi = 3.1615;
	static int NoCom;
	Complex();
	Complex(double x,double y);
public:
	Complex* Create();
	Complex* Create(double x,double y);
	~Complex();
	Complex(const Complex& z);
	Complex operator=(const Complex& z);
	bool operator==(const Complex& z) const;
	void Afficher() const;
	void AfficherPol() const;
	Complex Conjuge()const;
	Complex operator+(const Complex&)const;
	Complex operator-(const Complex&)const;
	Complex operator*(const Complex&)const;
};

