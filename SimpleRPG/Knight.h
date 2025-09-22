#pragma once
#include "Monster.h"
#include "Entity.h"
class Knight :public Monster
{
public:
	using Monster::attackPlayer;
	using Monster::hasResist;
	using Monster::registerMonster;
protected:

};