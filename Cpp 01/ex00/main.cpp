#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout <<this->Name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

int main()
{
	Zombie *zombi1 = newZombie("yasir");
	randomChump("şevval");
	Zombie zombi("niran");
	return 0;
}