#pragma once
#include <map>
#include "Monster.h"
#include <string>
#include <vector>
#include <iostream>
#include "Constants and Types.h"
class Player : public Entity {
public:
	//Constructor
	Player(int hp, std::string& name, int X);
	void attackEntity(Monster& m, Type::AttackType::Player_Attacks a, short difficulty);
	using Entity::getHP;
	using Entity::setHP;
	using Entity::getName;
	int getX() const;
	void addX();
	void minusX();
	//Replaces a - to ! or any char
	std::vector < Type::PlayerInventoryItemType::P_Items>& retInventory();
	std::map<int, Type::MonsterType::E_Types>& retMap();
	void addEntityToMap(int X, Type::MonsterType::E_Types type);
	std::vector<Type::PlayerInventoryItemType::P_Items>& retPlayerItems();
	std::map<int, Type::PlayerInventoryItemType::P_Items>& retMapItems();
	std::map<int, bool>& retDefeatedOrTaken(TargetsForRetDefeatedOrTaken::Targets t);
	bool hasResist(std::vector<Type::PlayerInventoryItemType::P_Items>& Items, Type::AttackType::Magical_Monster_Attacks m);
	bool hasResist(std::vector<Type::PlayerInventoryItemType::P_Items>& Items, Type::AttackType::Physical_Monster_Attacks m);
protected:
	//Items in Player Inventory
	std::vector<Type::PlayerInventoryItemType::P_Items> P_Items;
	//Map for Monsters
	std::map<int, Type::MonsterType::E_Types> Map_Monsters;
	//Map for items on road 
	std::map<int, Type::PlayerInventoryItemType::P_Items> Items_On_Road;
	//For defeated monsters
	std::map<int, bool> Map_Defeated_Monsters;
	//For taken items
	std::map<int, bool> Map_Taken_Items;
	//X of player on road
	int P_X;
	//Active protection items 
	std::map < Type::PlayerInventoryItemType::P_Items, bool> Active_Protection_Items;
};