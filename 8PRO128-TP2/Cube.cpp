#include "Cube.h"

Cube::Cube()
{
	//TODO: Don't forget >> override
}

double Cube::aire() 
{
	return 6 * base.aire();
}

double Cube::face() 
{
	return base.aire();
}

double Cube::volume() 
{
	return pow(cote, 3);
}

void Cube::afficher() 
{
	//TODO: Override << instead?
}
