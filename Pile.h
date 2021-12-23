#pragma once
class Pile
{
private:
	int TM; // Size
	int S=0;
	double* stack;
public:
	Pile(int TM);
	Pile(const Pile&);
	Pile operator=(const Pile&);
	~Pile();
	void Empiler(double);
	double Dépiler();
	bool Pilevide() const;
	void AfficherPile() const;
	double sommet()const;
	bool Pilepleine() const;
	void ChangerTaille(int TM);
	
};

