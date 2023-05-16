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
        Fixed();
        Fixed(const int intValue);
        Fixed(const float floatValue);
        Fixed(Fixed &copy);
        ~Fixed();
        Fixed &operator=(Fixed const &copy);
        int turnToInt() const;
        float turnToFloat() const;
        int getRawBits() const;
        void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &output, const Fixed &fixed);

#endif