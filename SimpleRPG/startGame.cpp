#include "Player.h"
#include "Entity.h"
#include "Witch.h"
#include <iostream>
//Cooldown for a player attack choose;
void cooldown(int seconds)
{
	int time{ 1 };
	clock_t start=clock();
	clock_t end = seconds * CLOCKS_PER_SEC;
	clock_t elapsed;
	do
	{
		elapsed = clock() - start;
		if (elapsed == time * CLOCKS_PER_SEC)
		{
			std::cout << "Времени для раздумия:" << seconds - static_cast<int>(elapsed / CLOCKS_PER_SEC);
			++time;
		}
	} while (elapsed<end);
}
//Preliminary announcement of updateRoad;
void updateRoad(Player& P,short difficulty);
//global Player
void startGame(unsigned short code,std::string& name)
{
	Player p{ 0,0,0,name,0 };
	setlocale(LC_ALL, "Russian");
	switch (code)
	{
	case 0:
		std::cout << "В данной игре вам надо продвигаться по дороге,используя W,S!\n";
		system("pause");
		std::cout << "Ваш путь будет отображен в виде дорожки:\n";
		system("pause");
		std::cout << "=============================================================================\n";
		std::cout << "O                                       +                                     \n";
		std::cout << "V---------------------------------------!--------------------------?---------\n";
		std::cout << "=============================================================================\n";
		system("pause");
		std::cout << "Знак вопроса означает,что при его достижении вам будет доступен новый артефакт.\n";
		system("pause");
		std::cout << "Восклицательный знак означает,что на пути встретится монстр,которого надо победить...\n";
		system("pause");
		std::cout << "Сверху плюсиком будет отмечен побежденный NPC,с ним можно сразиться снова,чтобы отточить навыки игры...\n";
		std::cout << "Всего типов монстров 4:Зомби,Ведьма,Рыцарь,Монстр\n";
		system("pause");
		std::cout << "И всего 4 типа атак:Кулаком,Мечом,Луком,Магией!\n";
		system("pause");
		std::cout << "Магия поделена на два типа:для оружия или самостоятельная \n";
		system("pause");
		std::cout << "Дабы усложнить игру на всех этапах,в игре будет таймаут выбора атаки!\n";
		system("pause");
		std::cout << "В режиме Simple таймаут 20 секунд на действие,Middle-15,Hard-10,Impossible-5\n";
		std::cout << "Все остальные механики вы узнаете лишь в игре:3\n";
		std::cout << "Удачных вам голодных игр!";
		system("cls");
		break;
		//Simple
	case 1:
		while (true)
		{
			updateRoad(p,1);

		}
		break;
		//Middle
	case 2:
		 p{130,12,8,name,0 };
		while (true)
		{
			updateRoad(p, 2);
		}
		break;
	case 3:
		//Hard
		 p{115,10,7,name,0 };
		while (true)
		{
			updateRoad(p, 3);

		}
		break;
		//Impossible
	case 4:
		 p{100,9,5,name,0 };
		while (true)
		{
			updateRoad(p, 4);

		}
		break;
		//Do nothing
	default:
		;
	}
}