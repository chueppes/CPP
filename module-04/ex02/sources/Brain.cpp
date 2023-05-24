#include "../includes/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called.\n";
}

Brain::Brain(const Brain &copy){
    std::cout << "Brain copy constructor called.\n";
    *this=copy;
}

Brain::~Brain(){
    std::cout << "Brain destructor called. It feels like a lobotomy.\n";
}

Brain &Brain::operator=(const Brain &copy){
    std::cout << "Brain copy assigment operator.\n";
    for(int i=0; i<100; i++){
        this->_ideas[i].assign(copy._ideas[i]);
    }
    return(*this);
}

std::string Brain::getIdeas(int i) const{
    return(this->_ideas[i]);
}

void Brain::setIdeas(int i, std::string ideas){
    if (i<100 && i >=0)
        this->_ideas[i] = ideas;
    else    
        std::cout<< "Uh, I don't think ideas should be here.\n";
}
