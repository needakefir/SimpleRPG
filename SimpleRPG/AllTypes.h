#pragma once
//Здесь хранятся все необходимые константы для работы программы!
namespace Type {
	namespace AttackType{
		enum class monsterAttacks {
			
		};
		enum class playerAttacks {
			MAGIC,
			SWORD,
			FIST,
			BOW
		};
	}
	namespace MonsterType {
		enum class E_Types {
			Null,
			Witch,
			Knight,
			Goblin,
			Yeti
		};
	}
	namespace PlayerInventoryItemType
	{
		//FirePaper is the one of items in inventory,that give a player resistance to a fire attack;
		//A shield gives a resistance for a physical attacks of monsters;
		// IceBall gives resistance for a Ice Attacks;
		// RespawnPaper can respawn player,and player can continue the game from place he dies;
		namespace PlayerProtectionItems {
			enum class P_Items {
				FirePaper,
				Shield,
				IceBall,
				RespawnPaper
			};
		}
	}
}