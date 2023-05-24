#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
    public:
    //constructors and destructors
        Cat();
        Cat(const Cat &copy);
        ~Cat();
    //Copy Assignment Operator
        Cat &operator=(const Cat &copy);
    //Member functions
        void makeSound() const;
};
#endif