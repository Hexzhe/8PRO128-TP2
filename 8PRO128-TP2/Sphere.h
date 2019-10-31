#pragma once
#include "Cercle.h"

class Sphere :
	public Cercle
{
public :
	Sphere();
	~Sphere() {};

	Cercle grandCercle;

	double diametre();
	double aire();
	double volume();
	void afficher();
};
