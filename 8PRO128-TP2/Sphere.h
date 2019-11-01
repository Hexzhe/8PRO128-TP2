#pragma once
#include "Cercle.h"

class Sphere :
	public Cercle
{
public :
	Sphere();
	~Sphere() {};

	double diametre();
	double aire();
	double volume();

	void afficher();
	static std::string getEntete();

	friend std::istream& operator>>(std::istream& is, Sphere& sphere);
	friend std::ostream& operator<<(std::ostream& os, const Sphere& sphere);
};
