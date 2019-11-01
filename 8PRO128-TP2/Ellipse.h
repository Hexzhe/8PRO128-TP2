#pragma once
#include "Figure.h"

class Ellipse :
	public Figure
{
public:
	Ellipse();
	~Ellipse() {};

	void afficher();
	static std::string getEntete();

	friend std::istream& operator>>(std::istream& is, Ellipse& ellipse);
	friend std::ostream& operator<<(std::ostream& os, const Ellipse& ellipse);
};
