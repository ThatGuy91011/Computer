#pragma once
class CPUMemory
{
public:
	//Sets the RAM value for the memory
	void SetRAMValue(int address, int value);
	//Gets the RAM value for a particular address
	int GetRAMValue(int address);
private:
	//Initial array for 100 spots of memory
	int RAM[100];
};

