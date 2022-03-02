#pragma once
#include "Compte.h"
#include"Compte.h"
#include"MAD.h"
class CompteCourant :public Compte
{
private:
	MAD decouvert;
public:
	void crediter(MAD) override;
};
