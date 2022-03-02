#include "Client.h"
#include<iostream>
static int cpt = 0;
Client::Client(std::string nom, std::string prenom) :mat(Client::cpt++) {
	this->nom = nom;
	this->prenom = prenom;
}