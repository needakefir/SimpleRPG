#pragma once
#include "AllTypes.h"
class Entity {
	public:
		Entity(int hp, int damage, int protection);
		int getHP();
		int getProtection();
		int getDamage();
		void setHP(int hp);
		bool getDefeated();
	protected:	
		int Entity_HP;
		int Entity_Damage;
		int Entity_Protection;
};