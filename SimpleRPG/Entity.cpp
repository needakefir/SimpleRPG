#include "Entity.h"
#include "AllTypes.h"
Entity::Entity(int hp, int damage,std::string& name):Entity_Damage(damage), Entity_HP(hp),E_Name(name){}
int Entity::getDamage() const { return this->Entity_Damage; }
int Entity::getHP() const{return this->Entity_HP; }
void Entity::setHP(int hp){	this->Entity_HP = hp;}
bool Entity::getDefeated(){return (this->getHP() <= 0) ? true : false;}
 std::ostream& operator<<(std::ostream& out, Entity& e)
{
	 return out << "The hp of" <<e.getName()<<" is " << e.getHP();
}
 std::string& Entity::getName(){ return this->E_Name; }
 void Entity::setDamage(int damage){this->Entity_Damage = damage;}
 void Entity::setName(std::string& name){this->E_Name = name;}
 void Entity::increaseDamage(Type::AttackType::Player_Attacks a)
 {

 }
 void Entity::increaseDamage(Type::AttackType::Physical_Monster_Attacks W)
 {

 }
 void Entity::increaseDamage(Type::AttackType::Magical_Monster_Attacks M)
 {

 }