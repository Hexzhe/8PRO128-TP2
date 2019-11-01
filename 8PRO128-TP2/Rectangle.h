#pragma once
#include "Figure.h"

class Rectangle :
	public Figure
{
public:
	Rectangle();
	~Rectangle() {};

	double largeur;
	double longueur;

	double aire();
	double perimetre();
	double diagonale();
	void afficher();

	friend std::istream& operator>>(std::istream& is, Rectangle& rectangle) {
		//TODO
		return is;
	}

	friend std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle)
	{
		//TODO
		os << " Not implemented";
		return os;
	}
};
