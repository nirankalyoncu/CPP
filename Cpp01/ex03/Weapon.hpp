#ifndef WEAPON_H
#define	WEAPON_H

#include <iostream>
class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string name);
		~Weapon();
		void setType(std::string type);
		std::string getType() const;
};

#endif