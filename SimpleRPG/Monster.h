#pragma once
#include "Player.h"
#include  "Entity.h"
class Monster : public Entity
{
	bool attackPlayer(Player& p,Type::AttackType::Attack a);
	using Entity::getHP;
	using Entity::getDamage;
	using Entity::getProtection;
	using Entity::setHP;
	using Entity::hasResist;
};