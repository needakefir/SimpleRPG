#include "AllTypes.h"
int NumGen(int min, int max);
Type::EntityType::E_Types RandEntityType()
{
	short temp=NumGen(0,3);
	return static_cast<Type::EntityType::E_Types>(temp);
}