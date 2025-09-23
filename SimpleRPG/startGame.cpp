#include "Player.h"
#include "Entity.h"
#include "Witch.h"
#include <iostream>

//Preliminary announcement of updateRoad;
int updateRoad(Player& P,short difficulty);
//global Player
void startGame(unsigned short code,std::string& name)
{
	Player p{ 0,0,0,name};
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
		std::cout << "� ������ Simple ������� 15 ������ �� ��������,Middle-10,Hard-7,Impossible-4\n";
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
		while (true)
		{
			updateRoad(p, 2);
		}
		break;
	case 3:
		//Hard
		while (true)
		{
			updateRoad(p, 3);
		}
		break;
		//Impossible
	case 4:
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