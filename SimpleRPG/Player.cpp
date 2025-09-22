#include "Entity.h"
#include "Player.h"
#include "Monster.h"
Player::Player(int hp, int damage, int protection, std::string& name,int X=0) :Entity(hp, damage, protection, name),P_X(X) {}
void Player::addX(){++this->P_X;}
void Player::minusX(){--this->P_X;}
void Player::addEntityToMap(Type::MonsterType::E_Types& type,int X){this->Map.emplace(type, X);}
std::map <Type::MonsterType::E_Types, int>& Player::retMap(){return this->Map;}
std::vector<Type::PlayerInventoryItemType::PlayerProtectionItems::P_Items>& Player::retProtItems(){return this->Prot_Items;}
int Player::getX() const{return this->P_X;}
void Player::attackEntity(Monster& m, Type::AttackType::Player_Attacks a)
{
	if (m.hasResist(a))
		;
	else
	{
		m.setHP(m.getHP() - this->getDamage());
	}

}
