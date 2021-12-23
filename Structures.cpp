// Structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Pile type double

#include <iostream>
#include"Pile.h"
using namespace std;

int main()
{
	Pile P1(3);
	P1.Empiler(1);
	P1.Empiler(3);
	P1.Empiler(2);

	P1.AfficherPile();
	std::cout << P1.Pilepleine() << endl;
	P1.Dépiler();
	P1.AfficherPile();

	std::cout << P1.Pilevide() << endl;
	std::cout << P1.sommet() << endl;

	Pile P2(P1);
	Pile P3 = P2;
	P2.AfficherPile();
	P3.AfficherPile();
	
	P1.ChangerTaille(5);
	P1.AfficherPile();
}
