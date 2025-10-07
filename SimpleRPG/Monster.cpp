#include "Constants and Types.h"
#include "Monster.h"
#include "Player.h"
#include "Increase and Reduction Damage.h"
#include "retDamageScoreByTypeOfAttack.h"
//Using typedef to minimize difficulty
typedef Type::AttackType::Physical_Monster_Attacks Physical;
typedef Type::AttackType::Magical_Monster_Attacks Magical;
std::pair<float, float> GetChancesOfAttack(Type::MonsterType::E_Types type, short difficulty);
Monster::Monster(int hp=0,std::string& name, Type::MonsterType::E_Types type) :Entity(hp,name), M_type(type) {}
bool Monster::attackPlayer(Player& p, Type::MonsterType::E_Types type, short difficulty, Physical ph = Physical::Null, Magical m = Magical::Null)
{
	//For every type getting chance of any type of attack for AI.
	std::pair<float, float> chances{ GetChancesOfAttack(type,difficulty) };
	//Setting a AI 
	this->AI.setMagicChanceAttack(chances.first);
	this->AI.setPhysicalChanceAttack(chances.second);
	//----------------------------------------
	bool Magic = this->AI.isAttackMagical(chances, difficulty, type, m);
	bool Physical = this->AI.isAttackPhysical(chances,difficulty, type, ph);
	while (true)
	{
		//If Magic and Physical is true,then trying to get one of parameters true.
		if (Magic ^ Physical)
		{
			Magic = this->AI.isAttackMagical(chances,difficulty, type, m);
			Physical = this->AI.isAttackPhysical(chances,difficulty, type, ph);
		}
	}
	if (Magic)
	{
		if (m != Magical::Null)
			p.setHP(p.getHP() - retDamageScoreByTypeOfAttack(m) * increaseDamage(m, difficulty));
		else
		{
			return;
		}
		if (Physical)
		{
			if (ph != Physical::Null)
			{
				p.setHP(p.getHP() - retDamageScoreByTypeOfAttack(ph) * increaseDamage(ph, difficulty));
			}
			else
				return;
		}
	}
	return true;
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