#include "Fixed.hpp"
//Bu yapıcı, number veri üyesinin varsayılan değeri olan 0 ile başlatılır.
// Bu şekilde yapıcı, sınıfın bir örneği oluşturulduğunda, 
//number veri üyesinin başlangıç değerini ayarlayacaktır.
Fixed::Fixed()
{
	    std::cout << "Default constructor called" << std::endl;
    	this->fixednumber = 0;
}

/*Fixed(const int number): Bu yapılandırıcı bir int tipindeki number parametresi alır ve bu parametreyi Fixed sınıfındaki number değişkenine atar.
 Ayrıca, number değerini bits değişkeninin değerine göre sola kaydırarak mantiksal olarak kaydırır. 
 Bu sayede Fixed sınıfındaki number değişkeni için önceden belirlenmiş bir virgüllü sayı formatı oluşturulmuş olur.*/
Fixed::Fixed(const int number)//???
{
	std::cout << "Int constructor called" << std::endl;
	this->fixednumber = (number << bits);
}

/* Fixed(const float number): Bu yapılandırıcı bir float tipindeki number parametresi alır ve bu parametreyi Fixed sınıfındaki number değişkenine atar.
 Ayrıca, number değerini bits değişkeninin değerine göre çarpıp, roundf fonksiyonu ile yuvarlanır. 
 Bu sayede Fixed sınıfındaki number değişkeni için önceden belirlenmiş bir virgüllü sayı formatı oluşturulmuş olur. */
Fixed::Fixed(const float number)//???
{
	std::cout << "Float constructor called" << std::endl;
	this->fixednumber = roundf(number * (1 << this->bits));
}

Fixed::~Fixed()//default destructor
{

}
	
Fixed::Fixed(const Fixed& oth)//copy constructor
{
	std::cout << "Copy constructor called" << std::endl;
	*this = oth;
}

Fixed &Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
    if (this == &fixed)
        return (*this);
    this->fixednumber = fixed.fixednumber;
    return (*this);
}

void Fixed::setRawBits(const int raw)
{
    this->fixednumber=raw;
}

int Fixed::getRawBits(void) const
{
    return(this->fixednumber);
}

//ön ve son ekleme çıkarma aşırı yüklenmesi
Fixed &Fixed::operator++()
{
    this->fixednumber++;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp=*this;//nesnenin güncel durumunu tut;
    this->fixednumber++;//değer dönüşü,referans dönüşü değil
    return(tmp);
    //arttırılmamış,kaydedilmiş,geçici nesneyi döndür.
}

Fixed &Fixed::operator--()
{
    this->fixednumber--;
    return(*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp=*this;//nesnenin güncel durumunu tut;
    this->fixednumber--;//değer dönüşü,referans dönüşü değil
    return(tmp);
    //azaltılmamış,kaydedilmiş,geçici nesneyi döndür.
}
//aşırı yükleme
//const yazmasının sebebi:Bu fonksiyonlar, sadece sınıfın durumunu okuyabilirler, ancak değiştiremezler.
bool Fixed::operator>(const Fixed& oth) const
{
	return(this->fixednumber > oth.fixednumber);
}
bool Fixed::operator<(const Fixed& oth) const
{
	return(this->fixednumber < oth.fixednumber);
}
bool Fixed::operator>=(const Fixed& oth) const
{
	return(this->fixednumber >= oth.fixednumber);
}
bool Fixed::operator<=(const Fixed& oth) const
{
	return(this->fixednumber <= oth.fixednumber);
}
bool Fixed::operator==(const Fixed& oth) const
{
	return(this->fixednumber == oth.fixednumber);
}
bool Fixed::operator!=(const Fixed& oth) const
{
	return(this->fixednumber != oth.fixednumber);
}


Fixed Fixed::operator+(Fixed const &fixed) const
{
    return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(Fixed const &fixed) const
{
    return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(Fixed const &fixed) const
{
    return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(Fixed const &fixed) const
{
    return (Fixed(this->toFloat() / fixed.toFloat()));
}

float Fixed::toFloat(void) const
{
	return ((float)this->fixednumber / (1 << this->bits));
}

int Fixed::toInt(void) const
{
	return ((int)(roundf((float)this->fixednumber / (1 << this->bits))));;
}

std::ostream& operator <<(std::ostream& osObject,const Fixed& fixedObject)
{
	osObject<<fixedObject.toFloat();
	return(osObject);
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2)
{
    return (f1 < f2) ? f1 : f2;
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
{
    return (f1 < f2) ? f1 : f2;
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
    return (f1 > f2) ? f1 : f2;
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
{
    return (f1 > f2) ? f1 : f2;
}
