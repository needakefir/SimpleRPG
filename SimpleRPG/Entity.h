#pragma once
#include "AllTypes.h"
#include <ostream>
class Entity {
	public:
		Entity(int hp,int damage, int protection,std::string& name);
		int getHP() const ;
		int getProtection() const;
		int getDamage() const ;
		void setHP(int hp) ;
		bool getDefeated();
		std::string& getName();
		void increaseDamage(Type::AttackType::Player_Attacks a);
		void increaseDamage(Type::AttackType::Physical_Monster_Attacks W);
		void increaseDamage(Type::AttackType::Magical_Monster_Attacks M);
		friend std::ostream& operator<<(std::ostream& out, Entity& e);
	protected:	
		int Entity_HP;
		int Entity_Damage;
		int Entity_Protection;
		std::string E_Name;
};
