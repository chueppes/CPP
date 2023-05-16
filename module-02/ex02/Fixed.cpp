#include "Fixed.hpp"

 //Constructors and destructors:
Fixed::Fixed(){
    std::cout << "Default constructor called.\n";
    this->_value=0;
}

Fixed::Fixed(Fixed &copy){
    std::cout<<"Copy constructor called.\n";
    *this=copy;
}

Fixed::Fixed(int intValue){
    std::cout<<"Int constructor called.\n";
    this->setRawBits(intValue * (1 << this->_bit));
}


Fixed::Fixed(float floatValue){
    std::cout<<"Float constructor called.\n";
    this->setRawBits((int)roundf(floatValue * (1<<this->_bit)));
}

Fixed::~Fixed(){
    std::cout << "Destructor called.\n";
}
//Copy assignment operator
Fixed &Fixed::operator=( Fixed const &copy){
    std::cout << "Copy assignment operator called.\n";
    setRawBits(copy.getRawBits());
    return (*this);
}
//methods
float Fixed::turnToFloat()const{
    return ((float)this->_value / 256);
}

int Fixed::turnToInt()const{
    return (this->_value / 256);
}
//getter and setter
int Fixed::getRawBits()const{
    return (this->_value);
}

void Fixed::setRawBits(int const raw){
    this->_value=raw;
}
//Min-Max
        static const Fixed& min(const Fixed& first, const Fixed& second);
        static const Fixed& max(const Fixed& first, const Fixed& second);
        static Fixed& min(Fixed& first, Fixed& second);
        static Fixed& max(Fixed& first, Fixed& second);
//increment-decrement operators
        Fixed& operator++();
        Fixed& operator--();
        Fixed& operator++(int);
        Fixed& operator--(int);
//boolean comparison operations
        bool operator> (const Fixed& num);
        bool operator>=(const Fixed& num);
        bool operator<(const Fixed& num);
        bool operator<=(const Fixed& num);
        bool operator==(const Fixed& num);
        bool operator!=(const Fixed& num);
//arithimetic operators
        Fixed operator+ (Fixed const &second) const;
        Fixed operator- (Fixed const &second) const;
        Fixed operator* (Fixed const &second);
        Fixed operator/ (Fixed const &second) const;

std::ostream &operator << (std::ostream &output, const Fixed &fixed){
    output << fixed.turnToFloat();
    return(output);
}