/******************************************************************
* Titre:       Travail pratique #2 (https://github.com/Hexzhe/8PRO128-TP2)
* Auteur(e)s:  Dominique Boivin (BOID31609701)
*              Jason Gilbert (GILJ05069703)
* Date:        2019-10-31
* Description: TODO *ctors are shit to make use of >>
*******************************************************************/

#include "Context.h"

bool ProcessInput(std::string line, Context* ctx);
void ShowHelp();

int main()
{
	std::cout << "8PRO128-TP2 - Jason Gilbert & Dominique Boivin" << std::endl;

	Context* ctx = new Context();

	while (true)
	{
		std::cout << "Menu\n  1-    Carre\n  2-    Cercle\n  3-    Triangle Eq.\n  4-    Rectangle\n  5-    Triangle\n  6-    Tetraedre\n  7-    Cube\n  8-    Sphere\n  9-    Ellipse\n  help- Show help\n  exit- Terminate the program" << std::endl;
		std::cout << "> " << std::flush;

		std::string input;
		std::getline(std::cin, input);

		if (!ProcessInput(input, ctx))
			break;

		std::cout << std::endl;
	}

	delete ctx;
	return 0;
}

bool ProcessInput(std::string line, Context* ctx)
{
	if (line.length() == 0)
		return true;

	std::string command[1]; //max one command + 0 args, no spaces exept between args
	std::istringstream iss(line);
	for (size_t i = 0; iss.good() && i <= 1; i++)
		iss >> command[i];

	if (command[0] == "help")
	{
		ShowHelp();
	}
	else if (command[0] == "exit")
	{
		std::cout << "Bye" << std::endl;
		return false;
	}
	else if (command[0] == "1")
	{
		ctx->ExecCarre();
	}
	else if (command[0] == "2")
	{
		ctx->ExecCercle();
	}
	else if (command[0] == "3")
	{
		ctx->ExecTriangleEq();
	}
	else if (command[0] == "4")
	{
		ctx->ExecRectangle();
	}
	else if (command[0] == "5")
	{
		ctx->ExecTriangle();
	}
	else if (command[0] == "6")
	{
		ctx->ExecTetraedre();
	}
	else if (command[0] == "7")
	{
		ctx->ExecCube();
	}
	else if (command[0] == "8")
	{
		ctx->ExecSphere();
	}
	else if (command[0] == "9")
	{
		ctx->ExecEllipse();
	}
	else
		std::cout << "\"" + command[0] + "\" is not a command (case-sensitive)" << std::endl;

	return true;
}

void ShowHelp()
{
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "1-8: Read the specified shape from a file located in {project}/ResourceFiles/ then display the result" << std::endl;
	std::cout << "  >[1-8]" << std::endl;

	std::cout << "HELP: Show command list" << std::endl;
	std::cout << "  >help" << std::endl;

	std::cout << "EXIT: Exit this program" << std::endl;
	std::cout << "  >exit" << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
}