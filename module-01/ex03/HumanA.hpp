#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include "Weapon.hpp"

class HumanA{
    private:
    //aqui é usado a referencia pq a referencia nao pode apontar pra nulo
    //e segundo o pdf o humano a sempre tem uma arma
        Weapon &_weapon;
        std::string _name;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack();
    //Aqui é usado o & pra poder alterar o valor por referencia
        void setWeapon(Weapon &weapon);

};

#endif