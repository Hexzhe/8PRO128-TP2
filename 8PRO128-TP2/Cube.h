#pragma once
#include "Carre.h"

class Cube :
	public Carre
{
public:
	Cube();
	~Cube() {};

	Carre base;

	double aire();
	double face();
	double volume();
	void afficher();
};
