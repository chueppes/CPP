/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:40:00 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/19 09:40:00 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie *zombie;
    zombie=NULL;
    zombie = zombie->newZombie("Bloater");
    zombie->announce();
    zombie->randomChump("Shamblers");
    delete zombie;
}