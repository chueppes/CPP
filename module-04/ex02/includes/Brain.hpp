#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain{
    private:
        std::string _ideas[100];
    public:
    //constructors and destructors
        Brain();
        Brain(const Brain &copy);
        ~Brain();
    //copy operator assignment
    Brain &operator=(const Brain &copy);
    //member functions
    std::string getIdeas(int i) const;
    void setIdeas(int i, std::string ideas);
};
#endif