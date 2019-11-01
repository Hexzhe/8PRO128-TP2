#include "Context.h"

void Context::ExecCarre()
{
	auto* carre = new Carre();
	GetFileStream("ResourceFiles/carre.txt") >> *carre;
	carre->afficher();
}

void Context::ExecCercle()
{
	auto* cercle = new Cercle();
	GetFileStream("ResourceFiles/cercle.txt") >> *cercle;
	cercle->afficher();
}

void Context::ExecTriangleEq()
{
	auto* triangleEq = new TriangleEq();
	GetFileStream("ResourceFiles/triangleEq.txt") >> *triangleEq;
	triangleEq->afficher();
}

void Context::ExecRectangle()
{
	auto* rectangle = new Rectangle();
	GetFileStream("ResourceFiles/rectangle.txt") >> *rectangle;
	rectangle->afficher();
}

void Context::ExecTriangle()
{
	auto* triangle = new Triangle();
	GetFileStream("ResourceFiles/triangle.txt") >> *triangle;
	triangle->afficher();
}

void Context::ExecTetraedre()
{
	auto* tetraedre = new Tetraedre();
	GetFileStream("ResourceFiles/tetraedre.txt") >> *tetraedre;
	tetraedre->afficher();
}

void Context::ExecCube()
{
	auto* cube = new Carre();
	GetFileStream("ResourceFiles/cube.txt") >> *cube;
	cube->afficher();
}

void Context::ExecSphere()
{
	auto* sphere = new Sphere();
	GetFileStream("ResourceFiles/sphere.txt") >> *sphere;
	sphere->afficher();
}

void Context::ExecEllipse()
{
	auto* ellipse = new Carre();
	GetFileStream("ResourceFiles/ellipse.txt") >> *ellipse;
	ellipse->afficher();
}

std::ifstream Context::GetFileStream(std::string path)
{
	std::ifstream file(path);
	if (!file)
	{
		std::cout << "Unable to open file \"" << path << "\"" << std::endl;
		exit(1);
	}

	return file;
}
