/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:46:18 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:46:18 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
    public:
    //constructors and destructors
        Cat();
        Cat(const Cat &copy);
        ~Cat();
    //Copy Assignment Operator
        Cat &operator=(const Cat &copy);
    //Member functions
        void makeSound() const;
};
#endif