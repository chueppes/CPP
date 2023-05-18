#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

class Zombie{
    private:
        std::string _name;
    public:
        ~Zombie();
        void announce();
        void setName(std::string name);
        Zombie* zombieHorde( int N, std::string name );
};
#endif