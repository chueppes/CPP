/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:44:58 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:44:58 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    this->setAttackDamage(20);
    this->setEnergyPoints(50);
    this->setHitPoints(20);
    this->setName("Fyrestone ClapTrap");
    std::cout << "ScavTrap default constructor called.\n";
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
    this->setAttackDamage(20);
    this->setEnergyPoints(50);
    this->setHitPoints(20);
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

void ScavTrap::beRepaired(unsigned int amount){
    if(!this->getEnergyPoints()){
        std::cout << "No-can-do, folks! ScavTrap is in quite a predicament here. I'm afraid I don't have enough points to undergo repairs at the moment.\n";
        return ;}
    this->setHitPoints(getHitPoints() + amount);
    if(this->getHitPoints() > 20)
        this->setHitPoints(20);
    this->setEnergyPoints(getEnergyPoints() - 1); 
    std::cout << "\033[0;32mRejoice, fellow adventurers! ScavTrap " << this->getName() <<" is being showered with healing goodness, rejuvenating my circuits by " << amount << " points. \nCan you feel the energy surging through me? It's like a second wind in the midst of battle! With this revitalization, my final hitpoints stand at: " << this->getHitPoints() << "\n \033[0m  ";
}

void ScavTrap::guardGate(){
    std::cout << this->getName() << " is now in Gatekeeper mode.\n";
}