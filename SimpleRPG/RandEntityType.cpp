#include "AllTypes.h"
int NumGen(int min, int max);
Type::MonsterType::E_Types RandMonsterType()
{
	short temp{ NumGen(1,4) };
	return static_cast<Type::MonsterType::E_Types>(temp);
}