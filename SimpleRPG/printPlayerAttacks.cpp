#include "Player.h"
#include "AllTypes.h"
#include <vector>
void printPlayerAttacks(Player& p)
{
	std::cout << "���� ���������� �����:���,���,�����(Sword,Bow,Fist).\n";
	std::
	for ( auto type : p.retProtItems())
	{
		if (type == Type::PlayerInventoryItemType::CanBeInPlayerInventory::P_Items::FireSwordPaper) {
			std::cout << "�� ������ ������������ ���������� ��� ����,����� ������� ��� ��������!\n";
			std::cout << "����� ������������,������� FireSword:";
		}
		else if (type == Type::PlayerInventoryItemType::CanBeInPlayerInventory::P_Items::IceBowPaper)
		{
			std::cout << "�� ������ ������������ ���������� ��� ����,����� ������� ��� ������ ��������!\n";
			std::cout << "����� ������������,������� IceBow:";
		}
		else if (type == Type::PlayerInventoryItemType::CanBeInPlayerInventory::P_Items::IronFistPaper)
		{
			std::cout << "�� ������ ������������ ����������,����� ������� ���� ���� ��������� � ��������� ����!\n";
			std::cout << "����� ������������,������� IronFist:";
		}
	}
}