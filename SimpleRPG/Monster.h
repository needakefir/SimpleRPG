#pragma once
#include "Player.h"
#include  "Entity.h"
class Monster : public Entity
{
public:
	Monster();
	Monster(int hp, int damage, int protection, Type::MonsterType::E_Types type = Type::MonsterType::E_Types::Null);
	//include a Entity methods
	using Entity::getHP;
	using Entity::getDamage;
	using Entity::getProtection;
	using Entity::setHP;
	using Entity::getDefeated;
	//-----------------------------
	bool hasResist(Type::AttackType::playerAttacks Attack);
	bool attackPlayer(Player& p, Type::AttackType::monsterAttacks a);
	Monster registerMonster(Type::MonsterType::E_Types type,short difficulty);
protected:
	Type::MonsterType::E_Types M_type;
	Type::AttackType::monsterAttacks M_A;
};