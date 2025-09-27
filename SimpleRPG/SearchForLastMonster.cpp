#include "Constants and Types.h"
#include "Player.h"
//We need to search last defeated monster,so using map.count will be a good idea
Type::MonsterType::E_Types SearchForLastMonster(std::map<int, Type::MonsterType::E_Types>& map,int lastPos)
{
	//If all succesfull
		if (map.count(lastPos))
		{
			return map.find(lastPos)->second;	
		}
		return Type::MonsterType::E_Types::Null;
}