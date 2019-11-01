#pragma once
#include "Figure.h"

class Ellipse :
	public Figure
{
public:
	Ellipse() {};
	~Ellipse() {};

	void afficher();

	friend std::istream& operator>>(std::istream& is, Ellipse& ellipse) 
	{
		//No instructions provided. Not implemented.
		return is;
	}

	friend std::ostream& operator<<(std::ostream& os, const Ellipse& ellipse)
	{
		os << "  No instructions provided. Not implemented.";
		return os;
	}
};
