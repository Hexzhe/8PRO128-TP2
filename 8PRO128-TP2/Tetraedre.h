#pragma once
#include "TriangleEq.h"

class Tetraedre :
	public TriangleEq
{
public:
	Tetraedre();
	~Tetraedre() {};

	double aire();
	double face();
	double volume();
	double hauteur();

	void afficher();

	friend std::istream& operator>>(std::istream& is, Tetraedre& tetraedre);
	friend std::ostream& operator<<(std::ostream& os, const Tetraedre& tetraedre);
};
