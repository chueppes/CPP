/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:44:54 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/24 21:44:54 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
    std::cout << "\033[1;33m Attacks given are yellow.\n\033[0m";
    std::cout << "\033[0;31m Attacks recieved are red.\n\033[0m";
    std::cout << "\033[0;32m Repairs are green.\n \033[0m";
	
	FragTrap	b("Wilhelm");

	b.beRepaired(5);
	b.attack("Handsome Jack");
	b.takeDamage(3);
	b.attack("Lillith");
	b.highFivesGuys();

}