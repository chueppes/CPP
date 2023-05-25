/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:44:44 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:44:44 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    this->setAttackDamage(30);
    this->setEnergyPoints(100);
    this->setHitPoints(100);
    this->setName("Fyrestone ClapTrap");
    std::cout << "FragTrap default constructor called.\n";
}

FragTrap::FragTrap(std::string name):ClapTrap(name){
    this->setAttackDamage(30);
    this->setEnergyPoints(100);
    this->setHitPoints(100);
    this->setName(name);
    std::cout << "Constructor for FragTrap " << name << " called.\n";
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called.\n";
}

FragTrap::FragTrap(const FragTrap &copy):ClapTrap(copy){
    std::cout << "FragTrap copy constructor called.\n";
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy){
    std::cout << "FragTrap copy assignment operator called.\n";
    ClapTrap::operator=(copy);
    return(*this);
}

void FragTrap::highFivesGuys(){
    std::cout <<  "Who's up for some good ol' Claptrap high fives? *raises robotic hand* Bring it in, folks! Woo!\n";
}