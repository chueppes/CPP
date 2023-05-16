#include "Fixed.hpp"

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

Fixed &Fixed::operator=( Fixed const &copy){
    std::cout << "Copy assignment operator called.\n";
    setRawBits(copy.getRawBits());
    return (*this);
}

float Fixed::turnToFloat()const{
    return ((float)this->_value / 256);
}

int Fixed::turnToInt()const{
    return (this->_value / 256);
}

int Fixed::getRawBits()const{
    return (this->_value);
}

void Fixed::setRawBits(int const raw){
    this->_value=raw;
}

std::ostream &operator << (std::ostream &output, const Fixed &fixed){
    output << fixed.turnToFloat();
    return(output);
}