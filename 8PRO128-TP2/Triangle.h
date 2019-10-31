#pragma once
class Triangle
{
public:
	double cote1;
	double cote2;
	double cote3;

	double aire();
	double perimetre();
	double hauteur(TriangleEq cote);
	void afficher();
};

