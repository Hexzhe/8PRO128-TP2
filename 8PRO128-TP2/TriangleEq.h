#pragma once
#include "Triangle.h"

class TriangleEq :
	public Triangle
{
public:
	TriangleEq();
	~TriangleEq() {};

	double cote;

	double aire();
	double perimetre();
	double hauteur();

	void afficher();

	friend std::istream& operator>>(std::istream& is, TriangleEq& triangleEq) 
	{
		std::string line;

		while (is >> line)
		{
			//TODO
		}

		return is;
	}

	friend std::ostream& operator<<(std::ostream& os, const TriangleEq& triangleEq)
	{
		//TODO
		os << " Not implemented (TriangleEq)";
		return os;
	}
};
