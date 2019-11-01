#include "Tetraedre.h"

Tetraedre::Tetraedre() : TriangleEq()
{
}

double Tetraedre::aire()
{
	return sqrt(3) * pow(TriangleEq::cote1, 2);
}

double Tetraedre::face()
{
	return TriangleEq::aire();
}

double Tetraedre::volume()
{
	return pow(TriangleEq::cote1, 3) * sqrt(2) / 12;

}

double Tetraedre::hauteur()
{
	return sqrt(6) / 3 * TriangleEq::cote1;
}

void Tetraedre::afficher()
{
	std::cout << *this << std::endl;
}

std::istream& operator>>(std::istream& is, Tetraedre& tetraedre)
{
	std::string line;

	while (is >> line)
	{
		//TODO
	}

	return is;
}

std::ostream& operator<<(std::ostream& os, const Tetraedre& tetraedre)
{
	//TODO
	os << " Not implemented (Tetraedre)";
	return os;
}
