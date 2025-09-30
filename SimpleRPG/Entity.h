#pragma once
#include "Constants and Types.h"
#include <ostream>
class Entity {
	public:
		Entity(int hp,std::string& name);
		int getHP() const ;
		void setHP(int hp) ;
		bool getDefeated();
		std::string& getName();
		void setName(std::string& name);
		friend std::ostream& operator<<(std::ostream& out, Entity& e);
	protected:	
		int Entity_HP;
		std::string E_Name;
};
