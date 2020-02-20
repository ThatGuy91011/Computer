#include <iostream>
#include <string>
#include "CommandShell.h"
#include "CPUMemory.h"
using namespace std;

int main()
{
	cout << "###Welcome to The Computer!###" << endl;
	CommandShell shell;
	string command;
	getline(cin, command);
	shell.CommandIn(command);
	return 0;
}