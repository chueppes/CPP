#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
    private:
    public:
        //constructors and destructor
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &copy);
        ~FragTrap();
    //copy assignment operator
        FragTrap &operator=(FragTrap const &copy);
    //methods
        void highFivesGuys();
        void beRepaired(unsigned int amount);
};
#endif