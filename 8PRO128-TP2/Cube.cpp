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
	return pow(Carre::longueur, 3);
}

void Cube::afficher() 
{
	std::cout << *this << std::endl;
}

std::istream& operator>>(std::istream& is, Cube& cube)
{
	std::string line;

	while (is >> line)
	{
		//TODO
	}

	return is;
}

std::ostream& operator<<(std::ostream& os, const Cube& cube)
{
	//TODO
	os << " Not implemented (Cube)";
	return os;
}
