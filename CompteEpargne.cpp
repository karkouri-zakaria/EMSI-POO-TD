#include "CompteEpargne.h"
#include"Compte.h"
#include"MAD.h"

CompteEpargne::CompteEpargne(MAD solde, Client* prop, double TI):Compte(solde,prop)
{
	
	TauxInteret = (TI > 0 && TI <= 100) ? TI : 0;
}

void CompteEpargne::calculInteret()
{
	solde.operator*(1-TauxInteret * 0.01);
}
