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