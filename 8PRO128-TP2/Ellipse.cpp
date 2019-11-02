#include "Ellipse.h"

Ellipse::Ellipse() :  Figure()
{
}

void Ellipse::afficher() const
{
	std::cout << *this << std::endl;

	//TODO: Output header if file empty
	//TODO: output (append or create) in a file "results{Name}.txt"
}

std::string Ellipse::getEntete()
{
	return "No header";
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
