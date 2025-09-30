#include "Constants and Types.h"
#include "Monster.h"
#include "Player.h"
#include "Increase and Reduction Damage.h"
std::pair<float, float> GetChancesOfAttack(Type::MonsterType::E_Types type, short difficulty);
Monster::Monster(int hp=0,std::string& name, Type::MonsterType::E_Types type) :Entity(hp,name), M_type(type) {}
bool Monster::attackPlayer(Player& p,Type::MonsterType::E_Types type,short difficulty)
{
	//For every type getting chance of any type of attack for AI.
	std::pair<float, float> chances =GetChancesOfAttack(type,difficulty);
	//Setting a AI 
	this->AI.setMagicChanceAttack(chances.first);
	this->AI.setPhysicalChanceAttack(chances.second);
	//----------------------------------------
	bool Magic = this->AI.isAttackMagical(AI.getMagicChanceAttack(),difficulty);
	bool Physical = this->AI.isAttackPhysical(AI.getPhysicalhanceAttack(),difficulty);
	//If Magic and Physical is true,then trying to get one of parameters true.
	while (true)
	{
		if (Magic ^ Physical)
		{
			bool Magic = this->AI.isAttackMagical(AI.getMagicChanceAttack());
			bool Physical = this->AI.isAttackPhysical(AI.getPhysicalhanceAttack());
		}
		else
			break;
	}
	if (Magic)
	{ 

	}
	else if (Physical)
	{

	}
}
//Needs to add hp per difficulty
Monster Monster::registerMonster(Type::MonsterType::E_Types type)
{
		switch (type)
		{
		case Type::MonsterType::E_Types::Witch:
			return Monster(130, Names::Witch, Type::MonsterType::E_Types::Witch);
		case Type::MonsterType::E_Types::Knight:
			return Monster(180,Names::Knight, Type::MonsterType::E_Types::Knight);
		case Type::MonsterType::E_Types::Goblin:
			return Monster(90,Names::Goblin, Type::MonsterType::E_Types::Goblin);
		case Type::MonsterType::E_Types::Yeti:
			return Monster(250,Names::Yeti, Type::MonsterType::E_Types::Yeti);
		}
}
Type::MonsterType::E_Types Monster::getType()
{
	return this->M_type;
}
void Monster::setType(Type::MonsterType::E_Types type){this->M_type = type;}
bool Monster::hasResist(Type::AttackType::Player_Attacks  attack)
{

	return false;
}