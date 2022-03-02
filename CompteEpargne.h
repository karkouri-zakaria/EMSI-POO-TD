#pragma once
#include"Compte.h"
#include"Compte.h"
#include"MAD.h"
class CompteEpargne:public Compte
{
private:
	double TauxInteret;
public:
	CompteEpargne(MAD, Client*, double);
	void calculInteret();
};

