#pragma once
#include <iostream>
#include <string.h>

class Contact
{
	private:
		std::string _name;
		std::string _lastname;
		std::string _nickname;
		std::string _number;
		std::string _secret;
	public:
		void setName(std::string name);
		std::string getName();
		void setLastname(std::string lastname);
		std::string getLastname();
		void setNickname(std::string nickname);
		std::string getNickname();
		void setNumber(std::string number);
		std::string getNumber();
		void setSecret(std::string secret);
		std::string getSecret();
	
};