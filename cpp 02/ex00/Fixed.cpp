#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<< "Default constructor called"<<std::endl;
	this->integer=0;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& oth)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this=oth;
}

Fixed &Fixed::operator=(const Fixed& oth)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if(this != &oth)
		this->integer=oth.getRawBits();
	return(*this);
}

void Fixed::setRawBits(int const raw)
{
	this->integer=raw;	
}

int Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return(this->integer);
}