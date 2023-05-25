/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:48:05 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:48:05 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Animal.hpp"
#include "./includes/Cat.hpp"
#include "./includes/Dog.hpp"
#include "./includes/Brain.hpp"
#include "./includes/WrongAnimal.hpp"
#include "./includes/WrongCat.hpp"

int main(){
    Animal *animals[10];
    std::cout << "\033[1;33m>>>>>Average testing<<<<<\n\033[0m";
    for(int i=0; i<10; i++){
        if(i<5) 
            animals[i] = new Dog();
        else 
            animals[i] = new Cat();
    }
    for(int i=0; i<10; i++){
        delete animals[i];
    }
    std::cout << "\033[0;31m-------------\n\033[0m";
    std::cout << "\033[1;33m>>>>>Deepcopy testing<<<<<\n\033[0m";
    Cat *Garfield = new Cat();
     Garfield->setIdeas(0, "Damn I wish I had sum lasagna right now.\n");
     Garfield->setIdeas(1, "I finna grab sum Lasagna at the kitchen.\n");
     Garfield->setIdeas(3, "*microwave bips* Fuck yeaaaa we be doin' the lasagna boiii.\n");
    Cat *babyGarfield = new Cat(*Garfield);
    std::cout << "\033[0;31m-------------\n\033[0m";
    std::cout << "\033[0;32mNow let's see what baby Garfield and Papa Garfield think.\n\033[0m";
    std::cout << Garfield->getType() <<" ideas are: \n";
    Garfield->getIdeas();
    std::cout << "\033[0;31m-------------\n\033[0m";
    std::cout << babyGarfield->getType() <<" ideas are: \n";
    babyGarfield->getIdeas();
    delete(Garfield);
    delete(babyGarfield);
    return 0;
  
}