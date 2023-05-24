#include "../includes/Dog.hpp"

Dog::Dog():Animal(){
    Animal::setType("Dog");
    this->_brain = new Brain();
    std::cout << "Dog default constructor called.\n";
}

Dog::Dog(const Dog &copy):Animal(){
    *this = copy;
    this->_brain = new Brain();
    std::cout << "Dog copy constructor called.\n";
}
Dog::~Dog(){
    delete this->_brain;
    std::cout << "Dog destructor called.\n";

}
Dog& Dog::operator=(const Dog &copy){
    std::cout << "Dog copy assignment operator called.\n";
    this->_brain = new Brain(*copy._brain);
    Animal::operator=(copy);
    std::cout << this->getType() << "\n";
    return(*this);
}
void Dog::makeSound() const{
    std::cout << "-Bark!\n";
}

void Dog::getIdeas()const{
    for(int i=0; i<100; i++){
        std::cout << "I have an idea! " << this->_brain->getIdeas(i) << " what do you think?\n";
    }
}

void Dog::setIdeas(int i, std::string ideas)const{
    this->_brain->setIdeas(i, ideas);
}
