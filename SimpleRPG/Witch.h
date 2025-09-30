#pragma once
#include "Player.h"
#include "Monster.h"
#include "Constants and Types.h"
class Witch:public Monster{
public:
	Witch(int hp,std::string& name);
	using Monster::attackPlayer;

};