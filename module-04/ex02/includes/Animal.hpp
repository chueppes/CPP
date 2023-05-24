#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>

class Animal{
    protected:
        std::string _type;
        Animal();
        Animal(const Animal &copy);
    public:
    //constructors and destructors
        virtual ~Animal();
    //copy assignment operator
        Animal &operator=(const Animal &copy);
    //member function
        virtual void makeSound() const;
    //getters end setters
        std::string getType() const;
        void setType(std::string Type);
};

#endif