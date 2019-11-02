#include "Carre.h"

Carre::Carre() : Rectangle()
{
}

double Carre::aire() const
{
	auto x = pow(Rectangle::largeur, 2);
	return x;
}

double Carre::perimetre() const
{
	return 4 * Rectangle::largeur;
}

double Carre::diagonale() const
{
	return sqrt(aire() * 2);
}

void Carre::afficher() const
{
	std::cout << *this << std::endl;

	//TODO: Output header if file empty
	//TODO: output (append or create) in a file "results{Name}.txt"
}

std::string Carre::getEntete()
{
	return "cote   aire   perim  diago";
}

std::istream& operator>>(std::istream& is, Carre& carre)
{
	is >> carre.largeur;
	carre.longueur = carre.largeur;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Carre& carre)
{
	os << std::setw(6) << std::setprecision(2) << std::fixed << carre.largeur << " ";
	os << std::setw(6) << std::setprecision(2) << std::fixed << carre.aire() << " ";
	os << std::setw(6) << std::setprecision(2) << std::fixed << carre.perimetre() << " ";
	os << std::setw(6) << std::setprecision(2) << std::fixed << carre.diagonale();
	return os;
}
