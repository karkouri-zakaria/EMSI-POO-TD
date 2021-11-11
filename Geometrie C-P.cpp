// Geometrie C-P.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cercle.h"

int main()
{
	Point c(2,3);
	Point d(1, 6);
	Point e(-7,6);
	Cercle C1(c,5);
	Cercle C2(c, 5);
	C1.changR(8);
	C1.TransC(d);
	C1.Affiche();
	C1.Surface();
	C1.Perimetre();
	C1.Egal(C2);
	C1.Appar(c);
	C1.Appar(e);
	

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
