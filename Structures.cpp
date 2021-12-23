// Structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
