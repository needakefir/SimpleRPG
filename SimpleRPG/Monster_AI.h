#pragma once
#include "Constants and Types.h"
class Monster_AI {
public:
	void setMagicChanceAttack(float value);
	float getMagicChanceAttack();
	void setPhysicalChanceAttack(float value);
	float getPhysicalhanceAttack();
	bool isAttackMagical(float chance, short difficulty, Type::MonsterType::E_Types type, Type::AttackType::Magical_Monster_Attacks m);
	bool isAttackPhysical(float chance, short difficulty, Type::MonsterType::E_Types type, Type::AttackType::Physical_Monster_Attacks ph);
private:
	float MagicChanceAttack;
	float PhysicalChanceAttack;
};