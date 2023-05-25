/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:44:41 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:44:41 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <cmath>

class ClapTrap{
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;

    public:
    //constructors and destructors
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &copy);
    ClapTrap();
    ~ClapTrap();
    //copy assignment operator
    ClapTrap &operator=(ClapTrap const &copy);
    //methods
    void attack(const std::string& target); 
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    //getters and setters
    int getHitPoints()const;
    int getEnergyPoints() const;
    int getAttackDamage() const;
    std::string getName() const;
    void setHitPoints(int hitPoints);
    void setEnergyPoints(int energyPoints);
    void setAttackDamage(int attackDamage);
    void setName(std::string name);
    
    

};

#endif