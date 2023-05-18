#include "Weapon.hpp"
//igual setweapon
Weapon::Weapon(std::string type){
    this->_type = type;
}

const std::string Weapon::getType(){
    return this->_type;
}

void Weapon::setType(std::string type){
    this->_type = type;
}

Weapon::~Weapon(){
    std::cout << "Weapon destroyed\n";
}
