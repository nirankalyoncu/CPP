#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->type=name;
}
void Weapon::setType(std::string type)
{
	this->type=type;
}
std::string Weapon::getType() const
{
	return(this->type);
}

Weapon::~Weapon(){}

