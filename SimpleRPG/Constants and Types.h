#pragma once
#include <string>
#include <vector>
//Main namespace Type,that includes a needed types of attacks,monstertype and etc.
namespace Type
{
	namespace AttackType
	{
		//Potion Of Undying gives a protection from any damage before the attack
		//That needed for Monster_AI class.
		//SunLight and WaterCutter can be used by any monster,but witch has more priority
		enum class Magical_Monster_Attacks {
			PotionOfUndying,
			SunLight,
			WaterCutter,
			Thunder,
			Null=-1
		};
		//Witch has the lowest priority of physical attack
		enum class  Physical_Monster_Attacks {
			Stone,
			ThrowSand,
			Stick,
			Sword,
			Null=-1
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
	int ImpossibleCooldown(5);
}
//the standard value of damage for entities
namespace StandardDamageScore
{
	namespace Player {
		short StandardDamageBow(20);
		short StandardDamageSword(25);
		short StandardDamageFist(10);

	}
	namespace Monster {
		namespace MonstersMagicalAttack {
			short SunLight(35);
			short WaterCutter(25);
			short Thunder(40);
		}
		namespace MonstersPhysicalAttack {
			short Stone(15);
			short ThrowSand(10);
			short Stick(8);
			short Sword(20);
		}
	}
}
//this namespace stores damage scaling values ​​based on difficulty.
namespace IncreaseDamageMagicPlayerItems{
	//Fire Sword
	float FireSword_Simple{ 1.8f };
	float FireSword_Middle{ 1.6f };
	float FireSword_Hard{ 1.4f };
	float FireSword_Impossible{ 1.2f };
	//End Fire Sword
	//Ice Bow
	float IceBow_Simple{ 1.9f };
	float IceBow_Middle{ 1.7f };
	float IceBow_Hard{ 1.5f };
	float IceBow_Impossible{ 1.3f };
	//End Ice Bow
	//IronFist
	float IronFist_Simple{ 1.7f };
	float IronFist_Middle{ 1.5f };
	float IronFist_Hard{ 1.3f };
	float IronFist_Impossible{ 1.1f };
	//End Iron Fist
}
namespace AttackChanceForAI {
	namespace MagicAttackChance {
		//For a Witch
		float MagicSimpleWitch{ 0.65f };
		float MagicMiddleWitch{ 0.7f };
		float MagicHardWitch{ 0.8f };
		float MagicImpossibleWitch{ 0.95f };
		//For a Knight
		float MagicSimpleKnight{ 0.1f };
		float MagicMiddleKnight{ 0.15f };
		float MagicHardKnight{ 0.25f };
		float MagicImpossibleKnight{ 0.3f };
		//For a goblin
		float MagicSimpleGoblin{ 0.01f };
		float MagicMiddleGoblin{ 0.03f };
		float MagicHardGoblin{ 0.07f };
		float MagicImpossibleGoblin{ 0.1f };
		//For a Yeti
		float MagicSimpleYeti{ 0.15f };
		float MagicMiddleYeti{ 0.2f };
		float MagicHardYeti{ 0.3f };
		float MagicImpossibleYeti{ 0.35f };
	}
}
//Chars for ReplacFromMap.cpp
namespace Chars
{
	char Taken_Or_Defeated{ '+' };
	char MonsterOnMap{ '!' };
	char ItemMap{ '?' };
}
namespace TargetsForRetDefeatedOrTaken
{
	enum class Targets
	{
		DEFEATED,
		TAKEN
	};
}