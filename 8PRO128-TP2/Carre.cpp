#include "Carre.h"

Carre::Carre() : Rectangle()
{
}

double Carre::aire() 
{
	return pow(Rectangle::largeur, 2);
}

double Carre::perimetre() 
{
	return 4 * Rectangle::largeur;
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
	is >> carre.largeur;
	carre.longueur = carre.largeur;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Carre& carre)
{
	//TODO
	os << " Not implemented (Carre)";
	return os;
}
