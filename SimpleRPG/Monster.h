#pragma once
#include "Player.h"
#include  "Entity.h"
class Monster : public Entity
{
public:
	Monster(int hp, int damage, std::string& name,Type::MonsterType::E_Types type= Type::MonsterType::E_Types::Null);
	//include a Entity methods
	using Entity::getHP;
	using Entity::getDamage;
	using Entity::setHP;
	using Entity::getDefeated;
	using Entity::setName;
	using Entity::setDamage;
	//-----------------------------
	void setType(Type::MonsterType::E_Types type);
	bool hasResist(Type::AttackType::Player_Attacks Attack);
	bool attackPlayer(Player& p, Type::AttackType::Physical_Monster_Attacks a);
	bool attackPlayer(Player& p, Type::AttackType::Magical_Monster_Attacks a);
	Monster registerMonster(Type::MonsterType::E_Types type);
protected: 
	Type::MonsterType::E_Types M_type;
	Type::AttackType::Magical_Monster_Attacks M_A;
	Type::AttackType::Physical_Monster_Attacks Ph_A;
};