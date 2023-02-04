#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string Name;
	public:
		Zombie();
		~Zombie();
		void setName(std::string name);
		std::string getName();
};
void announce(std::string name);
Zombie* zombieHorde( int N, std::string name );
#endif