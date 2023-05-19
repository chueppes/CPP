/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:40:34 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/19 09:40:34 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name){
    Zombie *horde = new Zombie[N];
    for(int i=0; i < N; i++){
        horde[i].setName(name);
    }
    return (horde);
}