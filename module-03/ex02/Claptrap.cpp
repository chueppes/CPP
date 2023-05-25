/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:44:38 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:44:39 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    this->setAttackDamage(0);
    this->setEnergyPoints(10);
    this->setHitPoints(10);
    this->setName("Fyrestone ClapTrap");
    std::cout << "ClapTrap default constructor called.\n";
}

ClapTrap::ClapTrap(std::string name){
    this->setAttackDamage(0);
    this->setEnergyPoints(10);
    this->setHitPoints(10);
    this->setName(name);
    std::cout << "Constructor for ClapTrap " << name << " called.\n";
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called.\n";
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    std::cout << "ClapTrap copy constructor called.\n";
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy){
    this->setAttackDamage(copy.getAttackDamage());
    this->setEnergyPoints(copy.getAttackDamage());
    this->setHitPoints(copy.getHitPoints());
    this->setName(copy.getName());
    std::cout << "ClapTrap copy assignment operator called.\n";
    return(*this);
}

void ClapTrap::attack(const std::string &target){
    if(!this->getEnergyPoints()) {
       std::cout << "Oh, bummer! Looks like Claptrap "<< this->getName() <<" is running low on energy points.\n";
       return ;
       }
    else if(!this->getHitPoints())
       { std::cout << "Oh, well, that's awkward. It appears that Claptrap " << this->getName() <<" currently in a... uh, non-functional state.\n";
        return ;}
    std::cout << "\033[1;33mClaptrap " << this->getName() << " strikes " << target << " with a mighty force, dealing a whopping " << this->getAttackDamage() << " points of damage! Ooh, did you feel that?\n\033[0m";
    this->setEnergyPoints(this->getEnergyPoints()-1);   
}

void ClapTrap::takeDamage(unsigned int amount){
    if(!this->getHitPoints()){
          std::cout << "Oh, well, that's awkward. It appears that Claptrap " << this->getName() <<" currently in a... uh, non-functional state.\n";
          return ; }
    std::cout << "\033[0;31mOh, owie! ClapTrap " << this->getName() << " just took a hit of " << amount << " points of damage, and it stings like a Hyperion bullet!\n \033[0m";
    this->setHitPoints(this->getHitPoints() - amount);
    if (this->getHitPoints() < 0){
        std::cout << "Claptrap " << this->getName() << " bravely meets his demise, overwhelmed by an incoming attack.\n";
        this->setHitPoints(0);
        return ;
    }
    std::cout << "Points left: " << this->getHitPoints() << "\n";
}

void ClapTrap::beRepaired(unsigned int amount){
    if(!this->getEnergyPoints()){
        std::cout << "No-can-do, folks! Claptrap is in quite a predicament here. I'm afraid I don't have enough points to undergo repairs at the moment.\n";
        return ;}
    this->setHitPoints(getHitPoints() + amount);
    if(this->getHitPoints() > 10)
        this->setHitPoints(10);
    this->setEnergyPoints(getEnergyPoints() - 1); 
    std::cout << "\033[0;32mRejoice, fellow adventurers! Claptrap " << this->getName() <<" is being showered with healing goodness, rejuvenating my circuits by " << amount << " points. \nCan you feel the energy surging through me? It's like a second wind in the midst of battle! With this revitalization, my final hitpoints stand at: " << this->getHitPoints() << "\n \033[0m  ";
}

int ClapTrap::getHitPoints()const{
    return(this->_hitPoints);
}
int ClapTrap::getEnergyPoints() const{
    return(this->_energyPoints);
}
int ClapTrap::getAttackDamage() const{
    return(this->_attackDamage);
}
std::string ClapTrap::getName() const{
    return(this->_name);
}
void ClapTrap::setHitPoints(int hitPoints){
    this->_hitPoints = hitPoints;
}
void ClapTrap::setEnergyPoints(int energyPoints){
    this->_energyPoints = energyPoints;
}
void ClapTrap::setAttackDamage(int attackDamage){
    this->_attackDamage = attackDamage;
}
void ClapTrap::setName(std::string name){
    this->_name = name;
}

