#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "[DEBUG]" <<std::endl;
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << " I just love it!" << std::endl;
}
void Harl::info()
{
	std::cout << "[INFO]" <<std::endl;
	std::cout << "I cannot believe adding extra bacon";
	std::cout << "costs more money. You didn’t put enough";
	std::cout << " bacon in my burger! If you did,";
	std::cout << " I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "[WARNING]" <<std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming here for years and you just started ";
	std::cout << "working here last month." << std::endl;
}

void Harl::error()
{
	std::cout << "[ERROR]" <<std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}
int index(std::string level)
{
	int i=0;
	std::string array[4]={"DEBUG","INFO","WARNING","ERROR"};
	while(i<4)
	{
		if(array[i]==level)
			return i;
		i++;
	}
	return -1;
}
void Harl::complain(std::string level)
{
	switch(index(level))
	{
		case 0:
			this->debug();
			break;
		case 1:
			this->info();
			break;
		case 2:
			this->warning();
			break;
		case 3:
			this->error();
			break;
		default:
			std::cout<<"Create and turn in tests to show that Harl complains a lot.";
			std::cout<<"You can use the example comments."<<std::endl;
	}
}


