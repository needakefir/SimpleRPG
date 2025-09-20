#include <iostream>
#include <conio.h>
#include "Player.h"
#include <vector>
#include "Entity.h"
int NumGen(int min, int max);
Type::EntityType::E_Types& RandEntityType();
void updateRoad(Player& p)
{
	char Ctrl;
	while (true)
		Ctrl = _getch();
		if (Ctrl == 'W' || Ctrl == 'w')
		{

			p.addX();
			system("cls");
			std::cout << "=============================================================================\n";
			p.addEntityToMap(RandEntityType(), p.getX() + NumGen(2, 5));
			if(p.retMap().find()->second)
		}
		if(Ctrl=='S' || Ctrl=='s')
		{
			p.minusX();
			system("cls");

		}
}