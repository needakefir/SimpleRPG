#include "Entity.h"
#include "Player.h"
#include "Monster.h"
#include "Constants and Types.h"
#include "Increase and Reduction Damage.h"
#include "retDamageScoreByTypeOfAttack.h"
Player::Player(int hp,std::string& name,int X=0) :Entity(hp,name),P_X(X) {}
void Player::addX(){++this->P_X;}
void Player::minusX(){--this->P_X;}
void Player::addEntityToMap(int X, Type::MonsterType::E_Types type) { this->Map_Monsters.emplace(X,type); }
std::map <int,Type::MonsterType::E_Types>& Player::retMap(){return this->Map_Monsters;}
std::vector < Type::PlayerInventoryItemType::P_Items>& Player::retPlayerItems() { return this->P_Items; }
int Player::getX() const{return this->P_X;}
std::vector<Type::PlayerInventoryItemType::P_Items>& Player::retInventory() {
	return this->P_Items;
}
void Player::attackEntity(Monster& m, Type::AttackType::Player_Attacks a,short difficulty)
{
	m.setHP(m.getHP() - retDamageScoreByTypeOfAttack(a) * ReductionDamageForPlayer(difficulty));
}
std::map<int, bool>& Player::retDefeatedOrTaken(TargetsForRetDefeatedOrTaken::Targets t)
{
	if (t == TargetsForRetDefeatedOrTaken::Targets::DEFEATED)
	{
		return this->Map_Defeated_Monsters;
	}
	else if (t == TargetsForRetDefeatedOrTaken::Targets::TAKEN)
	{
		return this->Map_Taken_Items;
	}
}
bool hasResist(std::vector<Type::PlayerInventoryItemType::P_Items>& Items, Type::AttackType::Magical_Monster_Attacks m)
{
	for (auto& n : Items)
	{

	}
}
bool hasResist(std::vector<Type::PlayerInventoryItemType::P_Items>& Items, Type::AttackType::Physical_Monster_Attacks m)
{

}
std::map<int, Type::PlayerInventoryItemType::P_Items>& Player::retMapItems()
{
	return this->Items_On_Road;
}
