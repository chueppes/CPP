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
    
    

}

#endif