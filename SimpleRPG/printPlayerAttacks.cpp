#include "Player.h"
#include "Constants and Types.h"
#include <vector>
void printPlayerAttacks(Player& p)
{
	std::cout << "Ваши стандартые атаки:Меч,Лук,Кулак(Sword,Bow,Fist).\n";
	for ( auto type : p.retProtItems())
	{
		if (type == Type::PlayerInventoryItemType::P_Items::FireSwordPaper) {
			std::cout << "Вы можете использовать заклинание для меча,чтобы сделать его огненным!\n";
			std::cout << "Чтобы использовать,введите FireSword:";
		}
		else if (type == Type::PlayerInventoryItemType::P_Items::IceBowPaper)
		{
			std::cout << "Вы можете использовать заклинание для лука,чтобы сделать его стрелы ледяными!\n";
			std::cout << "Чтобы использовать,введите IceBow:";
		}
		else if (type == Type::PlayerInventoryItemType::P_Items::IronFistPaper)
		{
			std::cout << "Вы можете использовать заклинание,чтобы сделать свои руки железными и увеличить урон!\n";
			std::cout << "Чтобы использовать,введите IronFist:";
		}
	}
}