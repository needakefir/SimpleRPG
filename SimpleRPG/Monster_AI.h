#pragma once
#include "Constants and Types.h"
class Monster_AI {
public:
	void SetAI();
	double getChance();
	void setChance(float chance);
protected:
	float ChanceForAttack;


};