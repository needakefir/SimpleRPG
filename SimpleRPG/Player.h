#pragma once
#include <map>
#include "Entity.h"
#include <string>
class Player : public Entity {
public:
	Player(int hp, int damage, int protection, std::string& name);
	void attackEntity(Entity& e,Type::AttackType::Attack a);
	using Entity::getDamage;
	using Entity::getHP;
	using Entity::getProtection;
	using Entity::hasResist;
	void addX();
	void minusX();
	std::map<Type::MonsterType::E_Types, int>& retMap();
	void addEntityToMap(Type::MonsterType::E_Types& Entity,int X);
protected:
	std::vector<
	std::map<Type::MonsterType::E_Types,int> Map;
	std::string Pname;
};