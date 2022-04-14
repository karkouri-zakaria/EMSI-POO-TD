#pragma once
#include<iostream>
#include<assert.h>
#include"Element.h"
#include"List_C.h"
using namespace std;
template<class T> class Element;

template<class T>
class File{
private:
    liste_C<T> liste_C;

public:
    void enfiler(const T& Data);
    void defiler();
    T& top() const;
    int taille() const;
    bool est_Vide() const;
    void afficher() const;
};

template <typename T>
void File <T> ::enfiler(const T& Data){
    liste_C.inserer(liste_C.taille(), Data);
}

template <typename T>
void File <T> ::defiler() {
    liste_C.supprimer(0);
}

template <typename T>
T& File <T> ::top() const {
    return liste_C[0];
}

template <typename T>
bool File <T> ::est_Vide() const {
    if (liste_C.taille() == 0) { return true; }
    return false;
}

template <typename T>
int File <T> ::taille() const {
    return liste_C.taille();
}

template <typename T>
void File <T> ::afficher() const {
    liste_C.afficher();
}

/*
template<class T>
class File
{
private:
    int len;
    Element <T>* Sommet, queue;
    Element <T>* CreerElement(const T& Data);
public;
    File();
    void enfiler(const T& Data);
    void defiler();
    T& top() const;
    int taille() const;
    bool est_Vide() const;
    void afficher() const;
    ~File();

};

template <typename T>
File <T> ::File() :Sommet(nullptr), len(0) {}



template <typename T>
Element <T>* File <T> ::CreerElement(const T& Data) {
    Element <T>* temp = new Element <T>;
    temp->Data = Data;
    temp->Next = nullptr;
    return temp;
}

template <typename T>
void File <T> ::enfiler(const T& Data){
    Element <T>* N = CreerElement(Data);
    if (len == 0) {Sommet = queue = N;}
    else {
        queue->Next = N;
        queue = N;
    }
    len++;
}

template <typename T>
void File <T> ::defiler() {
    assert(len!=0);
    Element <T>* del = Sommet;
    Sommet = Sommet->Next;
    delete del;
    len--;
}

template <typename T>
T& File <T> ::top() const {
    assert(len != 0);
    return Sommet->Data;
}

template <typename T>
bool File <T> ::est_Vide() const {
    if (len == 0) { return true; }
    return false;
}

template <typename T>
int File <T> ::taille() const {
    return len;
}

template <typename T>
void File <T> ::afficher() const {
    assert(len != 0);
    Element <T>* M = Sommet;
    while (M != nullptr) {
        cout << M->Data << endl;
        M = M->Next;
    }
}

template <typename T>
File <T> :: ~File(){
    Element <T>* del = Sommet;
    while (Sommet != nullptr) {
        Sommet = Sommet->Next;
        delete del;
        del = Sommet;
    }
}
*/