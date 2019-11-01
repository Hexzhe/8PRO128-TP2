#include "Rectangle.h"

Rectangle::Rectangle() : Figure()
{
	largeur = 0.0;
	longueur = 0.0;
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

std::istream& operator>>(std::istream& is, Rectangle& rectangle)
{
	is >> rectangle.largeur >> rectangle.longueur;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle)
{
	//TODO
	os << " Not implemented (Rectangle)";
	return os;
}
