#include "Entity.h"
#include "Constants and Types.h"
Entity::Entity(int hp,std::string& name):Entity_HP(hp),E_Name(name){}
int Entity::getHP() const{return this->Entity_HP; }
void Entity::setHP(int hp){	this->Entity_HP = hp;}
bool Entity::getDefeated(){return (this->getHP() <= 0) ? true : false;}
 std::ostream& operator<<(std::ostream& out, Entity& e)
{
	 return out << "The hp of" <<e.getName()<<" is " << e.getHP();
}
 std::string& Entity::getName(){ return this->E_Name; }
 void Entity::setName(std::string& name){this->E_Name = name;}