#pragma once
#include <string>
class CommandShell
{
public:
	//Function for input
	void CommandIn(std::string command);
private:
	//Function for output
	void CommandOut(std::string command);
	//Displays the help section
	void DisplayHelp();
};

