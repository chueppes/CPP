/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:40:54 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/19 09:40:54 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

class Weapon{
    private:
        std::string _type;
    public:
        Weapon(std::string type);
        ~Weapon();
        const std::string getType();
        void setType(std::string type);
};


#endif