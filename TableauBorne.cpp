#include "TableauBorne.h"
#include"assert.h"

TableauBorne::TableauBorne(int l, float inf, float sup) : Tableau(l)
{
    this->l = l;
    this->tab = new float[this->l];
    this->inf = this->operator[](0);
    this->sup = this->operator[](this->l-1);
}

float TableauBorne::operator[](int i)
{
    assert(i >= 0 && i < this->l);
    return this->tab[i];
}

float& TableauBorne::operator()(int i, float r)
{
    assert(i >= 0 && i < this->l);
    this->tab[i] = r;
}
