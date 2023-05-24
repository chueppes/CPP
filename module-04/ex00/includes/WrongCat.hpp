#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
    //constructors and destructors
        WrongCat();
        WrongCat(const WrongCat &copy);
        ~WrongCat();
    //Copy Assignment Operator
        WrongCat &operator=(const WrongCat &copy);
    //Member functions
        void makeSound() const;
};
#endif