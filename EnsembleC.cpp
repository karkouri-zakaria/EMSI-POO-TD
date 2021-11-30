#include <iostream>
#include <string>
#include "Complex.h"
using namespace std;

int main()
{
	Complex C1(5, -7);
	Complex C2(8, -1);
	Complex C3=C1+C2;
	Complex C4 = C1*C1.Conjuge();
	C3.Afficher();
	C4.AfficherPol();
	cout << C1.operator==(C2);
}

