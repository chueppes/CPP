/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:40:31 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/19 09:40:31 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

class Zombie{
    private:
        std::string _name;
    public:
        ~Zombie();
        void announce();
        void setName(std::string name);
        Zombie* zombieHorde( int N, std::string name );
};
#endif