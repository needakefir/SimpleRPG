#include "Constants And Types.h"
Type::AttackType::Player_Attacks ConvertStringToType(std::string& source)
{
	short i{};
	for (auto& str : ContainerOfAttacks::attacks)
	{
		if (str == source)
		{
			return static_cast<Type::AttackType::Player_Attacks>(i);
		}
		++i;

	}
	return Type::AttackType::Player_Attacks::Null;
}
