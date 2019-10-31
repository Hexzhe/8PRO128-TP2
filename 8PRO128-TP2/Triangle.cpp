#include "Triangle.h"
#include <cmath>

double aire() {
	double p = perimetre();
	return sqrt(p * (p - cote1) * (p - cote2) * (p - cote3));
}

double perimetre() {
	return cote1 + cote2 + cote3;
}

double hauteur(TriangleEq cote) {
	return (2 * (aire() / cote));
}

void afficher() {

}