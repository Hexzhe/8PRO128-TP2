#pragma once
#include "Cercle.h"
class Sphere :
	public Cercle
{
public :
	Cercle grandCercle;

	double diametre();
	double aire();
	double volume();
	void affiche();
};

