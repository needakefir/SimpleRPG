#pragma once
#include <string>
#include <vector>
//Main namespace Type,that includes a needed types of attacks,monstertype and etc.
namespace Type
{
	namespace AttackType
	{
		enum class Magical_Monster_Attacks {
			PotionOfUndying,
			SunLight,
			WaterCutter,
		};
		enum class Physical_Monster_Attacks {
			Stone,
			ThrowSand,
			Stick,

		};
		enum class Player_Attacks
		{
			
			//Physical
			BOW,
			SWORD,
			FIST,
			//-Magical Addon to Physical
			FireSword,
			IceBow,
			IronFist,
			//-Magic
			//BloodBending is increase a damage of player,but set a lower hp and get more chance to die from one physical or magical attack.
			BloodBending,
			Null=-1
		};
	}
	namespace MonsterType {
		enum class E_Types {
			//Null-Nothing
			Null,
			Witch,
			Knight,
			Goblin,
			Yeti,
		};
	}
	namespace PlayerInventoryItemType
	{
		//FirePaper is the one of items in inventory,that give a player resistance to a fire attack;
		//A shield gives a resistance for a physical attacks of monsters;
		// IceBall gives resistance for a Ice Attacks;
		// RespawnPaper can respawn player,and player can continue the game from place he dies;
		namespace CanBeInPlayerInventory {
			enum class P_Items {
				FirePaper,
				Shield,
				IceBall,
				RespawnPaper,
				FireSwordPaper,
				IceBowPaper,
				IronFistPaper
			};
		}
	}
}
//By the name of namespace its need for increasing a damage of monsters depend on difficulty
namespace Monster_Increase_Physical_And_Magical_Factor
{
	float SimpleFactor{ 1.0f };
	float MiddleFactor{ 1.45f };
	float HardFactor{ 1.9f };
	float ImpossibleFactor{ 2.4f };
}
//Player reduction of damage by difficulty
namespace Player_Reduction_Physical_And_Magical_Factor
{
	float SimpleFactor{ 1.5f };
	float MiddleFactor{ 1.1f };
	float HardFactor{ 0.8f };
	float ImposssibleFactor{ 0.5f };
}
//Needed for ConvertStringToType.cpp
//If you want to add new style of attacks,please pay attention to function in the top
//This function returns the type of attack you need to follow the list order according to Player_Attacks

namespace ContainerOfAttacks
{
	std::vector<std::string> attacks{ "Bow","Sword","Fist","FireSword","IceBow","IronFist","BloodBending" };
}
//Names needed for a registerMonster() in a Monster.cpp
namespace Names {
	std::string Witch{ "Witch" };
	std::string Yeti{ "Yeti" };
	std::string Knight{ "Knight" };
	std::string Goblin{ "Goblin" };
	std::string Null{ "NULL" };
}
//Needed a for function cooldown in cooldown.cpp
namespace cooldownDurablity
{
	int SimpleCooldown(15);
	int MiddleCooldown(10);
	int HardCooldown(7);
	int ImpossibleCooldown(4);
}
namespace DamageAll
{

}