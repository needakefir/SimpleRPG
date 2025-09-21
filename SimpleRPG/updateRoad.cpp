#include <iostream>
#include <conio.h>
#include "Player.h"
#include <vector>
#include "Entity.h"
#include "Monster.h"
int NumGen(int min, int max);
Type::MonsterType::E_Types& RandMonsterType();
void updateRoad(Player& p)
{
	Monster m;
	//Create a new monster;
	Type::MonsterType::E_Types M = RandMonsterType();
	m.registerMonster(M);
	//Add to a memory 
	p.addEntityToMap(M,p.getX() + NumGen(3, 7));

	char Ctrl;
	while (true)
		Ctrl = _getch();
		if (Ctrl == 'W' || Ctrl == 'w')
		{
			//If player reaches the X and monster got defeated,then generate a new;
			if (p.getX() == p.retMap().find(M)->second && m.getDefeated())
			{
				M = RandMonsterType();
				p.addEntityToMap(M, p.getX() + NumGen(3, 5));

			}
		}
		if(Ctrl=='S' || Ctrl=='s')
		{
			p.minusX();
			system("cls");

		}
}