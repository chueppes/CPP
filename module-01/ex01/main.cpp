/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:40:17 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/19 09:40:17 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie *horde=NULL;
    int n=10;
    horde = horde->zombieHorde(n, "Clicker");
    for(int i=0; i<n; i++){
        horde[i].announce();
    }
    delete[] horde;
}