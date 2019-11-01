#include "Rectangle.h"

Rectangle::Rectangle()
{
	//TODO: Don't forget >> override
}

double Rectangle::aire() 
{
	return longueur * largeur;
}

double Rectangle::perimetre() 
{
	return (largeur + longueur) * 2;
}

double Rectangle::diagonale() 
{
	return sqrt(pow(largeur, 2) + pow(longueur, 2));
}

void Rectangle::afficher()
{
	std::cout << *this << std::endl;
}
