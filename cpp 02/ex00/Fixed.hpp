#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	private:
		int integer;
		static const  int bits = 8;

	public:
		Fixed();//yapıcı
		~Fixed();//yıkıcı
		Fixed(const Fixed& oth);//copy constructor
		Fixed &operator=(const Fixed& oth);//atama operatörünü kopyalama
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );

};

#endif