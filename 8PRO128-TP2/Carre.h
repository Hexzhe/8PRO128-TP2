#pragma once
#include "Rectangle.h"

class Carre :
	public Rectangle
{
public:
	Carre();
	~Carre() {};

	double aire();
	double perimetre();
	double diagonale();

	void afficher();

	friend std::istream& operator>>(std::istream& is, Carre& carre);
	friend std::ostream& operator<<(std::ostream& os, const Carre& carre);
};
