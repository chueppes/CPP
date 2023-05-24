#include "./includes/Animal.hpp"
#include "./includes/Cat.hpp"
#include "./includes/Dog.hpp"
#include "./includes/Brain.hpp"
#include "./includes/WrongAnimal.hpp"
#include "./includes/WrongCat.hpp"

int main(){
    Animal *Garfield = new Cat();
    Animal *Odie = new Dog();
    //Animal *Jon = new Animal();
    //Animal Jon("jon");
    Garfield->makeSound();
    Odie->makeSound();

    delete Garfield;
    delete Odie;
    return 0;
  
}