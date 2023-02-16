#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->Name=name;
	this->announce();
}

Zombie::Zombie()
{
	std::cout << "None name"<<std::endl;
}

Zombie::~Zombie()
{
	std::cout<<this->Name<<": zombi is dead... "<<std::endl;
}

