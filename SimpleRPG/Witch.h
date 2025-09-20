#pragma once
#include "Player.h"
#include "Monster.h"
#include "AllTypes.h"
class Witch:public Monster{
public:
	Witch(int hp, int damage, int protection);
	using Monster::attackPlayer;

};