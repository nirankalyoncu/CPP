#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"
#include <string>
#include <iomanip>
class Phonebook
{
	public:
		Contact contacts[8];
		int index;
		int number;
		void add(Phonebook *list);
		void search(Phonebook *list);
};

#endif