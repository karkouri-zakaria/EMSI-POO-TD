// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"List_C.h"
using namespace std;


int main() {

    // Instanciation d'une Liste_C chainée Liste_C
    Liste_C <int> Liste_C;

    // Insertion de six noeuds dans la Liste_C
    Liste_C.inserer(0, 5);
    Liste_C.inserer(1, 3);
    Liste_C.inserer(2, 2);
    Liste_C.inserer(3, 4);
    Liste_C.inserer(4, 8);

    // Afficher la Liste_C apres le tri
    Liste_C.Sort();
    Liste_C.afficher();

    cout << '\n';

    // afficher les valeurs de trois noeuds
    cout << "Afficher les donnees de quelques noeuds" << endl;
    Liste_C.operator[](1) = 11;
    cout << Liste_C.operator[](1) << endl;
    cout << Liste_C.operator[](3) << endl;
    cout << Liste_C.operator[](4) << endl;

    cout << '\n';

    // Supprimer trois noeuds
    cout << "Supprimer quelques noeuds et afficher la Liste_C" << endl;
    Liste_C.supprimer(0);
    Liste_C.supprimer(3);
    Liste_C.afficher();

    cout << '\n';

    // Afficher la Liste_C apres la suppression
    Liste_C.afficher();
    cout << "Nombre de noeuds dans la Liste_C: " << Liste_C.taille();
    
    return 0   

;
}
