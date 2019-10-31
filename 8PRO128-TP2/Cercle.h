#pragma once
#include "Ellipse.h"
#include <cmath>

class Cercle :
	public Ellipse
{
public : 
	double rayon;

	double aire();
	double perimetre();
	double diametre();
	void afficher();
};

