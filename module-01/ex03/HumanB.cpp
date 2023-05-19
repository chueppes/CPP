/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:40:45 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/19 09:40:45 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->_name = name;
    this->_weapon = NULL;
}

HumanB::~HumanB(){
    std::cout << this->_name << " has been killed.\n";
}

void HumanB::attack(){
    std::cout << this->_name << " uses " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
    this->_weapon=&weapon;
}
