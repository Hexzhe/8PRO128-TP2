#include "Cercle.h"

Cercle::Cercle() : Ellipse()
{
	rayon = 0.0;
}

double Cercle::aire() 
{
	return M_PI * pow(rayon, 2);
}

double Cercle::perimetre() 
{
	return 2 * M_PI * rayon;
}

double Cercle::diametre() 
{
	return 2 * rayon;
}

void Cercle::afficher() 
{
	//TODO: Output header
	std::cout << *this << std::endl;

	//TODO: Output header if file empty
	//TODO: output (append or create) in a file "resultsCarre.txt"
}

std::istream& operator>>(std::istream& is, Cercle& cercle)
{
	is >> cercle.rayon;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Cercle& cercle)
{
	//TODO
	os << " Not implemented (Cercle)";
	return os;
}
