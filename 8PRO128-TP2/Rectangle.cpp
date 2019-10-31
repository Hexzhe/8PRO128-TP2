#include "Rectangle.h"
#include <cmath>

double longueur, largeur;

double aire() {
	return longueur * largeur;
}

double perimetre() {
	return (largeur + longueur) * 2;
}

double diagonale() {
	return sqrt(pow(largeur, 2) + pow(longueur, 2));
}

void afficher() {

}
