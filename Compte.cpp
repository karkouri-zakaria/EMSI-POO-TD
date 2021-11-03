#include "Compte.h"

bool Compte::retirerArgent(double M)
{if (this-> solde < M){ return false; }
else { return true; }}

void Compte::desposerArgent(double M)
{this->solde += M;}

double Compte::consulterSolde()
{return this->solde;}

bool Compte::transfererArgent(double M, Compte* R)
{
	if (this->retirerArgent(M)) { R->desposerArgent(M); return true; }
	else { return false; }}
