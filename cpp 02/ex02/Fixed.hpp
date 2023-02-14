#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
    int number:
    public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& oth);
	Fixed &operator=(const Fixed& oth);

    int		getRawBits() const;
	void	setRawBits(int const raw);

    bool  operator>(const Fixed& oth) const;
    bool  operator<(const Fixed& oth) const;
    bool  operator<=(const Fixed& oth) const;
    bool  operator>=(const Fixed& oth) const;
    bool  operator==(const Fixed& oth) const ;
    bool  operator!=(const Fixed& oth) const;

    bool  operator+(const Fixed& oth) const;
    bool  operator-(const Fixed& oth) const;
    bool  operator*(const Fixed& oth) const;
    bool  operator/(const Fixed& oth) const;

    Fixed &operator++();//ön(++)    !
    Fixed operator++(int);//son(++) !
    Fixed &operator--();//          !
    Fixed operator--(int);//        !

    static float &min(float &a, float &b) 
    { return (a < b) ? a : b; }

    static const float &min(const float &a, const float &b)
   {
    return (a < b) ? a : b;
   }
   //Bu iki min fonksiyonunun arasındaki fark, parametre türleridir.
   // İlk min fonksiyonu iki float tipindeki referans parametre alır.
   // Bu, fonksiyonun içindeki değişikliklerin orjinal değerlere yansımasını sağlar. 
   //İkinci min fonksiyonu ise iki const float tipindeki referans parametre alır. 
   ///Bu, fonksiyonun içinde orjinal değerlere müdahil olmamasını sağlar

    static float &max(float &a, float &b) 
   { return (a > b) ? a : b; }

   static const float &max(const float &a, const float &b) 
   {
    return (a > b) ? a : b;
   }



};

#endif