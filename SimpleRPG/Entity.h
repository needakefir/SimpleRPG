#pragma once
#include "AllTypes.h"
class Entity {
	public:
		Entity(int hp, int damage, int protection,int X=0);
		int getHP();
		int getProtection();
		int getDamage();
		int getX();
		void setHP(int hp);
		bool hasResist(Type::AttackType::Attack a);
	protected:	
		int Entity_HP;
		int Entity_Damage;
		int Entity_Protection;
		int E_X;
		Type::AttackType::Attack resist;
};