#include "Ellipse.h"

Ellipse::Ellipse() :  Figure()
{
}

void Ellipse::afficher()
{
	std::cout << *this << std::endl;
}

std::istream& operator>>(std::istream& is, Ellipse& ellipse)
{
	//No instructions provided. Not implemented.
	return is;
}

std::ostream& operator<<(std::ostream& os, const Ellipse& ellipse)
{
	os << "  No instructions provided. Not implemented.";
	return os;
}
