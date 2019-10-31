#include "Cercle.h"

Cercle::Cercle()
{
	//TODO: Don't forget >> override
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
	//TODO: Override << instead?
}
