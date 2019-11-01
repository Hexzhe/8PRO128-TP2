#include "Ellipse.h"

Ellipse::Ellipse() :  Figure()
{
}

void Ellipse::afficher()
{
	//TODO: Output header
	std::cout << *this << std::endl;

	//TODO: Output header if file empty
	//TODO: output (append or create) in a file "resultsCarre.txt"
}

std::istream& operator>>(std::istream& is, Ellipse& ellipse)
{
	return is;
}

std::ostream& operator<<(std::ostream& os, const Ellipse& ellipse)
{
	os << "  ?";
	return os;
}
