#include <cstdlib>
#include <ctime>
int NumGen(int min, int max)
{
	srand(static_cast<unsigned long long>(time(0)));
	return (rand() % (max - min + 1) + min);
}