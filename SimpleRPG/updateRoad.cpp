#include <iostream>
#include <conio.h>
#include "Player.h"
#include "Entity.h"
#include "Monster.h"
int NumGen(int min, int max);
Type::MonsterType::E_Types& RandMonsterType();
void updateRoad(Player& p,short difficulty)
{
	Monster m;
	//Create a new monster;
	Type::MonsterType::E_Types M = RandMonsterType();
	int X = p.getX() + NumGen(3, 7);
	m.registerMonster(M,difficulty);
	//Add to a memory 
	p.addEntityToMap(M,X);

	char Ctrl;
	while (true)
		Ctrl = _getch();
		if (Ctrl == 'D' || Ctrl == 'd')
		{
			//If player reaches the X and monster got defeated,then generate a new;
			if (p.getX() == X)
			{
				do
				{
					
				} while (!m.getDefeated());
				M = RandMonsterType();
				X = p.getX() + NumGen(3, 7);
			}
		}
		if (Ctrl=='a' ||Ctrl=='A')
		{
			p.minusX();
			system("cls");
		}
}