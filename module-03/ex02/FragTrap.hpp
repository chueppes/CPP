/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:44:48 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:44:48 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
    private:
    public:
        //constructors and destructor
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &copy);
        ~FragTrap();
    //copy assignment operator
        FragTrap &operator=(FragTrap const &copy);
    //methods
        void highFivesGuys();
        void beRepaired(unsigned int amount);
};
#endif