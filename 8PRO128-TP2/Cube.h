#pragma once
#include "Carre.h"

class Cube :
	public Carre
{
public:
	Cube();
	~Cube();

	Carre* base;

	double aire();
	double face();
	double volume();

	void afficher();

	friend std::istream& operator>>(std::istream& is, Cube& cube);
	friend std::ostream& operator<<(std::ostream& os, const Cube& cube);
};
