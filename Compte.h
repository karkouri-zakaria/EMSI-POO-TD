#pragma once
#include <iostream>
#include <string>
using namespace std;
class Compte
{
private:
	int numCompte;
	string nomProprietaire;
	double solde;
public:
	Compte(int numCompte,string nomProprietaire,double solde);
	bool retirerArgent(double M);
	void desposerArgent(double M);
	double consulterSolde();
	bool transfererArgent(double M, Compte *R);


};

