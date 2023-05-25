/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:47:29 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:47:29 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain{
    private:
        std::string _ideas[100];
    public:
    //constructors and destructors
        Brain();
        Brain(const Brain &copy);
        ~Brain();
    //copy operator assignment
    Brain &operator=(const Brain &copy);
    //member functions
    std::string getIdeas(int i) const;
    void setIdeas(int i, std::string ideas);
};
#endif