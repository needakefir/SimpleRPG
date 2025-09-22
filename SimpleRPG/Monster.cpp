//This is so weird,need to refactor the code.
#include "Monster.h"
#include "Player.h"
Monster::Monster(int hp=0, int damage=0, int protection=0,std::string& name="", Type::MonsterType::E_Types type) :Entity(hp, damage, protection, name), M_type(type) {}
bool Monster::attackPlayer(Player& p, Type::AttackType::Monster_Attacks a)
{

}
Monster Monster::registerMonster(Type::MonsterType::E_Types type,short difficulty)
{
	switch (difficulty)
	{
	case 1:
		switch (type)
		{
		case Type::MonsterType::E_Types::Witch:
			Monster temp{};
			return temp;
		case Type::MonsterType::E_Types::Knight:
			Monster temp{};
			return temp;
		case Type::MonsterType::E_Types::Goblin:
			Monster temp{};
			return temp;
		case Type::MonsterType::E_Types::Yeti:
			Monster temp{};
			return temp;
		}
	case 2:
		switch (type)
		{
		case Type::MonsterType::E_Types::Witch:
			Monster temp{ 100, };
			return temp;
			break;
		case Type::MonsterType::E_Types::Knight:
			Monster temp{};
			return temp;
			break;
		case Type::MonsterType::E_Types::Goblin:
			Monster temp{};
			return temp;
			break;
		case Type::MonsterType::E_Types::Yeti:
			Monster temp{};
			return temp;
			break;
		}
	case 3:
		switch (type)
		{
		case Type::MonsterType::E_Types::Witch:
			Monster temp{ 100, };
			return temp;
			break;
		case Type::MonsterType::E_Types::Knight:
			Monster temp{};
			return temp;
			break;
		case Type::MonsterType::E_Types::Goblin:
			Monster temp{};
			return temp;
			break;
		case Type::MonsterType::E_Types::Yeti:
			Monster temp{};
			return temp;
			break;
		}
	}
	
}
bool Monster::hasResist(Type::AttackType::Player_Attacks  attack)
{

}
