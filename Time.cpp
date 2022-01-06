#include <iostream>
#include"Heure.h"
#include"DateH.h"

int main()
{
    Heure H1(8, 18, 8);
    Heure H2(8, 18, 3);
    H1.affiche();
    H2.affiche();
    std::cout << H1.operator>(H2) << std::endl;
    DateH D1(5, 13, 39,16, 8, 2004);
    DateH D2(5, 13, 39, 16, 8, 2003);
    D1.Show();
    D2.Show();
    std::cout << D1.operator>(D2) << std::endl;
}
