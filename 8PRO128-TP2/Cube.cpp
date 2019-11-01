#include "Cube.h"

Cube::Cube() : Carre()
{
	base = new Carre();
}

Cube::~Cube()
{
	delete base;
}

double Cube::aire() 
{
	return 6 * base->aire();
}

double Cube::face() 
{
	return base->aire();
}

double Cube::volume() 
{
	return pow(cote, 3);
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
