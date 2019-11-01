#include "Sphere.h"

Sphere::Sphere()
{
	//TODO: Don't forget >> override
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