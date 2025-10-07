#include <map>
#include "Constants and Types.h"
Type::MonsterType::E_Types SearchForLastMonster(std::map<int, Type::MonsterType::E_Types>& map,int lastPos);
void replaceCharFromMap(char* BodyPlayer,char* HeadPlayer, short length, short countRoad,std::map<int,char>& Defeated,std::map<int,char>& Taken)
{
	for (int i{ length * (countRoad - 1) }; i <= length * countRoad; ++i)
	{
		if (Defeated.count(length))
		{
			
		}
	}
}