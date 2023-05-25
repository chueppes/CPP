/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:48:46 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:48:46 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->setType("");
    std::cout << "WrongAnimal Default Constructor called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
    *this = copy;
    std::cout << "WrongAnimal copy constructor called.\n";
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called.\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy){
    std::cout << "WrongAnimal copy assignment operator called.\n";
    this->setType(copy.getType());
    return(*this);
}

void WrongAnimal::makeSound()const{
    std::cout << "This is not an animal. It's Jon, a generic american.\n";
}

void WrongAnimal::setType(std::string type){
    this->_type= type;
}

std::string WrongAnimal::getType()const{
    return(this->_type);
}

