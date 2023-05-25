/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:42:55 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:42:55 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

class Fixed{
    private:
        int _value;
        static const int _bit=8;
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed &copy);
        Fixed &operator=(const Fixed &copy);
        
        int getRawBits() const;
        void setRawBits(int const raw);
};


#endif