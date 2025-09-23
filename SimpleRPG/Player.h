#pragma once
#include <map>
#include "Entity.h"
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
	std::map<Type::MonsterType::E_Types, int>& retMap();
	void addEntityToMap(Type::MonsterType::E_Types& type,int X);
	std::vector<Type::PlayerInventoryItemType::PlayerProtectionItems::P_Items>& retProtItems();
	bool hasResist(std::vector<Type::PlayerInventoryItemType::PlayerProtectionItems::P_Items>& Items, Type::AttackType::Magical_Monster_Attacks m);
	bool hasResist(std::vector<Type::PlayerInventoryItemType::PlayerProtectionItems::P_Items>& Items, Type::AttackType::Physical_Monster_Attacks m);
protected:
	std::vector<Type::PlayerInventoryItemType::PlayerProtectionItems::P_Items> Prot_Items;
	std::map<Type::MonsterType::E_Types,int> Map;
	int P_X;
};