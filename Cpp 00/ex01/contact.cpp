#include "contact.hpp"

void Contact::setName(std::string name)
{
	this->_name=name;
}
std::string Contact::getName()
{
	return this->_name;
}

void Contact::setLastname(std::string lastname)
{
	this->_lastname=lastname;
}
std::string Contact::getLastname()
{
	return this->_lastname;
}

void Contact::setNickname(std::string nickname)
{
	this->_nickname=nickname;
}
std::string Contact::getNickname()
{
	return this->_nickname;
}

void Contact::setNumber(std::string number)
{
	this->_number=number;
}
std::string Contact::getNumber()
{
	return this->_number;
}

void Contact::setSecret(std::string secret)
{
	this->_secret=secret;
}
std::string Contact::getSecret()
{
	return this->_secret;
}
