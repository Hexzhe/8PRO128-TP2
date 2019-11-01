#include "Carre.h"

Carre::Carre()
{
	//TODO: Don't forget >> override
}

double Carre::aire() 
{
	return pow(cote, 2);
}

double Carre::perimetre() 
{
	return 4 * cote;
}

double Carre::diagonale() 
{
	return sqrt(aire() * 2);
}

void Carre::afficher() 
{
	std::cout << *this << std::endl;
}
