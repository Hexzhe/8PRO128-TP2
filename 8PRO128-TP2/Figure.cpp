#include "Figure.h"

void Figure::afficher()
{
	std::cout << *this << std::endl;

	//TODO: Output header if file empty
	//TODO: output (append or create) in a file "results{Name}.txt"
}

std::string Figure::getEntete()
{
	//TODO
	return "=====TODO=====";
}

std::istream& operator>>(std::istream& is, Figure& figure)
{
	return is;
}

std::ostream& operator<<(std::ostream& os, const Figure& figure)
{
	os << "  ?";

	return os;
}
