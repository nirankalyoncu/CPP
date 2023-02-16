#include <iostream>

int main(int ac, char **av)
{
	int i=0;
	int j=1;
	char c;
	if(ac>1)
	{
		while(av[j])
		{
			while(av[j][i])
			{
				c=toupper(av[j][i]);
				std::cout << c;
				i++;
			}
			j++;
			i=0;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
}