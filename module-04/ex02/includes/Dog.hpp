#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain *_brain;
    public:
    //constructors and destructors
        Dog();
        Dog(const Dog &copy);
        ~Dog();
    //Copy Assignment Operator
        Dog &operator=(const Dog &copy);
    //Member functions
        void makeSound() const;
        void getIdeas() const;
        void setIdeas(int i, std::string ideas)const;
};
#endif