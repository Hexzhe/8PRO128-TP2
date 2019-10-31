#pragma once
#include "Figure.h"

class Triangle :
	public Figure
{
public:
	Triangle();
	~Triangle() {};

	double cote1;
	double cote2;
	double cote3;

	double aire();
	double perimetre();
	double hauteur(int cote);
	void afficher();
};
