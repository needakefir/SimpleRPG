#include "Entity.h"
Entity::Entity(int hp, int damage, int protection):Entity_Damage(damage), Entity_HP(hp), Entity_Protection(protection){}
int Entity::getDamage() { return this->Entity_Damage; }
int Entity::getProtection() { return this->Entity_Protection; }
int Entity::getHP() {return this->Entity_HP; }
void Entity::setHP(int hp){	this->Entity_HP = hp;}
bool Entity::getDefeated(){return (this->getHP() <= 0) ? true : false;}