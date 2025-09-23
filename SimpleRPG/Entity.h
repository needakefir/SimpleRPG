#pragma once
#include "AllTypes.h"
#include <ostream>
class Entity {
	public:
		Entity(int hp,int damage,std::string& name);
		int getHP() const ;
		int getDamage() const ;
		void setHP(int hp) ;
		bool getDefeated();
		std::string& getName();
		void setDamage(int damage);
		void setName(std::string& name);
		friend std::ostream& operator<<(std::ostream& out, Entity& e);
	protected:	
		int Entity_HP;
		int Entity_Damage;
		std::string E_Name;
};
