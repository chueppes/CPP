/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:44:19 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:44:19 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    this->setAttackDamage(20);
    this->setEnergyPoints(50);
    this->setHitPoints(100);
    this->setName("Fyrestone ClapTrap");
    std::cout << "ScavTrap default constructor called.\n";
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
    this->setAttackDamage(20);
    this->setEnergyPoints(50);
    this->setHitPoints(100);
    this->setName(name);
    std::cout << "Constructor for ScavTrap " << name << " called.\n";
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called.\n";
}

ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap(copy){
    std::cout << "ScavTrap copy constructor called.\n";
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy){
    std::cout << "ScavTrap copy assignment operator called.\n";
    ClapTrap::operator=(copy);
    return(*this);
}

void ScavTrap::attack(const std::string &target){
    if(!this->getEnergyPoints()) {
       std::cout << "Oh, bummer! Looks like ScavTrap "<< this->getName() <<" is running low on energy points.\n";
       return ;
       }
    else if(!this->getHitPoints())
       { std::cout << "Oh, well, that's awkward. It appears that ScavTrap " << this->getName() <<" currently in a... uh, non-functional state.\n";
        return ;}
    std::cout << "\033[1;33mScavTrap " << this->getName() << " strikes " << target << " with a mighty force, dealing a whopping " << this->getAttackDamage() << " points of damage! Ooh, did you feel that?\n\033[0m";
    this->setEnergyPoints(this->getEnergyPoints()-1);   
}

void ScavTrap::guardGate(){
    std::cout << this->getName() << " is now in Gatekeeper mode.\n";
}