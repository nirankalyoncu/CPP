#include "Fixed.hpp"

Fixed::Fixed()//Defaull constructor
{
	this->number = 0;
}
Fixed::~Fixed(){}//default destructor

Fixed::Fixed(const Fixed& oth)//copy constructor
{
	this->number = oth.getRawBits();
}
Fixed Fixed::operator=(const Fixed& oth) const//atama operatörünü kopyalama
{
    if(this!=&oth)
		this->number=oth.getRawBits();
	return(*this);
}


/*Fixed(const int number): Bu yapılandırıcı bir int tipindeki number parametresi alır ve bu parametreyi Fixed sınıfındaki number değişkenine atar.
 Ayrıca, number değerini bits değişkeninin değerine göre sola kaydırarak mantiksal olarak kaydırır. 
 Bu sayede Fixed sınıfındaki number değişkeni için önceden belirlenmiş bir virgüllü sayı formatı oluşturulmuş olur.*/
Fixed::Fixed(const int number)
{
	this->number = (number << this->bits);
}


/* Fixed(const float number): Bu yapılandırıcı bir float tipindeki number parametresi alır ve bu parametreyi Fixed sınıfındaki number değişkenine atar.
 Ayrıca, number değerini bits değişkeninin değerine göre çarpıp, roundf fonksiyonu ile yuvarlanır. 
 Bu sayede Fixed sınıfındaki number değişkeni için önceden belirlenmiş bir virgüllü sayı formatı oluşturulmuş olur. */
Fixed::Fixed(const float number)//???
{
	this->number = roundf(number * (1 << this->bits));
}

Fixed::setRawBits(const int raw)
{
    this->number=raw;
}

Fixed::getRawBits()
{
    return(this->number);
}

Fixed &Fixed::operator++()
{
    this->number++;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp=*this//nesnenin güncel durumunu tut;
    return(tmp);
    //arttırılmamış,kaydedilmiş,geçici nesneyi döndür.
    this->number++;//değer dönüşü,referans dönüşü değil
}

Fixed &Fixed::operator--()
{
    this->number--;
    return(*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp=*this//nesnenin güncel durumunu tut;
    return(tmp);
    //azaltılmamış,kaydedilmiş,geçici nesneyi döndür.
    this->number--;//değer dönüşü,referans dönüşü değil
}
