#include "Entity.h"
Entity::Entity(int hp, int damage, int protection,int X=0):Entity_Damage(damage), Entity_HP(hp), Entity_Protection(protection),E_X(X) {}
int Entity::getDamage(){return this->Entity_HP;}
int Entity::getProtection() { return this->Entity_Protection; }
int Entity::getHP() {return this->Entity_HP; }
int Entity::getX(){return this->E_X;}
void Entity::setHP(int hp){	this->E_X = hp;}
bool Entity::hasResist(Type::AttackType::Attack a)
{
	if(this->)
	return false;

}