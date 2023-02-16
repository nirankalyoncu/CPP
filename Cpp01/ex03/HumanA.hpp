#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	public:
		std::string Name;
		Weapon *Weapon;
		HumanA(std::string name,class::Weapon &Weapon);
		~HumanA();
		void attack();
};

#endif