#pragma once
#include<iostream>
class Client
{
private:
	static int cpt;
	const int mat;
	std::string nom;
	std::string prenom;
public:
	Client(std::string, std::string);
};

