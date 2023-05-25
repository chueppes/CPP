/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:47:40 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:47:40 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
    //constructors and destructors
        WrongCat();
        WrongCat(const WrongCat &copy);
        ~WrongCat();
    //Copy Assignment Operator
        WrongCat &operator=(const WrongCat &copy);
    //Member functions
        void makeSound() const;
};
#endif