/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:40:52 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/19 09:40:52 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
//igual setweapon
Weapon::Weapon(std::string type){
    this->_type = type;
}

const std::string Weapon::getType(){
    return this->_type;
}

void Weapon::setType(std::string type){
    this->_type = type;
}

Weapon::~Weapon(){
    std::cout << "Weapon destroyed\n";
}
