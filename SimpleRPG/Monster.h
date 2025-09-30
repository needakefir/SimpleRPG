#pragma once
#include "Player.h"
#include  "Entity.h"
#include "Monster_AI.h"
class Monster : public Entity
{
public:
	Monster(int hp,std::string& name,Type::MonsterType::E_Types type= Type::MonsterType::E_Types::Null);
	//include a Entity methods
	using Entity::getHP;
	using Entity::setHP;
	using Entity::getDefeated;
	using Entity::setName;
	//-----------------------------
	void setType(Type::MonsterType::E_Types type);
	Type::MonsterType::E_Types getType();
	bool hasResist(Type::AttackType::Player_Attacks Attack);
	bool attackPlayer(Player& p,Type::MonsterType::E_Types type,short difficulty);
	Monster registerMonster(Type::MonsterType::E_Types type);
protected: 
	Monster_AI AI;
	Type::MonsterType::E_Types M_type;
	Type::AttackType::Magical_Monster_Attacks M_A;
	Type::AttackType::Physical_Monster_Attacks Ph_A;
};