#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain *_brain;
    public:
    //constructors and destructors
        Cat();
        Cat(const Cat &copy);
        ~Cat();
    //Copy Assignment Operator
        Cat &operator=(const Cat &copy);
    //Member functions
        void makeSound() const;
        void getIdeas() const;
        void setIdeas(int i, std::string ideas)const;
};
#endif