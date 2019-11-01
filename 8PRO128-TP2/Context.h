#pragma once
#include <sstream>
#include <fstream>
#include "Sphere.h"
#include "Tetraedre.h"
#include "Cube.h"

class Context
{
public:
	Context() {};
	~Context() {};

	void ExecCarre();
	void ExecCercle();
	void ExecTriangleEq();
	void ExecRectangle();
	void ExecTriangle();
	void ExecTetraedre();
	void ExecCube();
	void ExecSphere();
	void ExecEllipse();

private:
	std::ifstream GetFileStream(std::string path);
};
