#include "Monster_AI.h"
int NumGen(int min, int max);
void Monster_AI::setMagicChanceAttack(float value)
{
	this->MagicChanceAttack = value;
}
float Monster_AI::getMagicChanceAttack()
{
	return this->MagicChanceAttack;
}

void Monster_AI::setPhysicalChanceAttack(float value)
{
	this->PhysicalChanceAttack = value;
}
float Monster_AI::getPhysicalhanceAttack()
{
	return this->PhysicalChanceAttack;
}
bool Monster_AI::isAttackMagical(float chance,short difficulty,Type::MonsterType::E_Types type)
{
	
	bool tryTrue;
	while (true)
	{
		tryTrue=chance*difficulty*NumGen(1,)
	}
	return 
}
bool Monster_AI::isAttackPhysical(float chance,short difficulty)
{

}