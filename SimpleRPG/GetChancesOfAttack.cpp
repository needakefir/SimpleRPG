#include "Constants and Types.h"
std::pair<float,float> GetChancesOfAttack(Type::MonsterType::E_Types type,short difficulty)
{
	
	float ChanceMagic;
	float ChancePhysical;
	std::pair<float, float> chances = { ChanceMagic,ChancePhysical };
	switch (type)
	{
	case Type::MonsterType::E_Types::Witch:
		switch (difficulty)
		{
		case 1:
			ChanceMagic = AttackChanceForAI::MagicAttackChance::MagicSimpleWitch;
			ChancePhysical = 1.0f - AttackChanceForAI::MagicAttackChance::MagicSimpleWitch;
			break;
		case 2:
			ChanceMagic = AttackChanceForAI::MagicAttackChance::MagicMiddleWitch;
			ChancePhysical = 1.0f - AttackChanceForAI::MagicAttackChance::MagicMiddleWitch;
			break;
		case 3:
			ChanceMagic = AttackChanceForAI::MagicAttackChance::MagicHardWitch;
			ChancePhysical = 1.0f - AttackChanceForAI::MagicAttackChance::MagicHardWitch;
			break;
		case 4:
			ChanceMagic = AttackChanceForAI::MagicAttackChance::MagicImpossibleWitch;
			ChancePhysical = 1.0f - AttackChanceForAI::MagicAttackChance::MagicImpossibleWitch;
			break;
		}
		break;
	case Type::MonsterType::E_Types::Knight:
		switch (difficulty)
		{
		case 1:
			ChanceMagic = AttackChanceForAI::MagicAttackChance::MagicSimpleKnight;
			ChancePhysical = 1.0f - AttackChanceForAI::MagicAttackChance::MagicSimpleKnight;
			break;
		case 2:
			ChanceMagic = AttackChanceForAI::MagicAttackChance::MagicMiddleKnight;
			ChancePhysical = 1.0f - AttackChanceForAI::MagicAttackChance::MagicMiddleKnight;
			break;
		case 3:
			ChanceMagic = AttackChanceForAI::MagicAttackChance::MagicHardKnight;
			ChancePhysical = 1.0f - AttackChanceForAI::MagicAttackChance::MagicHardKnight;
			break;
		case 4:
			ChanceMagic = AttackChanceForAI::MagicAttackChance::MagicImpossibleKnight;
			ChancePhysical = 1.0f - AttackChanceForAI::MagicAttackChance::MagicImpossibleKnight;
			break;
		}
		break;
	case Type::MonsterType::E_Types::Goblin:
		switch (difficulty)
		{
		case 1:
			ChanceMagic = AttackChanceForAI::MagicAttackChance::MagicSimpleGoblin;
			ChancePhysical = 1.0f - AttackChanceForAI::MagicAttackChance::MagicSimpleGoblin;
			break;
		case 2:
			ChanceMagic = AttackChanceForAI::MagicAttackChance::MagicMiddleGoblin;
			ChancePhysical = 1.0f - AttackChanceForAI::MagicAttackChance::MagicMiddleGoblin;
			break;
		case 3:
			ChanceMagic = AttackChanceForAI::MagicAttackChance::MagicHardGoblin;
			ChancePhysical = 1.0f - AttackChanceForAI::MagicAttackChance::MagicHardGoblin;
			break;
		case 4:
			ChanceMagic = AttackChanceForAI::MagicAttackChance::MagicImpossibleGoblin;
			ChancePhysical = 1.0f - AttackChanceForAI::MagicAttackChance::MagicImpossibleGoblin;
			break;
		}
		break;
	case Type::MonsterType::E_Types::Yeti:
		switch (difficulty)
		{
		case 1:
			ChanceMagic = AttackChanceForAI::MagicAttackChance::MagicSimpleYeti;
			ChancePhysical = 1.0f - AttackChanceForAI::MagicAttackChance::MagicSimpleYeti;
			break;
		case 2:
			ChanceMagic = AttackChanceForAI::MagicAttackChance::MagicMiddleYeti;
			ChancePhysical = 1.0f - AttackChanceForAI::MagicAttackChance::MagicMiddleYeti;
			break;
		case 3:
			ChanceMagic = AttackChanceForAI::MagicAttackChance::MagicHardYeti;
			ChancePhysical = 1.0f - AttackChanceForAI::MagicAttackChance::MagicHardYeti;
			break;
		case 4:
			ChanceMagic = AttackChanceForAI::MagicAttackChance::MagicImpossibleYeti;
			ChancePhysical = 1.0f - AttackChanceForAI::MagicAttackChance::MagicImpossibleYeti;
			break;
		}
		break;
	}
	return chances;
}