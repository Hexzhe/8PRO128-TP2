#include "Triangle.h"

Triangle::Triangle()
{
	//TODO: Don't forget >> override
}

double Triangle::aire() 
{
	double p = perimetre();
	return sqrt(p * (p - cote1) * (p - cote2) * (p - cote3));
}

double Triangle::perimetre() 
{
	return cote1 + cote2 + cote3;
}

double Triangle::hauteur(int cote) 
{
	if (cote <= 0 || cote > 3)
	{
		std::cout << "ERROR: Triangle::hauteur(int) param must be between 1-3" << std::endl;
		exit(1);
	}

	switch (cote)
	{
	case 1:
		return 2 * aire() / cote1;
	case 2:
		return 2 * aire() / cote2;
	case 3:
		return 2 * aire() / cote3;
	}
}

void Triangle::afficher() 
{
	std::cout << *this << std::endl;
}
