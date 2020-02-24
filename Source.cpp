#include <iostream>
#include <string>
#include "CommandShell.h"
#include "CPUMemory.h"
using namespace std;

int main()
{
	cout << "###Welcome to The Computer!###" << endl;
	//Creates a shell for the computer to use
	CommandShell shell;
	//Holds a string for the user input
	string command;
	cout << "###Please type a command###" << endl << "###or type 'help' for more options###" << endl;
	do
	{
		cout << ">";
		getline(cin, command);
		//Sends the user input to the shell, then to the source file "CommandShell"
		shell.CommandIn(command);
	} while (command != "exit" || command != "Exit");

	return 0;
}