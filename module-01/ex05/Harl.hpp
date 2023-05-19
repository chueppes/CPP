/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:41:15 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/19 09:41:15 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

class Harl{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
       void complain( std::string level );
};


#endif