#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include "Weapon.hpp"

class HumanB{
    private:
        Weapon *_weapon;
        std::string _name;
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &weapon);

};

#endif