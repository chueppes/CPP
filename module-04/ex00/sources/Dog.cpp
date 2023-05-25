/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:46:47 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:46:47 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog():Animal(){
    Animal::setType("Dog");
    std::cout << "Dog default constructor called.\n";
}

Dog::Dog(const Dog &copy):Animal(){
    *this = copy;
    std::cout << "Dog copy constructor called.\n";
}
Dog::~Dog(){
    std::cout << "Dog destructor called.\n";

}
Dog& Dog::operator=(const Dog &copy){
    std::cout << "Dog copy assignment operator called.\n";
    Animal::operator=(copy);
    return(*this);
}
void Dog::makeSound() const{
    std::cout << "-Bark!\n";
}