/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:43:06 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:43:06 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        int toInt() const;
        float toFloat() const;
        int getRawBits() const;
        void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &output, const Fixed &fixed);

#endif