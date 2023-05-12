#include "Zombie.hpp"

int main(){
    Zombie *zombie;
    zombie=NULL;
    zombie = zombie->newZombie("Melman");
    zombie->announce();
    zombie->randomChump("Morty");
    delete zombie;
}