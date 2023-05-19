/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:40:37 by acalvo4           #+#    #+#             */
/*   Updated: 2023/05/19 09:40:37 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

int main(){
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;
    std::cout << "[brain] Address: " << &brain << std::endl;
    std::cout << "[stringPTR] Address: " << stringPTR << std::endl;
    std::cout << "[stringREF] Address: " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "[brain] Value: " << brain <<std::endl;
    std::cout << "[stringPTR] Value: " << *stringPTR << std::endl;
    std::cout << "[stringREF] Value: " << stringREF << std::endl;
}