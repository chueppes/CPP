/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:46:22 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:46:22 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
    public:
    //constructors and destructors
        Dog();
        Dog(const Dog &copy);
        ~Dog();
    //Copy Assignment Operator
        Dog &operator=(const Dog &copy);
    //Member functions
        void makeSound() const;
};
#endif