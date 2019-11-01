#include "TriangleEq.h"

TriangleEq::TriangleEq() : Triangle()
{
}

double TriangleEq::aire() 
{
	return Triangle::aire();
}

double TriangleEq::perimetre() 
{
	return Triangle::perimetre();
}

double TriangleEq::hauteur() 
{
	return Triangle::cote1 * sqrt(3) / 2;
}

void TriangleEq::afficher() 
{
	std::cout << *this << std::endl;
}

std::istream& operator>>(std::istream& is, TriangleEq& triangleEq)
{
	is >> triangleEq.cote1;
	triangleEq.cote3 = triangleEq.cote2 = triangleEq.cote1;

	return is;
}

std::ostream& operator<<(std::ostream& os, const TriangleEq& triangleEq)
{
	//TODO
	os << " Not implemented (TriangleEq)";
	return os;
}
