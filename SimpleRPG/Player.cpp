#include "Entity.h"
#include "Player.h"
#include <string>
Player::Player(int hp, int damage, int protection, std::string& name) :Entity(hp, damage, protection), Pname(name) {}
void Player::addX(){++this->P_X;}
void Player::minusX(){--this->P_X;}
void Player::addEntityToMap(Type::MonsterType::E_Types& type,int X){this->Map.emplace(type, X);}
std::map <Type::MonsterType::E_Types, int>& Player::retMap()
{
	return this->Map;
}
std::vector<Type::PlayerInventoryItemType::PlayerProtectionItems::P_Items>& Player::retProtItems()
{
	return this->Prot_Items;
}
int Player::getX()
{
	return this->P_X;
}
