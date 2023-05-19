/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:40:40 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/19 09:40:40 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon){
    this->_name = name;
    this->_weapon = weapon;
}

HumanA::~HumanA(){
    std::cout << this->_name << " has been killed.\n";
}

void HumanA::attack(){
    std::cout << this->_name << "uses " << this->_weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon){
    this->_weapon = weapon;
}