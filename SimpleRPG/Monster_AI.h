#pragma once
#include "Constants and Types.h"
class Monster_AI {
public:
	void setMagicChanceAttack(float value);
	float getMagicChanceAttack();
	void setPhysicalChanceAttack(float value);
	float getPhysicalhanceAttack();
	bool isAttackMagical(float chance);
	bool isAttackPhysical(float chance);
protected:
	float MagicChanceAttack;
	float PhysicalChanceAttack;
};