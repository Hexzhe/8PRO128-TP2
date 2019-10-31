#pragma once
#include "Rectangle.h"
class Carre :
	public Rectangle
{
public:
	double cote;

	double aire();
	double perimetre();
	double diagonale();
	void afficher();
};

