#include "CommandShell.h"
#include <iostream>
void CommandShell::CommandIn(std::string command)
{
	CommandOut(command);
}

void CommandShell::CommandOut(std::string command)
{
	if (command == "Help" || command == "help")
	{
		DisplayHelp();
	}
	else if (command == "DisplayMem" || command == "displaymem" || command == "dm")
	{
		//todo: display memory
		std::cout << "\tERROR: Programmer is lazy and hasn't implemented this yet." << std::endl;
	}
	else if (command == "Load" || command == "load")
	{
		//todo: Load program from file into memory/array
		std::cout << "\tERROR: Programmer is lazy and hasn't implemented this yet." << std::endl;
	}
	else if (command == "Run" || command == "run")
	{
		//todo: Run program
		std::cout << "\tERROR: Programmer is lazy and hasn't implemented this yet." << std::endl;
	}
	else if (command == "Exit" || command == "exit")
	{
		//todo: Exit shell/turn off computer
		std::cout << "\tERROR: Programmer is lazy and hasn't implemented this yet." << std::endl;
	}
}

void CommandShell::DisplayHelp()
{
	std::cout << "Help Menu:" << std::endl;
	std::cout << "Help-Wait, didn't you just use that? That displays this page, dummy" << std::endl;
	std::cout << "Load-Loads your program of course. What did you expect?" << std::endl;
	std::cout << "Run-You really need this list, huh? 'Run' runs the program" << std::endl;
	std::cout << "DisplayMem/dm-This I understand if you need help, this displays the memory of the current program" << std::endl;
	std::cout << "Exit-And now right back to redundancies. ExIt MaKeS iT sO tHaT yOu " << std::endl;
}
