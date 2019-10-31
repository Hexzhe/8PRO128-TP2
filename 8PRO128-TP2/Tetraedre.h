#pragma once
#include "TriangleEq.h"

class Tetraedre :
	public TriangleEq
{
public:
	Tetraedre();
	~Tetraedre() {};

	Triangle base;

	double aire();
	double face();
	double volume();
	double hauteur();
	void afficher();
};
