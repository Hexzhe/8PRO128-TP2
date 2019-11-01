#include "Context.h"

void Context::ExecCarre()
{
	std::ifstream ifs = GetFileStream("ResourceFiles/carre.txt");
	int count = 0;
	ifs >> count;

	std::cout << Carre::getEntete() << std::endl;

	if (count < 1)
		std::cout << "  No data" << std::endl;

	for (size_t i = 0; i < count; i++)
	{
		auto* carre = new Carre();
		ifs >> *carre;

		carre->afficher();

		delete carre;
	}

	ifs.close();
}

void Context::ExecCercle()
{
	std::ifstream ifs = GetFileStream("ResourceFiles/cercle.txt");
	int count = 0;
	ifs >> count;

	std::cout << Cercle::getEntete() << std::endl;

	if (count < 1)
		std::cout << "  No data" << std::endl;

	for (size_t i = 0; i < count; i++)
	{
		auto* cercle = new Cercle();
		ifs >> *cercle;

		cercle->afficher();

		delete cercle;
	}

	ifs.close();
}

void Context::ExecTriangleEq()
{
	std::ifstream ifs = GetFileStream("ResourceFiles/triangleEq.txt");
	int count = 0;
	ifs >> count;

	std::cout << TriangleEq::getEntete() << std::endl;

	if (count < 1)
		std::cout << "  No data" << std::endl;

	for (size_t i = 0; i < count; i++)
	{
		auto* triangleEq = new TriangleEq();
		ifs >> *triangleEq;

		triangleEq->afficher();

		delete triangleEq;
	}

	ifs.close();
}

void Context::ExecRectangle()
{
	std::ifstream ifs = GetFileStream("ResourceFiles/rectangle.txt");
	int count = 0;
	ifs >> count;

	std::cout << Rectangle::getEntete() << std::endl;

	if (count < 1)
		std::cout << "  No data" << std::endl;

	for (size_t i = 0; i < count; i++)
	{
		auto* rectangle = new Rectangle();
		ifs >> *rectangle;

		rectangle->afficher();

		delete rectangle;
	}

	ifs.close();
}

void Context::ExecTriangle()
{
	std::ifstream ifs = GetFileStream("ResourceFiles/triangle.txt");
	int count = 0;
	ifs >> count;

	std::cout << Triangle::getEntete() << std::endl;

	if (count < 1)
		std::cout << "  No data" << std::endl;

	for (size_t i = 0; i < count; i++)
	{
		auto* triangle = new Triangle();
		ifs >> *triangle;

		triangle->afficher();

		delete triangle;
	}

	ifs.close();
}

void Context::ExecTetraedre()
{
	std::ifstream ifs = GetFileStream("ResourceFiles/tetraedre.txt");
	int count = 0;
	ifs >> count;

	std::cout << Tetraedre::getEntete() << std::endl;

	if (count < 1)
		std::cout << "  No data" << std::endl;

	for (size_t i = 0; i < count; i++)
	{
		auto* tetraedre = new Tetraedre();
		ifs >> *tetraedre;

		tetraedre->afficher();

		delete tetraedre;
	}

	ifs.close();
}

void Context::ExecCube()
{
	std::ifstream ifs = GetFileStream("ResourceFiles/cube.txt");
	int count = 0;
	ifs >> count;

	std::cout << Cube::getEntete() << std::endl;

	if (count < 1)
		std::cout << "  No data" << std::endl;

	for (size_t i = 0; i < count; i++)
	{
		auto* cube = new Cube();
		ifs >> *cube;

		cube->afficher();

		delete cube;
	}

	ifs.close();
}

void Context::ExecSphere()
{
	std::ifstream ifs = GetFileStream("ResourceFiles/sphere.txt");
	int count = 0;
	ifs >> count;

	std::cout << Sphere::getEntete() << std::endl;

	if (count < 1)
		std::cout << "  No data" << std::endl;

	for (size_t i = 0; i < count; i++)
	{
		auto* sphere = new Sphere();
		ifs >> *sphere;

		sphere->afficher();

		delete sphere;
	}

	ifs.close();
}

void Context::ExecEllipse()
{
	std::ifstream ifs = GetFileStream("ResourceFiles/ellipsee.txt");
	int count = 0;
	ifs >> count;

	std::cout << Ellipse::getEntete() << std::endl;

	if (count < 1)
		std::cout << "  No data" << std::endl;

	for (size_t i = 0; i < count; i++)
	{
		auto* ellipse = new Ellipse();
		ifs >> *ellipse;

		ellipse->afficher();

		delete ellipse;
	}

	ifs.close();
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
