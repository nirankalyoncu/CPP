#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie *zombi=new Zombie(name);
	delete zombi;
}