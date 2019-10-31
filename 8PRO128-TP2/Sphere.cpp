#include "Sphere.h"

double tmpRayon;
double Cercle::diametre() {
	return (2 * tmpRayon);
}

double aire() {
	return (4 * Cercle::aire());
}

void Cercle::afficher() {

}

double volume() {
	return (4 * M_PI * pow(tmpRayon, 3)) / 3;
}