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

	friend std::istream& operator>>(std::istream& is, Sphere& sphere) {
		//TODO
		return is;
	}

	friend std::ostream& operator<<(std::ostream& os, const Sphere& sphere)
	{
		//TODO
		os << " Not implemented";
		return os;
	}
};
