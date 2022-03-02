#pragma once
#include"Client.h"
#include"MAD.h"
class Compte
{
private:
	static int cp;
	const int nmcomp;
	Client* prop;
	MAD solde;
public:
	Compte(MAD, Client*);
	virtual void crediter(MAD);
	virtual void debiter(MAD);
	virtual bool trans(Compte&, MAD);
	virtual void consulter() const;
};