#pragma once
#include "Ellipse.h"

class Cercle :
	public Ellipse
{
public : 
	Cercle();
	~Cercle() {};

	double rayon;

	double aire();
	double perimetre();
	double diametre();

	void afficher();

	friend std::istream& operator>>(std::istream& is, Cercle& cercle) 
	{
		std::string line;

		while (is >> line)
		{
			//TODO
		}

		return is;
	}

	friend std::ostream& operator<<(std::ostream& os, const Cercle& cercle)
	{
		//TODO
		os << " Not implemented (Cercle)";
		return os;
	}
};
