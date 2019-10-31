#pragma once
#include "Triangle.h"
class TriangleEq :
	public Triangle
{

public:
	double cote;

	double aire();
	double perimetre();
	double hauteur();
	void afficher();
};

