//main ���� ����
// 
#include <iostream>
#include <string>
void startGame(unsigned short code,std::string& name);
int main()
{
	std::string player_name;
	char Difficulty;
	std::cout<< "----------------------------------------------------------------------------------------------\n";
	std::cout<< "����� ���������� � SimpleRPG!\n";
	std::cout << "����������,������� ���� ��� ��� ���������� ����!\n";
	std::getline(std::cin, player_name);
	std::cout << "����������,�������� ������� ���������!\n";
	std::cout << "S-Simple,M-Middle,H-Hard,I-Impossible:\n";
	std::cout << "��� ������������ � ����� ������ ������� ���������:G-Guest!\n";
	std::cout << "��� ����� ������� ������ ����� ������ ���������!";
	do
	{
		std::cin >> Difficulty;
		if (std::cin.fail())
		{
			std::cerr << "������ ���������� ������!\n";
			std::cout << "S-Simple,M-Middle,H-Hard,I-Impossible,G-Guest:\n";
			std::cout << "����������,������� ��� ��� ��� �����������!";
		}
	} while (Difficulty !='G'|| Difficulty!='S' || Difficulty!='M' || Difficulty!='H' || Difficulty!='I');
	switch (Difficulty)
	{
	case 'G':
		std::cout << "�� ������� �������� ����� ��� ������������ � �����!:\n";
		startGame(0,player_name);
		break;
	case 'S':
		std::cout << "�� ������� ������� ���������:Simple!\n";
		startGame(1,player_name);
		break;
	case 'M':
		std::cout << "�� ������� ������� ���������:Middle!\n";
		startGame(2,player_name);
	case 'H':
		std::cout << "�� ������� ������� ���������:Hard!\n";
		startGame(3,player_name);
		break;
	case 'I':
		std::cout << "�� ������� ������� ���������:Impossible!\n";
		startGame(4, player_name);
		break;
	}
	return 0;
}