#include "phonebook.hpp"
#include <iostream>

void welcome(void)
{
	std::cout<<"|ADD | SEARCH | EXIT|"<<std::endl;
}
int main()
{
	Phonebook list;
	std::string c;
	int i;
	int j;

	i=0;
	j=0;
	list.number=0;
	list.index=0;
	welcome();
	while(1)
	{
		std::cout << "Process: ";
		std::cin >> c;
		if(c=="ADD" || c== "add")
		{
			list.add(&list);
			i++;
			if(i==7)
				i=0;
		}
		else if(c=="SEARCH"||c=="search")
			list.search(&list);
		else if(c=="EXIT" || c == "exit")
			exit(EXIT_SUCCESS);
		std::cout<<std::endl;
	}
}