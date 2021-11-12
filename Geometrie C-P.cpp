#include <iostream>
#include "Cercle.h"

int main()
{
	Point c(2,9);
	Cercle C1(c,5);
	Cercle C2(c,5);
	C1.changR(8);
	C1.TransC(1,3);
	C1.Affiche();
	C1.Surface();
	C1.Perimetre();
	C1.Egal(C2);
	C1.Appar(c);
	

}
