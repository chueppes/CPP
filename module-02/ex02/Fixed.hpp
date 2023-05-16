#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <cmath>

class Fixed{
    private:
        int _value;
        static const int _bit = 8;
    public:
        //Constructors and destructors:
        Fixed();
        Fixed(const int intValue);
        Fixed(const float floatValue);
        Fixed(Fixed &copy);
        ~Fixed();
        //Copy assignment operator
        Fixed &operator=(Fixed const &copy);
        //methods
        int turnToInt() const;
        float turnToFloat() const;
        //getter and setter
        int getRawBits() const;
        void setRawBits(int const raw);
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
};
std::ostream &operator<<(std::ostream &output, const Fixed &fixed);

#endif