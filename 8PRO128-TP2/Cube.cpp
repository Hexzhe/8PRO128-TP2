#include "Cube.h"

Cube::Cube() : Carre()
{
}

double Cube::aire() 
{
	return 6 * Carre::aire();
}

double Cube::face() 
{
	return Carre::aire();
}

double Cube::volume() 
{
	return pow(Carre::largeur, 3);
}

void Cube::afficher() 
{
	std::cout << *this << std::endl;

	//TODO: Output header if file empty
	//TODO: output (append or create) in a file "results{Name}.txt"
}

std::string Cube::getEntete()
{
	//TODO
	return "=====TODO=====";
}

std::istream& operator>>(std::istream& is, Cube& cube)
{
	is >> cube.largeur >> cube.longueur;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Cube& cube)
{
	//TODO
	os << " Not implemented (Cube)";
	return os;
}
