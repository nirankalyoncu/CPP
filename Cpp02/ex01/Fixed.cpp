
#include "Fixed.hpp"

std::ostream& operator <<(std::ostream& osObject,const Fixed& fixedObject)
{
	osObject<<fixedObject.toFloat()<<std::endl;
	return(osObject);
}

Fixed::Fixed()
{
	std::cout<<"Default constructor called"<<std::endl;
}
Fixed::~Fixed()
{
	std::cout<<"Default destructor called"<<std::endl;
}

Fixed::Fixed(const int i)//Bunu karşılık gelen sabit nokta değerine dönüştürür. 
{
	std::cout<<"Int constructor called"<<std::endl;
	this->number = i << this->bits;
}

Fixed::Fixed(const float f)//Bunu karşılık gelen sabit nokta değerine dönüştürür. 
{
	std::cout<<"Float constructor called"<<std::endl;
	this->number=roundf(f * (1 << Fixed::bits));
}

Fixed::Fixed(const Fixed& oth)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this=oth;
}

Fixed &Fixed::operator=(const Fixed& oth)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if(this!=&oth)
		this->number=oth.getRawBits();
	return(*this);
}

void Fixed::setRawBits(int const res)
{
	this->number=res;
}
int Fixed::getRawBits(void) const
{
	return(this->number);
}

float Fixed::toFloat() const//sabit noktalı değeri kayan noktalı bir değere dönüştürür.
{
	 return ((float)this->number / (1 << this->bits));
}

int Fixed::toInt() const//Sabit nokta değerini bir tamsayı değerine dönüştürür
{
	return (round(this->number >> Fixed::bits));
}
