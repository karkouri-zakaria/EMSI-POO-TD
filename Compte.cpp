#include "Compte.h"

Compte::Compte(int numCompte, string nomProprietaire, double solde)
{this->numCompte = numCompte;this->nomProprietaire = nomProprietaire;this->solde = solde;}

bool Compte::retirerArgent(double M)
{if (this-> solde < M){return false; }
else {this->solde-=M; return true; }}

void Compte::desposerArgent(double M)
{this->solde += M;}

void Compte::consulterSolde()
{cout << this->solde << endl;}

bool Compte::transfererArgent(double M, Compte* R)
{if (this->retirerArgent(M)) { R->desposerArgent(M); return true; }
else { return false; }}

Compte::~Compte()
{cout << "Le compte est ferme avec succes  " << endl;}
