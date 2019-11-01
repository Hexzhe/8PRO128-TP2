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
	
	delete cercle;
}

void Context::ExecTriangleEq()
{
	auto* triangleEq = new TriangleEq();

	GetFileStream("ResourceFiles/triangleEq.txt") >> *triangleEq;
	triangleEq->afficher();

	delete triangleEq;
}

void Context::ExecRectangle()
{
	auto* rectangle = new Rectangle();

	GetFileStream("ResourceFiles/rectangle.txt") >> *rectangle;
	rectangle->afficher();

	delete rectangle;
}

void Context::ExecTriangle()
{
	auto* triangle = new Triangle();

	GetFileStream("ResourceFiles/triangle.txt") >> *triangle;
	triangle->afficher();

	delete triangle;
}

void Context::ExecTetraedre()
{
	auto* tetraedre = new Tetraedre();

	GetFileStream("ResourceFiles/tetraedre.txt") >> *tetraedre;
	tetraedre->afficher();

	delete tetraedre;
}

void Context::ExecCube()
{
	auto* cube = new Cube();

	GetFileStream("ResourceFiles/cube.txt") >> *cube;
	cube->afficher();

	delete cube;
}

void Context::ExecSphere()
{
	auto* sphere = new Sphere();

	GetFileStream("ResourceFiles/sphere.txt") >> *sphere;
	sphere->afficher();

	delete sphere;
}

void Context::ExecEllipse()
{
	auto* ellipse = new Ellipse();

	GetFileStream("ResourceFiles/ellipse.txt") >> *ellipse;
	ellipse->afficher();

	delete ellipse;
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
