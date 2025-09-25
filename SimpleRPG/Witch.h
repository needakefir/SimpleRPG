#pragma once
#include "Player.h"
#include "Monster.h"
#include "Constants and Types.h"
class Witch:public Monster{
public:
	Witch(int hp, int damage,std::string& name);
	using Monster::attackPlayer;

};