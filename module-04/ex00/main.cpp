/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:46:56 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:46:56 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Animal.hpp"
#include "./includes/Cat.hpp"
#include "./includes/Dog.hpp"
#include "./includes/WrongAnimal.hpp"
#include "./includes/WrongCat.hpp"

int main(){
    const Animal *Jon = new Animal();
    const Animal  *Garfield = new Cat();
    const Animal  *Odie = new Dog();
    const WrongAnimal *wrongJon = new WrongAnimal();
    const WrongAnimal *wrongGarfield = new WrongCat();
    std::cout << Garfield->getType() << " " << std::endl;
    Garfield->makeSound();
    std::cout << "\033[0;31m-------------\n\033[0m";
    std::cout << Odie->getType() << " " << std::endl;
    Odie->makeSound();
    std::cout << "\033[0;31m-------------\n\033[0m";
    std::cout << "\033[0;32mShh, the animal is making a sound:\n\033[0m";
    Jon->makeSound();
    std::cout << "\033[0;31m-------------\n\033[0m";
    std::cout << "\033[0;32mIs this an animal? Let's listen to it:\n\033[0m";
    wrongJon->makeSound();
    std::cout << "\033[0;31m-------------\n\033[0m";
    std::cout << wrongGarfield->getType() << " " << std::endl;
    std::cout << "\033[0;32mOh! it's Jon, how can I help you?\n\033[0m";
    wrongGarfield->makeSound();
    std::cout << "\033[0;31m-------------\n\033[0m";

    delete Jon;
    delete Garfield;
    delete Odie;
    delete wrongJon;
    delete wrongGarfield;
    return 0;
}