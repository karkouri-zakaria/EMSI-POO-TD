#include<iostream>
#include "Pile.h"
#include"assert.h"
#include"string.h"
using namespace std;
Pile::Pile(int TM=0)
{
    this->TM = TM;
    this->stack = new double[this->TM];
}

Pile::Pile(const Pile& P)
{
    this->TM=P.TM;
    this->stack = new double[this->TM];
    this->S = P.S;
    for (int i = 0; i < this->S; i++)
    {
        this->stack[i] = P.stack[i];
    }
}

Pile Pile::operator=(const Pile& P)
{
    if (this != &P) {
        delete[] this->stack;
        this->stack = nullptr;
        this->TM = P.TM;
        this->S = P.S;
        this->stack = new double[this->TM];
        for (int i = 0; i < this->S; i++)
        {
            this->stack[i] = P.stack[i];
        }
    }
    return *this;
}

Pile::~Pile()
{
    delete[] this->stack;
    this->stack = nullptr;
}

void Pile::Empiler(double e)
{
    assert(this->S <= this->TM);
    this->stack[S] = e;
    this->S += 1;
}

double Pile::Dépiler()
{   
    assert(S > 0);
    double e = this->stack[S];
    this->stack[S] = NULL;
    this->S -= 1;
    return e;

}

bool Pile::Pilevide() const
{
    return this->S <= 0;
}

void Pile::AfficherPile() const
{
    int i = 1;
    while (i < this->S+1)
    {
        cout << this->stack[S - i] << " ";
        i++;
    }
    cout << ":" << this->S << "(" << this->TM << ")" << endl;
}

double Pile::sommet() const
{
    return this->stack[S];
}

bool Pile::Pilepleine() const
{
    return this->S >= this->TM;
}

void Pile::ChangerTaille(int TM)
{
    assert(TM > this->S);
    this->TM = TM;
}


