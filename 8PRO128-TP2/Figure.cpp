#include "Figure.h"

void Figure::afficher()
{
	std::cout << *this << std::endl;
}

std::istream& operator>>(std::istream& is, Figure& figure)
{
	std::string line;

	while (is >> line)
	{
		//TODO
	}

	return is;
}

std::ostream& operator<<(std::ostream& os, const Figure& figure)
{
	//TODO
	os << " Not implemented (Figure)";
	return os;
}
