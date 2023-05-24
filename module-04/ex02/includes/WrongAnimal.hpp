#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>

class WrongAnimal {
protected:
    std::string _type;
public:
    //constructors and destructors
    WrongAnimal();
    WrongAnimal(const WrongAnimal& copy);
    virtual ~WrongAnimal();
    //copy assignment operator
    WrongAnimal& operator=(const WrongAnimal& copy);
    //member function
    virtual void makeSound() const;
    //getters and setters
    std::string getType() const;
    void setType(std::string Type);
};

#endif
