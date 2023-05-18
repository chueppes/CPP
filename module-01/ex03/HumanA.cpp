#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon){
    this->_name = name;
    this->_weapon = weapon;
}

HumanA::~HumanA(){
    std::cout << this->_name << " has been killed.\n";
}

void HumanA::attack(){
    std::cout << this->_name << "uses " << this->_weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon){
    this->_weapon = weapon;
}