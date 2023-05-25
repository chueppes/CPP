/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:47:34 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:47:34 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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