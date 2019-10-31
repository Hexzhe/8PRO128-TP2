#include "Carre.h"
#include <cmath>

double cote;

double aire() {
	return 6 * (cote*cote);
}

double face() {
	return cote * cote;
}

double volume() {
	return pow(cote, 3);
}

void afficher() {

}
