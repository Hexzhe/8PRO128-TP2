#include "Sphere.h"

Sphere::Sphere() : Cercle()
{
	grandCercle = new Cercle();
}

Sphere::~Sphere()
{
	delete grandCercle;
}

double Sphere::diametre() 
{
	return 2 * rayon;
}

double Sphere::aire() 
{
	return 4 * aire();
}

double Sphere::volume()
{
	return 4 * M_PI * pow(rayon, 3) / 3;
}

void Sphere::afficher() 
{
	std::cout << *this << std::endl;
}

std::istream& operator>>(std::istream& is, Sphere& sphere)
{
	std::string line;

	while (is >> line)
	{
		//TODO
	}

	return is;
}

std::ostream& operator<<(std::ostream& os, const Sphere& sphere)
{
	//TODO
	os << " Not implemented (Sphere)";
	return os;
}
