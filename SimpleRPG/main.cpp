//main file SimpleRPG
//maded by needakefir
//This is the simpiest cpp file i wrote int this project
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
void startGame(unsigned short code,std::string& name);
int main()
{
	srand(static_cast<unsigned int>(time(0)));
	std::string player_name;
	char Difficulty;
	std::cout << "Created by needakefir!\n";
	std::cout << "Also the link on my github:https://github.com/needakefir";
	std::cout<< "----------------------------------------------------------------------------------------------\n";
	std::cout<< "Добро пожаловать в SimpleRPG!\n";
	std::cout << "Пожалуйста,введите ваше имя для дальнейшей игры!\n";
	std::getline(std::cin, player_name);
	std::cout << "Пожалуйста,выберите уровень сложности!\n";
	std::cout << "S-Simple,M-Middle,H-Hard,I-Impossible:\n";
	std::cout << "Для ознакомления с игрой можете выбрать сложность:G-Guest!\n";
	std::cout << "Для этого введите первую букву режима сложности!";
	do
	{
		std::cin >> Difficulty;
		if (std::cin.fail())
		{
			std::cerr << "Ошибка считывания режима!\n";
			std::cout << "S-Simple,M-Middle,H-Hard,I-Impossible,G-Guest:\n";
			std::cout << "Пожалуйста,введите еще раз для продолжения!";
		}
	} while (Difficulty !='G' &&  Difficulty!='S' &&  Difficulty!='M' && Difficulty!='H' && Difficulty!='I');
	switch (Difficulty)
	{
	case 'G':
		std::cout << "Вы выбрали гостевой режим для ознакомления с игрой!:\n";
		std::cout << "----------------------------------------------------------------------------------------------\n";
		startGame(0,player_name);
		break;
	case 'S':
		std::cout << "Вы выбрали уровень сложности:Simple!\n";
		std::cout << "----------------------------------------------------------------------------------------------\n";
		startGame(1,player_name);
		break;
	case 'M':
		std::cout << "Вы выбрали уровень сложности:Middle!\n";
		std::cout << "----------------------------------------------------------------------------------------------\n";
		startGame(2,player_name);
		break;
	case 'H':
		std::cout << "Вы выбрали уровень сложности:Hard!\n";
		std::cout << "----------------------------------------------------------------------------------------------\n";
		startGame(3,player_name);
		break;
	case 'I':
		std::cout << "Вы выбрали уровень сложности:Impossible!\n";
		std::cout << "----------------------------------------------------------------------------------------------\n";
		startGame(4, player_name);
		break;
	default:
		;
	}
	return 0;
}
//End.......