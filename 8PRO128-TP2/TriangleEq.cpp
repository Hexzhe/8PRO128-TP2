#include "TriangleEq.h"

TriangleEq::TriangleEq() : Triangle()
{
	cote = 0.0;
}

double TriangleEq::aire() 
{
	return pow(cote, 2) * sqrt(3) / 4;
}

double TriangleEq::perimetre() 
{
	return cote * 3;
}

double TriangleEq::hauteur() 
{
	return cote * sqrt(3) / 2;
}

void TriangleEq::afficher() 
{
	std::cout << *this << std::endl;
}

std::istream& operator>>(std::istream& is, TriangleEq& triangleEq)
{
	std::string line;

	while (is >> line)
	{
		//TODO
	}

	return is;
}

std::ostream& operator<<(std::ostream& os, const TriangleEq& triangleEq)
{
	//TODO
	os << " Not implemented (TriangleEq)";
	return os;
}
