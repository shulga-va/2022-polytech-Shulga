#include <iostream>
#include <fstream>

int main()
{
	char parameter[20]; 
	int value; 
	char unit[3];   
	double memory[2];

	std::ifstream in("/proc/meminfo", std::ios_base::in);
	for(int i = 0; i < 2; i++) 
	{
		in >> parameter >> value >> unit;
		memory[i] = value;
		std::cout << memory[i] << std::endl;
	}
	double p = memory[1] / memory[0];
	int percentage = p * 100;
	for (int i = 0; i < percentage; i++)
	{
		std::cout << (char)124;
	}
	for (int i = 0; i < (100 - percentage); i++)
	{
		std::cout << (char)46;
	}
	std::cout << " " << percentage << "%" << std::endl;
	return 0;

}