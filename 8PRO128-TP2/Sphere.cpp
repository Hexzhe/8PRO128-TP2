#include "Sphere.h"

Sphere::Sphere() : Cercle()
{
}

double Sphere::diametre() 
{
	return 2 * Cercle::rayon;
}

double Sphere::aire() 
{
	return 4 * aire();
}

double Sphere::volume()
{
	return 4 * M_PI * pow(Cercle::rayon, 3) / 3;
}

void Sphere::afficher() 
{
	//TODO: Output header
	std::cout << *this << std::endl;

	//TODO: Output header if file empty
	//TODO: output (append or create) in a file "resultsCarre.txt"
}

std::istream& operator>>(std::istream& is, Sphere& sphere)
{
	is >> sphere.rayon;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Sphere& sphere)
{
	//TODO
	os << " Not implemented (Sphere)";
	return os;
}
