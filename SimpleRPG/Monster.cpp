//This is so weird,need to refactor the code.
#include "Constants and Types.h"
#include "Monster.h"
#include "Player.h"
Monster::Monster(int hp=0, int damage=0,std::string& name, Type::MonsterType::E_Types type) :Entity(hp, damage,name), M_type(type) {}
//Need to simplify and refactor the code if possible
Monster Monster::registerMonster(Type::MonsterType::E_Types type)
{
		switch (type)
		{
		case Type::MonsterType::E_Types::Witch:
			return Monster(130, 10, Names::Witch, Type::MonsterType::E_Types::Witch);
		case Type::MonsterType::E_Types::Knight:
			return Monster(180, 10,Names::Knight, Type::MonsterType::E_Types::Knight);
		case Type::MonsterType::E_Types::Goblin:
			return Monster(90, 7,Names::Goblin, Type::MonsterType::E_Types::Goblin);
		case Type::MonsterType::E_Types::Yeti:
			return Monster(250, 10,Names::Yeti, Type::MonsterType::E_Types::Yeti);
		}
}
void Monster::setType(Type::MonsterType::E_Types type){this->M_type = type;}
bool Monster::hasResist(Type::AttackType::Player_Attacks  attack)
{

	return false;
}
bool attackPlayer(Player& p, Type::AttackType::Physical_Monster_Attacks a)
{

}
bool attackPlayer(Player& p, Type::AttackType::Magical_Monster_Attacks a)
{

}