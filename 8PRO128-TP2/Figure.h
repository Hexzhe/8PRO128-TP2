#pragma once
#include <cmath>
#include <assert.h>
#include <iostream>
#include <fstream>
#define M_PI 3.14159265358979323846  //pi

class Figure
{
public:
	Figure() {};
	~Figure() {};

	void afficher();

	friend std::istream& operator>>(std::istream& is, Figure& figure);
	friend std::ostream& operator<<(std::ostream& os, const Figure& figure);
};
