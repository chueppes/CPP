#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    this->setAttackDamage(30);
    this->setEnergyPoints(100);
    this->setHitPoints(100);
    this->setName("Fyrestone ClapTrap");
    std::cout << "FragTrap default constructor called.\n";
}

FragTrap::FragTrap(std::string name):ClapTrap(name){
    this->setAttackDamage(30);
    this->setEnergyPoints(100);
    this->setHitPoints(100);
    this->setName(name);
    std::cout << "Constructor for FragTrap " << name << " called.\n";
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called.\n";
}

FragTrap::FragTrap(const FragTrap &copy):ClapTrap(copy){
    std::cout << "FragTrap copy constructor called.\n";
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy){
    std::cout << "FragTrap copy assignment operator called.\n";
    ClapTrap::operator=(copy);
    return(*this);
}

void FragTrap::beRepaired(unsigned int amount){
    if(!this->getEnergyPoints()){
        std::cout << "No-can-do, folks! FragTrap is in quite a predicament here. I'm afraid I don't have enough points to undergo repairs at the moment.\n";
        return ;}
    this->setHitPoints(getHitPoints() + amount);
    if(this->getHitPoints() > 100)
        this->setHitPoints(100);
    this->setEnergyPoints(getEnergyPoints() - 1); 
    std::cout << "\033[0;32mRejoice, fellow adventurers! FragTrap " << this->getName() <<" is being showered with healing goodness, rejuvenating my circuits by " << amount << " points. \nCan you feel the energy surging through me? It's like a second wind in the midst of battle! With this revitalization, my final hitpoints stand at: " << this->getHitPoints() << "\n \033[0m  ";
}

void FragTrap::highFivesGuys(){
    std::cout <<  "Who's up for some good ol' Claptrap high fives? *raises robotic hand* Bring it in, folks! Woo!\n";
}