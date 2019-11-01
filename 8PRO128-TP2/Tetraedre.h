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

	friend std::istream& operator>>(std::istream& is, Tetraedre& tetraedre) {
		//TODO
		return is;
	}

	friend std::ostream& operator<<(std::ostream& os, const Tetraedre& tetraedre)
	{
		//TODO
		os << " Not implemented";
		return os;
	}
};
