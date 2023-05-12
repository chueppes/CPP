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
        Zombie(std::string name);
        ~Zombie();
        Zombie  *newZombie(std::string name);
        void randomChump(std::string name);
        void announce();

};

#endif