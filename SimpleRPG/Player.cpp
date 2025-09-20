#include "Entity.h"
#include "Player.h"
#include <string>
Player::Player(int hp, int damage, int protection, std::string& name) :Entity(hp, damage, protection), Pname(name) {}
void Player::addX(){++this->E_X;}
void Player::minusX(){--this->E_X;}
void Player::addEntityToMap(Type::MonsterType::E_Types& Entity,int X){this->Map.emplace(Entity, X);}
std::map <Type::MonsterType::E_Types, int>& Player::retMap()
{
	return this->Map;
}

void Player::attackEntity(Entity& e, Type::AttackType::Attack a)
{

}
	