#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
    private:
    public:
    //constructors and destructor
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &copy);
        ~ScavTrap();
    //copy assignment operator
        ScavTrap &operator=(ScavTrap const &copy);
    //methods
        void attack(const std::string& target); 
        void guardGate();
        void beRepaired(unsigned int amount);
};

#endif