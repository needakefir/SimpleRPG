#include <string>
#include <iostream>
void printRoad(const char* HeadPlayer, const char* BodyPlayer, const char* roadline,short length)
{
	for (int i{}; i <= length; ++i)
	{
		std::cout << roadline[i];
	}
	for (int i{}; i <= length; ++i)
	{
		std::cout << HeadPlayer[i];
	}
	for (int i{}; i <= length; ++i)
	{
		std::cout << BodyPlayer[i];
	}
	for (int i{}; i <= length; ++i)
	{
		std::cout << roadline[i];
	}
}