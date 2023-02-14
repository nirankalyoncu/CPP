
#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include "math.h"

class Fixed
{
	private:
	int number;
	static const int bits=8;
	
	public:
	Fixed();
	Fixed(int i);
	Fixed(float f);
	~Fixed();
	Fixed(const Fixed& oth);
	Fixed &operator=(const Fixed& oth);
	void	setRawBits(int const res);
	int		getRawBits(void) const;
	float toFloat( void ) const;
	int toInt( void ) const;	
	friend std::ostream& operator << (std::ostream&, const Fixed&);
};
std::cout << number;
std::cin >> number;
#endif