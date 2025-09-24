#include <iostream>
#include <conio.h>
#include "Player.h"
#include "Entity.h"
#include "Monster.h"
#include <cstdlib>
#include "Constants and Types.h"
constexpr auto Player_Fail = -1;
//For a updating road
constexpr auto RoadLength = 78;
//Pre-announcement of needed functions
int NumGen(int min, int max);
Type::MonsterType::E_Types& RandMonsterType();
void printPlayerAttacks(Player& p);
std::string cooldown(short seconds);
void printRoad(const char* HeadPlayer, const char* BodyPlayer, const char* roadline);
//------
//All needed variables
//-----------------------
//For a road update
short i{};
short countRoad{};
int last;
int X;
Type::MonsterType::E_Types type;
char roadline[]{   "=============================================================================\n" };
char HeadPlayer[]{ "O                                                                            \n" };
char BodyPlayer[]{ "V-----------------------------------------------------------------------------" };
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
	//Print Road
	printRoad(HeadPlayer,BodyPlayer,roadline);
	char Ctrl;
	while (true)
	Ctrl = _getch();
	if (Ctrl == 'D' || Ctrl == 'd')
	{
		system("cls");
		std::swap(HeadPlayer[i], HeadPlayer[i + 1]);
		std::swap(BodyPlayer[i], BodyPlayer[i + 1]);
		printRoad(HeadPlayer, BodyPlayer, roadline);
		++i;
		p.addX();
		if (p.getX() == RoadLength * countRoad)
		{
			std::swap(HeadPlayer[0], HeadPlayer[78]);
			std::swap(BodyPlayer[0], BodyPlayer[78]);
			++countRoad;
			system("cls");
			printRoad(HeadPlayer, BodyPlayer, roadline);
		}
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
				std::string attack{ cooldown(cooldownDur) };
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
			system("cls");
			std::swap(HeadPlayer[i-1], HeadPlayer[i]);
			std::swap(BodyPlayer[i-1], BodyPlayer[i]);
			--i;
			printRoad(HeadPlayer, BodyPlayer, roadline);
			p.minusX();
			if (i == 0)
			{
				system("cls");
				--countRoad;
				p.replaceCharFromMap(BodyPlayer, RoadLength, countRoad);
				printRoad(HeadPlayer, BodyPlayer, roadline);
			}
			//If player reaches the position of last monster,then init this monster
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
					std::string attack{ cooldown(cooldownDur) };
				} while (m.getDefeated() || p.getDefeated());
			}
		}
}