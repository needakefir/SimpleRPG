#pragma once
#include <map>
#include "Monster.h"
#include <string>
#include <vector>
#include <iostream>
class Player : public Entity {
public:
	Player(int hp, int damage, std::string& name,int X);
	void attackEntity(Monster& m,Type::AttackType::Player_Attacks a);
	using Entity::getDamage;
	using Entity::getHP;
	int getX() const;
	void addX();
	void minusX();

	std::map<int,Type::MonsterType::E_Types>& retMap();
	void addEntityToMap(int X,Type::MonsterType::E_Types type);
	std::vector<Type::PlayerInventoryItemType::CanBeInPlayerInventory::P_Items>& retProtItems();
	bool hasResist(std::vector<Type::PlayerInventoryItemType::CanBeInPlayerInventory::P_Items>& Items, Type::AttackType::Magical_Monster_Attacks m);
	bool hasResist(std::vector<Type::PlayerInventoryItemType::CanBeInPlayerInventory::P_Items>& Items, Type::AttackType::Physical_Monster_Attacks m);
protected:
	std::vector<Type::PlayerInventoryItemType::CanBeInPlayerInventory::P_Items> P_Items;
	std::map<int,Type::MonsterType::E_Types> Map;
	int P_X;
};