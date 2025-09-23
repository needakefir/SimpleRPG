#include "Entity.h"
#include "Player.h"
#include "Monster.h"
Player::Player(int hp, int damage,std::string& name,int X=0) :Entity(hp, damage, name),P_X(X) {}
void Player::addX(){++this->P_X;}
void Player::minusX(){--this->P_X;}
void Player::addEntityToMap(int X, Type::MonsterType::E_Types type) { this->Map.emplace(X,type); }
std::map <int,Type::MonsterType::E_Types>& Player::retMap(){return this->Map;}
std::vector < Type::PlayerInventoryItemType::CanBeInPlayerInventory::P_Items> & Player::retProtItems() { return this->P_Items; }
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
