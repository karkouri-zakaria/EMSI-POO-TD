    #pragma once
    #include<iostream>
    #include<assert.h>
#include"Element.h"
    using namespace std;

    template <typename T>
    class Liste_C
    {
    private:
        int len;
        Element <T>* Sommet;
        Element <T>* CreerElement(const T& Data);

    public:
        Liste_C();
        int taille() const;
        void inserer(int pos, const T& Data);
        void supprimer(int pos);
        T& operator[](int pos) ;
        void afficher() const;
        void Sort(); //par selection
        ~Liste_C();
    };

    template <typename T>
    Element <T>* Liste_C <T>::CreerElement(const T& Data) {
        Element <T>* temp = new Element <T>;
        temp->Data = Data;
        temp->next = nullptr;
        return temp;
    }

    template <typename T>
    Liste_C <T> ::Liste_C() :Sommet(nullptr), len(0) {}

    template <typename T>
    int Liste_C <T> ::taille() const { return len; }

    template <typename T>
    void Liste_C <T> ::inserer(int pos, const T& Data){
        assert(!(pos < 0 || pos > len));
        Element <T>* N = CreerElement(Data);

        if (pos == 0) {
            N->next = Sommet;
            Sommet = N;
        }
        else {
            Element <T>* M = Sommet;
            for (int i = 1; i < pos; i++) {
                M = M->next;
            }
            N->next = M->next;
            M->next = N;
        }
        len++;
    }

    template <typename T>
    void Liste_C <T> ::supprimer(int pos) {
        assert(!(pos < 0 || pos > len - 1));
        if (pos == 0) {
            Element <T>* del = Sommet;
            Sommet = Sommet->next;
            delete del;
        }
        else {
            Element <T>* M = Sommet;
            for (int i = 0; i < pos - 1; i++) {
                M = M->next;
            }
            Element <T>* del = M->next;
            M->next = M->next->next;
            delete del;
        }
        len--;
    }

    template <typename T>
    T& Liste_C <T> ::operator[](int pos) {
        assert(!(pos < 0 || pos > len - 1));
        if (pos == 0) {
            return Sommet->Data;
        }
        else {
            Element <T>* M = Sommet;
            for (int i = 0; i < pos; i++) {
                M = M->next;
            }
            return M->Data;
        }
    }

    template <typename T>
    void Liste_C <T> ::afficher() const {
        if (len == 0) {
            cout << "La Liste_C est vide!" << endl;
            return;
        }
        Element <T>* M = Sommet;
        while (M != nullptr) {
            cout << M->Data << endl;
            M = M->next;
        }
    }

    template<typename T>
    void Liste_C<T>::Sort(){
        Element <T>* I, *J;
        T p;
        if (Sommet != nullptr){
            for (I= Sommet;I->next!=nullptr;I=I->next){
                for (J = I->next; J!= nullptr; J = J->next){
                    if (J->Data < I->Data) {
                        p = J->Data;
                        J->Data = I->Data;
                        I->Data = p;
                    }
                }
            }
        }
    }

    template <typename T>
    Liste_C <T> :: ~Liste_C()
    {
        Element <T>* del = Sommet;
        while (Sommet != nullptr) {
            Sommet = Sommet->next;
            delete del;
            del = Sommet;
        }
    }