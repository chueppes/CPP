#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
    public:
    //constructors and destructors
        Dog();
        Dog(const Dog &copy);
        ~Dog();
    //Copy Assignment Operator
        Dog &operator=(const Dog &copy);
    //Member functions
        void makeSound() const;
};
#endif