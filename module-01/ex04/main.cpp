#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

int error(std::string message){
    std::cout << "\033[0;31m";
    std::cout << message << std::endl;
    std::cout << "\033[0m";
    return(1);
}

int main(int argc, char argv){
    if (argc == 4){


    }
    else
        error("Wrong input. Try again.\n Remember: ./replace [filename] [word to be replaced] [word that will replace]\n");
}