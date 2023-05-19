/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:40:20 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/19 09:40:20 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombie::Zombie(std::string name){
//     this->_name = name;
// }

void Zombie::announce(){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name){
    this->_name = name;
}

Zombie::~Zombie(){
    std::cout << "Zombie named: " << this->_name << " successfully destroyed.\n";
}
