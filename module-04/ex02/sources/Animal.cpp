/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:48:31 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:48:31 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(){
    this->setType("");
    std::cout << "Animal Default Constructor called.\n";
}

Animal::Animal(const Animal &copy){
    *this = copy;
    std::cout << "Animal copy constructor called.\n";
}

Animal::~Animal(){
    std::cout << "Animal destructor called.\n";
}

Animal& Animal::operator=(const Animal& copy){
    std::cout << "Animal copy assignment operator called.\n";
    this->setType(copy.getType());
    return(*this);
}

void Animal::makeSound()const{
    std::cout << "-Good morning!\n";
}

void Animal::setType(std::string type){
    this->_type= type;
}

std::string Animal::getType()const{
    return(this->_type);
}

