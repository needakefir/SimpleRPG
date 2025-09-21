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
//Preliminary announcement;
void updateRoad(Player& P);
void startGame(unsigned short code,std::string& name)
{
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
		std::cout << "Податаки магии:(в разработке)\n";
		system("pause");
		std::cout << "Дабы усложнить игру на всех этапах,в игре будет таймаут выбора атаки!\n";
		system("pause");
		std::cout << "В режиме Simple таймаут 20 секунд на действие,Middle-15,Hard-10,Impossible-5\n";
		std::cout << "Все остальные механики вы узнаете лишь в игре:3\n";
		std::cout << "Удачных вам голодных игр!";
		system("cls");
		break;
	case 1:
		Player player{100,10,10,name};
		Witch Witch{ 150,25,3 };
		while (true)
		{
			updateRoad(player);

		}
	}
}