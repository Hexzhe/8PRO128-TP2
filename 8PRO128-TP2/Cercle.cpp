#include "Cercle.h"

Cercle::Cercle() : Ellipse()
{
	rayon = 0.0;
}

double Cercle::aire() const
{
	return M_PI * pow(rayon, 2);
}

double Cercle::perimetre() const
{
	return 2 * M_PI * rayon;
}

double Cercle::diametre() const
{
	return 2 * rayon;
}

void Cercle::afficher() const
{
	std::cout << *this << std::endl;

	//TODO: Output header if file empty
	//TODO: output (append or create) in a file "results{Name}.txt"
}

std::string Cercle::getEntete()
{
	return "rayon     aire      perim     diam";
}

std::istream& operator>>(std::istream& is, Cercle& cercle)
{
	is >> cercle.rayon;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Cercle& cercle)
{
	os << std::setw(9) << std::setprecision(2) << std::fixed << cercle.rayon << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << cercle.aire() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << cercle.perimetre() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << cercle.diametre();

	return os;
}
