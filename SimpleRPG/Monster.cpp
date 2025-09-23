//This is so weird,need to refactor the code.
#include "Monster.h"
#include "Player.h"
Monster::Monster(int hp=0, int damage=0,std::string& name, Type::MonsterType::E_Types type) :Entity(hp, damage,name), M_type(type) {}
//Global monster 
Monster Monster::registerMonster(Type::MonsterType::E_Types type,short difficulty)
{
	switch (difficulty)
	{
	case 1:
		switch (type)
		{
		case Type::MonsterType::E_Types::Witch:
			return Monster(150, 10, 0, "Witch", Type::MonsterType::E_Types::Witch);
		case Type::MonsterType::E_Types::Knight:
			return Monster(150, 10, 0, "Knight", Type::MonsterType::E_Types::Knight);
		case Type::MonsterType::E_Types::Goblin:
			return Monster(150, 10, 0, "Goblin", Type::MonsterType::E_Types::Goblin);
		case Type::MonsterType::E_Types::Yeti:
			return Monster(150, 10, 0, "Yeit", Type::MonsterType::E_Types::Yeti);
		}
	case 2:
		switch (type)
		{
		case Type::MonsterType::E_Types::Witch:
			return Monster(150, 10, 0, "Witch", Type::MonsterType::E_Types::Witch);
		case Type::MonsterType::E_Types::Knight:
			return Monster(150, 10, 0, "Knight", Type::MonsterType::E_Types::Knight);
		case Type::MonsterType::E_Types::Goblin:
			return Monster(150, 10, 0, "Goblin", Type::MonsterType::E_Types::Goblin);
		case Type::MonsterType::E_Types::Yeti:
			return Monster(150, 10, 0, "Yeti", Type::MonsterType::E_Types::Yeti);
		}
	case 3:
		switch (type)
		{
		case Type::MonsterType::E_Types::Witch:
			return Monster(150, 10, 0, "Witch", Type::MonsterType::E_Types::Witch);
		case Type::MonsterType::E_Types::Knight:
			return Monster(150, 10, 0, "Knight", Type::MonsterType::E_Types::Knight);
		case Type::MonsterType::E_Types::Goblin:
			return Monster(150, 10, 0, "Goblin", Type::MonsterType::E_Types::Goblin);
		case Type::MonsterType::E_Types::Yeti:
			return Monster(150, 10, 0, "Yeit", Type::MonsterType::E_Types::Yeti);
		}
	case 4:
		switch (type)
		{
		case Type::MonsterType::E_Types::Witch:
		return Monster(150, 10, 0, "Witch", Type::MonsterType::E_Types::Witch);
		case Type::MonsterType::E_Types::Knight:
			return Monster(150, 10, 0, "Knight", Type::MonsterType::E_Types::Knight);
		case Type::MonsterType::E_Types::Goblin:
			return Monster(150, 10, 0, "Goblin", Type::MonsterType::E_Types::Goblin);
		case Type::MonsterType::E_Types::Yeti:
			return Monster(150, 10, 0, "Yeit", Type::MonsterType::E_Types::Yeti);
		}
	default:
		std::cout << "Invalid difficulty\n";
		break;
	}
	
}
void Monster::setType(Type::MonsterType::E_Types type){this->M_type = type;}
bool Monster::hasResist(Type::AttackType::Player_Attacks  attack)
{

}
