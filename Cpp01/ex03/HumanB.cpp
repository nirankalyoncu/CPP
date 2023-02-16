#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout<<this->Name<<"attacks with their"<<this->Weapon->getType()<<std::endl;
}
HumanB::HumanB(std::string name)
{
		this->Name=name;

}
void HumanB::setWeapon(class::Weapon &WeaponB)
{
		this->Weapon=&WeaponB;
}
HumanB::~HumanB()
{
}