#include "Entity.h"
#include "AllTypes.h"
Entity::Entity(int hp, int damage, int protection,std::string& name):Entity_Damage(damage), Entity_HP(hp), Entity_Protection(protection),E_Name(name){}
int Entity::getDamage() const { return this->Entity_Damage; }
int Entity::getProtection() const { return this->Entity_Protection; }
int Entity::getHP() const{return this->Entity_HP; }
void Entity::setHP(int hp){	this->Entity_HP = hp;}
bool Entity::getDefeated(){return (this->getHP() <= 0) ? true : false;}
 std::ostream& operator<<(std::ostream& out, Entity& e)
{
	 return out << "The hp of" <<e.getName()<<" is " << e.getHP();
}
 std::string& Entity::getName(){ return this->E_Name; }