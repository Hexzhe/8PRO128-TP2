#pragma once
#include "Ellipse.h"

class Cercle :
	public Ellipse
{
public : 
	Cercle();
	~Cercle() {};

	double rayon;

	double aire();
	double perimetre();
	double diametre();
	void afficher();
};
