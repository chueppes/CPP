#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
    WrongAnimal::setType("Not a real cat");
    std::cout << "WrongCat Default Constructor called.\n";
}

WrongCat::WrongCat(const WrongCat &copy)  : WrongAnimal(){
    *this = copy;
    std::cout << "WrongCat copy constructor called.\n";
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called.\n";
}

WrongCat& WrongCat::operator=(const WrongCat& copy){
    std::cout << "WrongCat copy assignment operator called.\n";
    WrongAnimal::operator=(copy);
    return(*this);
}

void WrongCat::makeSound()const{
    std::cout << "-Do you have anything non-dairy?\n";
}
