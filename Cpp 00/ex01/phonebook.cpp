#include "phonebook.hpp"

void Phonebook::add(Phonebook *list)
{
	std::cout << "Informations of persons\n";
	std::string name;
    std::cout << "Name: ";
	std::cin >> name;
    list->contacts[list->index % 8].setName(name);

	std::string lastname;
    std::cout << "Lastname: ";
	std::cin >> lastname;
    list->contacts[list->index % 8].setLastname(lastname);

	std::string nickname;
    std::cout << "Nickname: ";
	std::cin >> nickname;
    list->contacts[list->index % 8].setNickname(nickname);
	
	std::string number;
    std::cout << "Number: ";
	std::cin >> number;
    list->contacts[list->index % 8].setNumber(number);

	std::string secret;
    std::cout << "Secret: ";
	std::cin >> secret;
    list->contacts[list->index % 8].setSecret(secret);

    list->index++;
	list->number++;
}

void    write_p(std::string str)
{
	int len=str.length();
	if(len>=10)
		std::cout<<std::right<<std::setw(9)<<str.substr(0,9)<<".|";
	else
		std::cout << std::right <<std::setw(10)<<str << "|";   
}

int control_input(std::string input)
{
	int i=0;
	while(input[i])
	{
		if(input[i] < '1' || input[i] > '9')
			return 0;
		i++;
	}
	return 1;
}
int input_to_int(std::string input)
{
    int i = 0;
    int j = -1;

    while (input[++j])
        i = (i * 10) + (input[j] - 48);
    return (i);
}

void Phonebook::search(Phonebook *list)
{
	int i=0;
	std::string input;

	std::cout << "-Information display screen-\n";
	if(!list->index)
	{
		std::cout << "none" << std::endl;
		return ;
	}
	while(i < list->index && i < 8)
	{
		std::cout<< "Person" << i+1 << "|";
		write_p(list->contacts[i].getName());
		write_p(list->contacts[i].getLastname());
		write_p(list->contacts[i].getNickname());
		std::cout << std::endl;
		i++;
	}
	std::cout << "Enter person number: ";
	std::cin >> input;
	if(!control_input(input))
	{
		std::cout << "Wrong! your number is not integer number\n";
		return ;

	}
	i = input_to_int(input);
	if( i <= 8 && i >= 1 && i <= list->index)
	{
		std::cout << "Name:" << list->contacts[i-1].getName()<<std::endl;
		std::cout << "Surname: "<< list->contacts[i-1].getLastname()<<std::endl;
		std::cout << "Nickname: " << list->contacts[i-1].getNickname()<<std::endl;
		std::cout << "Phone: " << list->contacts[i-1].getNumber()<<std::endl;
		std::cout << "Secret: " << list->contacts[i-1].getSecret()<<std::endl;
	}
	else
		std::cout << "Wrong! your number is not between 1-8 or contact not found\n";
}