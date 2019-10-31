#pragma once
#include "Figure.h"
class Rectangle :
	public Figure
{

public:
	double largeur;
	double longueur;

	double aire();
	double perimetre();
	double diagonale();
	void afficher();
};

