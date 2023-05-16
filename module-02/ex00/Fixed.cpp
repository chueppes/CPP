#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called.\n";
    this->_value=0;
}

Fixed::Fixed(Fixed &copy){
    std::cout<<"Copy constructor called.\n";
    *this = copy;
}

Fixed::~Fixed(){
    std::cout << "Destructor called.\n";
}

Fixed &Fixed::operator=(const Fixed &copy){
    std::cout << "Copy assignment operator called.\n";
    this->_value=copy.getRawBits();
    return (*this);
}

int Fixed::getRawBits()const{
    std::cout << "getRawBits member function called.\n";
    return (this->_value);
}

void Fixed::setRawBits(int const raw){
    this->_value=raw;
}