#pragma once
#include "TriangleEq.h"

class Tetraedre :
	public TriangleEq
{
private:
	double x;
public:
	Tetraedre();
	~Tetraedre();

	Triangle* base;

	double aire();
	double face();
	double volume();
	double hauteur();

	void afficher();

	friend std::istream& operator>>(std::istream& is, Tetraedre& tetraedre);
	friend std::ostream& operator<<(std::ostream& os, const Tetraedre& tetraedre);
};
