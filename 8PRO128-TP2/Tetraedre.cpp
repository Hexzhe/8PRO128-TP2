#include "Tetraedre.h"

Tetraedre::Tetraedre()
{
	//TODO: Don't forget >> override
}

double Tetraedre::aire()
{
	return sqrt(3) * pow(cote, 2);
}

double Tetraedre::face()
{
	return base.aire();
}

double Tetraedre::volume()
{
	return pow(cote, 3) * sqrt(2) / 12;

}

double Tetraedre::hauteur()
{
	return sqrt(6) / 3 * cote;
}

void Tetraedre::afficher()
{
	std::cout << *this << std::endl;
}
