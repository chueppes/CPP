/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:48:39 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:48:39 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat():Animal(){
    Animal::setType("Cat");
    this->_brain = new Brain();
    std::cout << "Cat default constructor called.\n";
}

Cat::Cat(const Cat &copy):Animal(){
    *this = copy;
    this->_brain = new Brain();
    std::cout << "Cat copy constructor called.\n";
}
Cat::~Cat(){
    delete this->_brain;
    std::cout << "Cat destructor called.\n";

}
Cat& Cat::operator=(const Cat &copy){
    std::cout << "Cat copy assignment operator called.\n";
    this->_brain = new Brain(*copy._brain);
    Animal::operator=(copy);
    std::cout << this->getType() << "\n";
    return(*this);
}
void Cat::makeSound() const{
    std::cout << "-Meow!\n";
}

void Cat::getIdeas()const{
    for(int i=0; i<100; i++){
        std::cout << "I have an idea! " << this->_brain->getIdeas(i) << " what do you think?\n";
    }
}

void Cat::setIdeas(int i, std::string ideas)const{
    this->_brain->setIdeas(i, ideas);
}
