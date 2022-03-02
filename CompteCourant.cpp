#include "CompteCourant.h"
#include"Compte.h"
#include"MAD.h"
#include <assert.h>

void CompteCourant::crediter(MAD m)
{
	MAD s;
	s.operator=(solde);
	solde.operator-(m);
	assert(decouvert.operator<(solde));
	this->solde.operator-(m);
	solde.operator=(s);
}