#pragma once
#include "Rectangle.h"

class Carre :
	public Rectangle
{
public:
	Carre();
	~Carre() {};

	double cote;

	double aire();
	double perimetre();
	double diagonale();

	void afficher();

	friend std::istream& operator>>(std::istream& is, Carre& carre) {
		//TODO
		return is;
	}

	friend std::ostream& operator<<(std::ostream& os, const Carre& carre)
	{
		//TODO
		os << " Not implemented (Carre)";
		return os;
	}
};
