#include <iostream>
#include <conio.h>
#include "Player.h"
#include "Entity.h"
#include "Monster.h"
#include "AllTypes.h"
constexpr auto Player_Fail = -1;
//Pre-announcement of needed functions
int NumGen(int min, int max);
Type::MonsterType::E_Types& RandMonsterType();
void printPlayerAttacks(Player& p);
int cooldown(short seconds);
//------
//All needed variables
int last;
int X;
Type::MonsterType::E_Types type;
char roadline[]{ "=============================================================================\n" };
//--------------------------------

int updateRoad(Player& p, short difficulty)
{
	//For a cin
	std::string chooseAttack;
	//Cooldown Durablity for a func cooldown(line 9)
	short cooldownDur;
	//Initialization of cooldown
	switch (difficulty)
	{
	case 1:
		cooldownDur = cooldownDurablity::SimpleCooldown;
		break;
	case 2:
		cooldownDur = cooldownDurablity::MiddleCooldown;
		break;
	case 3:
		cooldownDur = cooldownDurablity::HardCooldown;
		break;
	case 4:
		cooldownDur = cooldownDurablity::ImpossibleCooldown;
		break;
	}
	Monster m{ 0,0,Names::Null,Type::MonsterType::E_Types::Null };
	//Generate type of monster
	type = RandMonsterType();
	//Generate X for monster
	X = p.getX() + NumGen(3, 7);
	//Register monster
	m.registerMonster(type);
	char Ctrl;
	while (true)
	Ctrl = _getch();
	if (Ctrl == 'D' || Ctrl == 'd')
	{
		p.addX();
		//If player reaches the X then we attack the monster.If successful,then generate new
		if (p.getX() == X)
		{
			do
			{
				std::cout << roadline;
				std::cout << "Вы столкнулись с монстром!\n";
				std::cout << "Его характеристики:\n";
				std::cout << m;
				std::cout << roadline;
				std::cout << "Ваши характеристики:\n";
				std::cout << p;
				std::cout << "Выберите тип атаки:\n";
				printPlayerAttacks(p);
				std::cin >> chooseAttack;
				cooldown(cooldownDur);
			} while (m.getDefeated() || p.getDefeated());
			if (m.getDefeated())
			{
				p.addEntityToMap(X, type);
				type = RandMonsterType();
				last = X;
				X = p.getX() + NumGen(3, 7);
				m.registerMonster(type);
			}
			else if (p.getDefeated())
			{
				std::cout << "ВЫ проиграли....\n";
				return Player_Fail;

			}
		}
	}
		if (Ctrl=='a' ||Ctrl=='A')
		{
			p.minusX();
			if (p.getX() == last)
			{
				//Init last defeated monster,if player reaches his coordinates in X
				type = p.retMap().find(X)->second;
				m.registerMonster(type);
				do
				{
					std::cout << roadline;
					std::cout << "Вы столкнулись с монстром!\n";
					std::cout << "Его характеристики:\n";
					std::cout << m;
					std::cout << roadline;
					std::cout << "Ваши характеристики:\n";
					std::cout << p;
					std::cout << "Выберите тип атаки:\n";
					printPlayerAttacks(p);
					std::cin >> chooseAttack;
					cooldown(cooldownDur);
				} while (m.getDefeated() || p.getDefeated());
			}
		}
}