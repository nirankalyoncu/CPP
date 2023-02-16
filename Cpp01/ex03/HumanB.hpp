#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
	public:
		std::string Name;
		Weapon *Weapon;
		HumanB(std::string name);
		void setWeapon(class::Weapon &Weapon);
		void attack();
		~HumanB();
};
#endif