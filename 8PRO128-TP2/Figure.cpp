#include "Figure.h"
#include <cmath>

double temp; 

double aire() {
	return pow(temp, 2);
}

double perimetre() {
	return temp * 4;
}

double diagonale() {
	return sqrt(pow(temp, 2) + pow(temp, 2));
}

void afficher() {

}