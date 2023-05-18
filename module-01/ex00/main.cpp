#include "Zombie.hpp"

int main(){
    Zombie *zombie;
    zombie=NULL;
    zombie = zombie->newZombie("Bloater");
    zombie->announce();
    zombie->randomChump("Shamblers");
    delete zombie;
}