#include "Tetraedre.h"
#include <cmath>

double tmp;

double aire() {
	return (sqrt(3 * pow(tmp, 2)));
}

double face() {
	return (pow(tmp, 2) * sqrt(3 / 4));
}

double volume() {
	return (pow(tmp, 2) * sqrt(3 / 4));

}

double hauteur() {
	return (sqrt((6 / 3 * tmp)));
}

void afficher() {

}