#include "CPUMemory.h"

void CPUMemory::SetRAMValue(int address, int value)
{
	//todo: check address is between 0-99
	//todo: check to see if each value is 4 digits long
	RAM[address] = value;
}

int CPUMemory::GetRAMValue(int address)
{
	return RAM[address];
}
