#pragma once
#include <cmath>
#include <iostream>
#include <fstream>
#include <iomanip>
#define M_PI 3.14159265358979323846  //pi

class Figure
{
public:
	Figure() {};
	~Figure() {};

	void afficher();
	static std::string getEntete();

	friend std::istream& operator>>(std::istream& is, Figure& figure);
	friend std::ostream& operator<<(std::ostream& os, const Figure& figure);
};
