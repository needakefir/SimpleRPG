#include "Monster.h"
#include "Player.h"
bool Monster::attackPlayer(Player& p, Type::AttackType::Attack a)
{
	if (p.hasResist(a))
	{
		p.setHP(p.getHP() - this->getDamage());
		return true;
	}
	return false;
}
