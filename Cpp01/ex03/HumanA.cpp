#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout<<this->Name<<"attacks with their"<<this->Weapon->getType()<<std::endl;
}
HumanA::HumanA(std::string name,class::Weapon &WeaponA)
{
		this->Name=name;
		this->Weapon=&WeaponA;
}
HumanA::~HumanA()
{
}