#pragma once
#include "Figure.h"

class Triangle :
	public Figure
{
public:
	Triangle();
	~Triangle() {};

	double cote1;
	double cote2;
	double cote3;

	double aire();
	double perimetre();
	double hauteur(int cote);

	void afficher();
	static std::string getEntete();

	friend std::istream& operator>>(std::istream& is, Triangle& triangle);
	friend std::ostream& operator<<(std::ostream& os, const Triangle& triangle);
};
