#pragma once
#include "Constants and Types.h"
class Monster_AI {
public:
	void setMagicChanceAttack(float value);
	float getMagicChanceAttack();
	void setPhysicalChanceAttack(float value);
	float getPhysicalhanceAttack();
	bool isAttackMagical(float chance,short difficulty);
	bool isAttackPhysical(float chance,short difficulty);
private:
	float MagicChanceAttack;
	float PhysicalChanceAttack;
};