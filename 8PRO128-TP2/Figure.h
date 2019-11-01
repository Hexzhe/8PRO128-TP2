#pragma once
#include <cmath>
#include <assert.h>
#include <iostream>
#define M_PI 3.14159265358979323846  //pi

class Figure
{
public:
	Figure() {};
	~Figure() {};

	void afficher();

	friend std::istream& operator>>(std::istream& is, Figure& figure) {
		//TODO
		return is;
	}

	friend std::ostream& operator<<(std::ostream& os, const Figure& figure)
	{
		//TODO
		os << " Not implemented (Figure)";
		return os;
	}
};
