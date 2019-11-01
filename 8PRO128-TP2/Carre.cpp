#include "Carre.h"

Carre::Carre() : Rectangle()
{
}

double Carre::aire() 
{
	return pow(Rectangle::longueur, 2);
}

double Carre::perimetre() 
{
	return 4 * Rectangle::longueur;
}

double Carre::diagonale() 
{
	return sqrt(aire() * 2);
}

void Carre::afficher() 
{
	std::cout << *this << std::endl;
	//TODO: output (append or create) the objects in a file "resultsCarre.txt"
}

std::istream& operator>>(std::istream& is, Carre& carre)
{
	is >> carre.longueur;
	carre.largeur = carre.longueur;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Carre& carre)
{
	//TODO
	os << " Not implemented (Carre)";
	return os;
}
