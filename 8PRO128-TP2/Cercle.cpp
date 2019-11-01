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
	std::cout << *this << std::endl;
}

std::istream& operator>>(std::istream& is, Cercle& cercle)
{
	std::string line;

	while (is >> line)
	{
		//TODO
	}

	return is;
}

std::ostream& operator<<(std::ostream& os, const Cercle& cercle)
{
	//TODO
	os << " Not implemented (Cercle)";
	return os;
}
