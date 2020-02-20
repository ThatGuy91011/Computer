#pragma once
#include <string>
class CommandShell
{
public:
	void CommandIn(std::string command);
private:
	void CommandOut(std::string command);
	void DisplayHelp();
};

