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
			std::cout << "������� ��� ��������:" << seconds - static_cast<int>(elapsed / CLOCKS_PER_SEC);
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
		std::cout << "� ������ ���� ��� ���� ������������ �� ������,��������� W,S!\n";
		system("pause");
		std::cout << "��� ���� ����� ��������� � ���� �������:\n";
		system("pause");
		std::cout << "=============================================================================\n";
		std::cout << "O                                       +                                     \n";
		std::cout << "V---------------------------------------!--------------------------?---------\n";
		std::cout << "=============================================================================\n";
		system("pause");
		std::cout << "���� ������� ��������,��� ��� ��� ���������� ��� ����� �������� ����� ��������.\n";
		system("pause");
		std::cout << "��������������� ���� ��������,��� �� ���� ���������� ������,�������� ���� ��������...\n";
		system("pause");
		std::cout << "������ �������� ����� ������� ����������� NPC,� ��� ����� ��������� �����,����� �������� ������ ����...\n";
		std::cout << "����� ����� �������� 4:�����,������,������,������\n";
		system("pause");
		std::cout << "� ����� 4 ���� ����:�������,�����,�����,������!\n";
		system("pause");
		std::cout << "����� �������� �� ��� ����:��� ������ ��� ��������������� \n";
		system("pause");
		std::cout << "���� ��������� ���� �� ���� ������,� ���� ����� ������� ������ �����!\n";
		system("pause");
		std::cout << "� ������ Simple ������� 20 ������ �� ��������,Middle-15,Hard-10,Impossible-5\n";
		std::cout << "��� ��������� �������� �� ������� ���� � ����:3\n";
		std::cout << "������� ��� �������� ���!";
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