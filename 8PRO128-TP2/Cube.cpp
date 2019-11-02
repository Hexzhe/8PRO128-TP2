#include "Cube.h"

Cube::Cube() : Carre()
{
}

double Cube::aire() const
{
	return 6 * Carre::aire();
}

double Cube::face() const
{
	return Carre::aire();
}

double Cube::volume() const
{
	return pow(Carre::largeur, 3);
}

void Cube::afficher() const
{
	std::cout << *this << std::endl;

	//TODO: Output header if file empty
	//TODO: output (append or create) in a file "results{Name}.txt"
}

std::string Cube::getEntete()
{
	return "cote      aire      face      vol";
}

std::istream& operator>>(std::istream& is, Cube& cube)
{
	is >> cube.largeur >> cube.longueur;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Cube& cube)
{
	os << std::setw(9) << std::setprecision(2) << std::fixed << cube.Carre::largeur << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << cube.aire() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << cube.face() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << cube.volume();

	return os;
}
