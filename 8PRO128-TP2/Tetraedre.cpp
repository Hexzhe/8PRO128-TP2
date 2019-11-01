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

	//TODO: Output header if file empty
	//TODO: output (append or create) in a file "results{Name}.txt"
}

std::string Tetraedre::getEntete()
{
	//TODO
	return "=====TODO=====";
}

std::istream& operator>>(std::istream& is, Tetraedre& tetraedre)
{
	is >> tetraedre.cote1;
	tetraedre.cote3 = tetraedre.cote2 = tetraedre.cote1;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Tetraedre& tetraedre)
{
	//TODO
	os << " Not implemented (Tetraedre)";
	return os;
}
