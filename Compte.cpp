#include "Compte.h"
#include<iostream>
static  int cp = 0;
Compte::Compte(MAD solde, Client* prop) :nmcomp(Compte::cp++) {
	this->solde = solde;
	this->prop = prop;
}
void Compte::consulter()const {
	solde.afficher();
}
void Compte::crediter(MAD m) {
	this->solde.operator-(m);
}
void Compte::debiter(MAD m) {
	this->solde.operator+(m);
}
bool Compte::trans(Compte& C, MAD m) {
	if (m.operator<(solde))
	{
		crediter(m);
		C.debiter(m);
		return true;
	}
	return false;
}