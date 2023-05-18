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
const Fixed& min(const Fixed& first, const Fixed& second){
    if(first.getRawBits() < second.getRawBits())
        return(first);
    return(second);
}
const Fixed& max(const Fixed& first, const Fixed& second){
    if(first.getRawBits() > second.getRawBits())
        return (first);
    return(second);
}
Fixed& min(Fixed& first, Fixed& second){
    if(first.getRawBits() < second.getRawBits())
        return(first);
    return(second);
}
Fixed& max(Fixed& first, Fixed& second){
    if(first.getRawBits() > second.getRawBits())
        return (first);
    return(second);
}
//increment-decrement operators
Fixed Fixed::operator++(){
    this->_value++;
    return(*this);
}
Fixed Fixed::operator--(){
    this->_value--;
    return(*this);
}
Fixed Fixed::operator++(int){
    Fixed aux = *this;
    ++this->_value;
    return(aux);
}
Fixed Fixed::operator--(int){
    Fixed aux = *this;
    --this->_value;
    return(aux);
}
//boolean comparison operations
bool Fixed::operator> (const Fixed& num){
    return(this->_value/256);
}
bool Fixed::operator>=(const Fixed& num){
    return(this->turnToFloat() >= num.turnToFloat());
}
bool Fixed::operator<(const Fixed& num){
    return(this->turnToFloat() < num.turnToFloat());
}
bool Fixed::operator<=(const Fixed& num){
    return(this->turnToFloat() <= num.turnToFloat());
}
bool Fixed::operator==(const Fixed& num){
    return(this->turnToFloat() == num.turnToFloat());
}
bool Fixed::operator!=(const Fixed& num){
    return(this->turnToFloat() != num.turnToFloat());
}
//arithimetic operators
Fixed Fixed::operator+ (Fixed const &second) const{
    return(this->turnToFloat() + second.turnToFloat());
}
Fixed Fixed::operator- (Fixed const &second) const{
    return(this->turnToFloat() - second.turnToFloat());
}
Fixed Fixed::operator* (Fixed const &second) const{
    return(this->turnToFloat() * second.turnToFloat());
}
Fixed Fixed::operator/ (Fixed const &second) const{
    return(this->turnToFloat() / second.turnToFloat());
}

std::ostream &operator << (std::ostream &output, const Fixed &fixed){
    output << fixed.turnToFloat();
    return(output);
}