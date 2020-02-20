#pragma once
class CPUMemory
{
public:
	void SetRAMValue(int address, int value);
	int GetRAMValue(int address);
private:
	int RAM[100];
};

