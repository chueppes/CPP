#include "Zombie.hpp"

// Zombie::Zombie(std::string name){
//     this->_name = name;
// }

void Zombie::announce(){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name){
    this->_name = name;
}

Zombie::~Zombie(){
    std::cout << "Zombie named: " << this->_name << " successfully destroyed.\n";
}
