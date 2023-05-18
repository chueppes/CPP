#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->_name = name;
    this->_weapon = NULL;
}

HumanB::~HumanB(){
    std::cout << this->_name << " has been killed.\n";
}

void HumanB::attack(){
    std::cout << this->_name << " uses " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
    this->_weapon=&weapon;
}
