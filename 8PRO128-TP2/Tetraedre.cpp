#include "Tetraedre.h"

Tetraedre::Tetraedre() : TriangleEq()
{
}

double Tetraedre::aire() const
{
	return sqrt(3) * pow(TriangleEq::cote1, 2);
}

double Tetraedre::face() const
{
	return TriangleEq::aire();
}

double Tetraedre::volume() const
{
	return pow(TriangleEq::cote1, 3) * sqrt(2) / 12;

}

double Tetraedre::hauteur() const
{
	return sqrt(6) / 3 * TriangleEq::cote1;
}

void Tetraedre::afficher() const
{
	std::cout << *this << std::endl;

	//TODO: Output header if file empty
	//TODO: output (append or create) in a file "results{Name}.txt"
}

std::string Tetraedre::getEntete()
{
	return "cote      aire      face      vol       haut";
}

std::istream& operator>>(std::istream& is, Tetraedre& tetraedre)
{
	is >> tetraedre.cote1;
	tetraedre.cote3 = tetraedre.cote2 = tetraedre.cote1;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Tetraedre& tetraedre)
{
	os << std::setw(9) << std::setprecision(2) << std::fixed << tetraedre.TriangleEq::cote1 << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << tetraedre.aire() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << tetraedre.face() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << tetraedre.volume() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << tetraedre.hauteur();

	return os;
}
