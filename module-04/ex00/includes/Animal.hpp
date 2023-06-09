/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:46:14 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:46:14 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>

class Animal{
    protected:
        std::string _type;
    public:
    //constructors and destructors
        Animal();
        Animal(const Animal &copy);
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