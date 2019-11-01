#include "Figure.h"

void Figure::afficher()
{
	std::cout << *this << std::endl;
}

std::istream& operator>>(std::istream& is, Figure& figure)
{
	return is;
}

std::ostream& operator<<(std::ostream& os, const Figure& figure)
{
	return os;
}
