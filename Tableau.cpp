#include "Tableau.h"
#include"assert.h"

Tableau::Tableau(int l)
{
    this->l = l;
    this->tab = new float[this->l];
}

Tableau::~Tableau()
{
    delete[] this->tab;
    this->tab = nullptr;
}

Tableau::Tableau(const Tableau& T)
{
    this->l = T.l;
    this->tab = new float[this->l];
    for (int i = 0; i < this->l-1; i++) { this->tab[i] = T.tab[i]; }
}

Tableau& Tableau::operator=(const Tableau& T)
{
    if (this != &T) {
        delete[] this->tab;
        this->tab = nullptr;
        this->l = T.l;
        this->tab = new float[this->l];
        for (int i = 0; i < this->l - 1; i++) { this->tab[i] = T.tab[i]; }
    } return(*this);
}

float& Tableau::operator[](int i)
{
    assert(i >= 0 && i < this->l);
    return this->tab[i];
}
