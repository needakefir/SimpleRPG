#include <map>
#include "Constants and Types.h"
Type::MonsterType::E_Types SearchForLastMonster(std::map<int, Type::MonsterType::E_Types>& map,int lastPos);
char replaceCharFromMap(char* BodyPlayer,char* HeadPlayer, short length, short countRoad, std::map<int,Type::MonsterType::E_Types>& map,std::map<int,bool>& Defeated_Monsters)
{
	for (int i{ length * (countRoad - 1)}; i <= length * countRoad; ++i)
	{
		int max{ length * countRoad };
		if (map.count(length))
		{

		}
	}
}
char replaceCharFromMap(char* src,char* src2, short length, short countRoad, std::map<int, Type::MonsterType::E_Types>& map)
{
	for (int i{ length * (countRoad - 1) }; i <= length * countRoad; ++i)
	{

	}
}