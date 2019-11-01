#include "TriangleEq.h"

TriangleEq::TriangleEq()
{
	//TODO: Don't forget >> override
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
