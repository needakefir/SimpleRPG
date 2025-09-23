#include "ctime"
#include <iostream>
#include <string>
#include <vector>
int cooldown(short seconds)
{
	std::string in;
	std::vector<std::string> attackCompare{ "Bow","Sword","Fist","IronFist","FireSword","IceBow" };

	int time{ 1 };
	short minusSeconds{ --seconds };
	clock_t start = clock();
	clock_t end = seconds * CLOCKS_PER_SEC;
	clock_t elapsed;
	do
	{
		std::cin >> in;
		elapsed = clock() - start;
		if (elapsed == time * CLOCKS_PER_SEC)
		{
			//Check every second for input,else repeat std:::cin;
			if (elapsed == (seconds - minusSeconds) * CLOCKS_PER_SEC)
			{
				for (auto& i : attackCompare)
				{
					if (i == in)
					{
						//End of cycle
						return time * CLOCKS_PER_SEC;
					}
					else
					{
						std::cout << "Invalid attack or you input nothing:\n";
						std::cin >> in;
					}
					--minusSeconds;
				}
				std::cout << "Времени осталось:" << minusSeconds << "\n";
				++time;
			}
		}
	} while (elapsed < end);
	return static_cast<int>(elapsed);
}