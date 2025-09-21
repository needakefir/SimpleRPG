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
//Preliminary announcement;
void updateRoad(Player& P);
void startGame(unsigned short code,std::string& name)
{
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
		std::cout << "�������� �����:(� ����������)\n";
		system("pause");
		std::cout << "���� ��������� ���� �� ���� ������,� ���� ����� ������� ������ �����!\n";
		system("pause");
		std::cout << "� ������ Simple ������� 20 ������ �� ��������,Middle-15,Hard-10,Impossible-5\n";
		std::cout << "��� ��������� �������� �� ������� ���� � ����:3\n";
		std::cout << "������� ��� �������� ���!";
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